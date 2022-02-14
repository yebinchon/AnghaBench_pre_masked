
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;

 char* FUNC_1 (char**,char*) ;
 int VAR_1 ;

int FUNC_2(char *VAR_2, int *VAR_3)
{
 char *VAR_4;
 substring_t VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  return 1;

 while ((VAR_4 = FUNC_1(&VAR_2, ",")) != ((void*)0)) {
  if (!*VAR_4)
   continue;

  VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_5);
  switch (VAR_6) {
  case 128:
   *VAR_3 = 1;
   break;
  default:
   break;
  }
 }

 return 1;
}
