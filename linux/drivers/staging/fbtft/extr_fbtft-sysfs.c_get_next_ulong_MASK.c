
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long*) ;
 char* FUNC_1 (char**,char*) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, unsigned long *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5;

 if (!VAR_1 || !(*VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_3);

 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_4, VAR_2);
}
