
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 char *VAR_1 = VAR_0;

 if ((*VAR_1 == '0') && ((*(VAR_1+1) == 'x') || (*(VAR_1+1) == 'X'))) {
  VAR_1 += 2;
  for (; *VAR_1 && (*VAR_1 != ' ') && (*VAR_1 != '\n'); VAR_1++) {
   if (!FUNC_1(*VAR_1))
    return 0;
  }
 } else {
  if (*VAR_1 == '-')
   VAR_1++;
  for (; *VAR_1 && (*VAR_1 != ' ') && (*VAR_1 != '\n'); VAR_1++) {
   if (!FUNC_0(*VAR_1))
    return 0;
  }
 }
 return (int) (VAR_1-VAR_0);
}
