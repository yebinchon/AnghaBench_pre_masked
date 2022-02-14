
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_1(char **VAR_1, int *VAR_2, const char *VAR_3, int VAR_4)
{
 *VAR_2 -= VAR_4;
 if (*VAR_2 < 0)
  return -VAR_0;
 *VAR_1 -= VAR_4;
 FUNC_0(*VAR_1, VAR_3, VAR_4);
 return 0;
}
