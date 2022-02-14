
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, char **VAR_4)
{
 int VAR_5;
 char *VAR_6;
 char *VAR_7 = *VAR_4;
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 > 126)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_6)
  return -VAR_0;
 if (VAR_6[VAR_5 - 1] == '\n')
  VAR_6[VAR_5 - 1] = '\0';
 FUNC_0(VAR_7);
 *VAR_4 = VAR_6;
 return 0;
}
