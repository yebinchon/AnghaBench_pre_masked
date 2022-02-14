
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, unsigned long *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 char *VAR_7, VAR_8;


 if (VAR_3 & 0x07)
  return -VAR_0;

 while (*VAR_1) {
  VAR_8 = *VAR_1++;
  if (VAR_8 != '+' && VAR_8 != '-')
   return -VAR_0;
  VAR_4 = VAR_6 = FUNC_2(VAR_1, &VAR_7, 0);
  if (VAR_1 == VAR_7 || VAR_4 >= VAR_3)
   return -VAR_0;
  VAR_1 = VAR_7;
  if (*VAR_1 == '-') {
   VAR_6 = FUNC_2(++VAR_1, &VAR_7, 0);
   if (VAR_1 == VAR_7 || VAR_4 > VAR_6 || VAR_6 >= VAR_3)
    return -VAR_0;
   VAR_1 = VAR_7;
  }
  for (VAR_5 = VAR_4; VAR_5 <= VAR_6; VAR_5++)
   if (VAR_8 == '+')
    FUNC_1(VAR_5, VAR_2);
   else
    FUNC_0(VAR_5, VAR_2);
  while (*VAR_1 == ',' || *VAR_1 == '\n')
   VAR_1++;
 }

 return 0;
}
