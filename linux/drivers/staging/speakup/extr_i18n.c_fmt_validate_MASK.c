
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char**) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(char *VAR_0, char *VAR_1)
{
 bool VAR_2 = 1;
 bool VAR_3 = 1;
 char *VAR_4 = VAR_0;
 char *VAR_5 = VAR_1;

 while (VAR_3 && VAR_2) {
  VAR_4 = FUNC_1(VAR_4);
  VAR_5 = FUNC_1(VAR_5);
  if (VAR_4 && VAR_5) {

   VAR_2 = FUNC_0(&VAR_4, &VAR_5);
  } else {

   VAR_3 = 0;

   if (VAR_4 || VAR_5)
    VAR_2 = 0;
  }
 }
 return VAR_2;
}
