
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



__attribute__((used)) static char *FUNC_0(int VAR_0, u8 *VAR_1, size_t VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 if (VAR_2 < 1)
  return ((void*)0);

 VAR_1[VAR_2 - 1] = 0;
 for (VAR_4 = VAR_1; *VAR_4 != 0; VAR_4++) {
  VAR_6 = 0;
  VAR_3 = ((void*)0);
  while (*VAR_4 != 0 && *VAR_4 != '\n') {
   VAR_5 = VAR_4;
   while (*VAR_4 != 0 && *VAR_4 != '\t' && *VAR_4 != '\n')
    VAR_4++;
   if (VAR_6 == VAR_0)
    VAR_3 = VAR_5;
   if (*VAR_4 != '\t')
    break;
   *VAR_4 = 0;
   VAR_6++;
   VAR_4++;
  }
  if (*VAR_4 == 0)
   break;
  *VAR_4 = 0;
 }
 return VAR_3;
}
