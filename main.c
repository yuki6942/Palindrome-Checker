#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int length, i, flag = 0;

    printf("Enter a string: ");
    scanf("%s", input);

    length = strlen(input);

    for (i=0; i < length; i++) {
        if (input[i] != input[length-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("%s is not a palindrome!", input);
    } else {
        printf("%s is a palindrome!", input);
    }

    return 0;
}
