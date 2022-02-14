
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0)
{
 int VAR_1 = 0;
 char *VAR_2 = VAR_0;

 while (VAR_2 && !VAR_1) {
  VAR_2 = FUNC_0(VAR_2, '%');
  if (VAR_2) {

   while (VAR_2[0] == '%' &&
          VAR_2[1] == '%')
    VAR_2 += 2;
   if (*VAR_2 == '%')
    VAR_1 = 1;
   else if (*VAR_2 == '\0')
    VAR_2 = ((void*)0);
  }
 }

 return VAR_2;
}
