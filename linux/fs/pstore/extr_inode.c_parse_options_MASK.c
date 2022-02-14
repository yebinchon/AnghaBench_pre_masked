
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;

 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(char *VAR_2)
{
 char *VAR_3;
 substring_t VAR_4[VAR_0];
 int VAR_5;

 if (!VAR_2)
  return;

 while ((VAR_3 = FUNC_3(&VAR_2, ",")) != ((void*)0)) {
  int VAR_6;

  if (!*VAR_3)
   continue;

  VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4);
  switch (VAR_6) {
  case 128:
   if (!FUNC_0(&VAR_4[0], &VAR_5))
    FUNC_2(VAR_5);
   break;
  }
 }
}
