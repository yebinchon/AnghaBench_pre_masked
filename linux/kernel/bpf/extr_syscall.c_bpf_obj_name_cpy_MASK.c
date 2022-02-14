
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = VAR_3 + VAR_0;

 FUNC_1(VAR_2, 0, VAR_0);

 while (VAR_3 < VAR_4 && *VAR_3) {
  if (!FUNC_0(*VAR_3) &&
      *VAR_3 != '_' && *VAR_3 != '.')
   return -VAR_1;
  *VAR_2++ = *VAR_3++;
 }


 if (VAR_3 == VAR_4)
  return -VAR_1;

 return 0;
}
