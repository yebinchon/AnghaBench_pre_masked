
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char*** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_2)
{
 char ***VAR_3;
 char **VAR_4;
 int VAR_5;

 VAR_3 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = *VAR_3++;
  if (!VAR_4 || !*VAR_4)
   break;
  while (*VAR_4) {
   if (!FUNC_0(VAR_2, *VAR_4))
    return VAR_5 + 1;
   VAR_4++;
  }
 }
 return 0;
}
