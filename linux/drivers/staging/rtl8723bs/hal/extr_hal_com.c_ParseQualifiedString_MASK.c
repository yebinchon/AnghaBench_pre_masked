
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,char const*,int) ;

bool FUNC_1(
 char *VAR_0, u32 *VAR_1, char *VAR_2, char VAR_3, char VAR_4
)
{
 u32 VAR_5 = 0, VAR_6 = 0;
 char VAR_7 = VAR_0[(*VAR_1)++];

 if (VAR_7 != VAR_3)
  return 0;

 VAR_5 = (*VAR_1);
 while ((VAR_7 = VAR_0[(*VAR_1)++]) != VAR_4)
  ;
 VAR_6 = (*VAR_1) - 2;
 FUNC_0((char *)VAR_2, (const char *)(VAR_0+VAR_5), VAR_6-VAR_5+1);

 return 1;
}
