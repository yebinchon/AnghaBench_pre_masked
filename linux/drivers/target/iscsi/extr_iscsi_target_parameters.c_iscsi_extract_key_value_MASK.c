
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

int FUNC_2(char *VAR_0, char **VAR_1, char **VAR_2)
{
 *VAR_2 = FUNC_1(VAR_0, '=');
 if (!*VAR_2) {
  FUNC_0("Unable to locate \"=\" separator for key,"
    " ignoring request.\n");
  return -1;
 }

 *VAR_1 = VAR_0;
 **VAR_2 = '\0';
 *VAR_2 = *VAR_2 + 1;

 return 0;
}
