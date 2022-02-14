
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static bool FUNC_2(char **VAR_0, char **VAR_1)
{
 bool VAR_2 = 0;
 char *VAR_3 = FUNC_0(*VAR_0);
 char *VAR_4 = FUNC_0(*VAR_1);
 size_t VAR_5 = VAR_3 - *VAR_0;
 size_t VAR_6 = VAR_4 - *VAR_1;

 if ((VAR_5 == VAR_6) && !FUNC_1(*VAR_0, *VAR_1, VAR_5))
  VAR_2 = 1;

 *VAR_0 = VAR_3;
 *VAR_1 = VAR_4;
 return VAR_2;
}
