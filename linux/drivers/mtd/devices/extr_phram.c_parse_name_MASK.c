
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char **VAR_3, const char *VAR_4)
{
 size_t VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_1(VAR_4) + 1;
 if (VAR_5 > 64)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 *VAR_3 = VAR_6;
 return 0;
}
