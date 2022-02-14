
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;

__attribute__((used)) static void FUNC_3(char **VAR_1, const char *VAR_2)
{
 char *VAR_3 = *VAR_1;

 *VAR_1 = *VAR_1 ? FUNC_0(VAR_0, "%s,%s", *VAR_1, VAR_2) :
  FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_3);
}
