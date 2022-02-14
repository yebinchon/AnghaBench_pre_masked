
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

char *FUNC_3(const char *VAR_2)
{
 char **VAR_3 = VAR_0;
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  char *VAR_6 = *VAR_3++;

  if (!VAR_6)
   continue;

  if ((FUNC_2(VAR_2, VAR_6, VAR_4) == 0)
   && ((VAR_6[VAR_4] == '\0')
     || (VAR_6[VAR_4] == '='))) {
   char *VAR_7 = FUNC_0(VAR_6, '=');
   return VAR_7 ? ++VAR_7 : "";
  }
 }
 return ((void*)0);
}
