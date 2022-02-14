
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,char*) ;
 char** FUNC_3 (int ,char*,char*,int*) ;

__attribute__((used)) static void FUNC_4(void)
{
 char **VAR_1, **VAR_2;
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_1 = FUNC_3(VAR_0, "device", "", &VAR_3);
 if (FUNC_0(VAR_1))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_2 = FUNC_3(VAR_0, "device", VAR_1[VAR_5], &VAR_4);
  if (FUNC_0(VAR_2))
   continue;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   FUNC_2(VAR_1[VAR_5], VAR_2[VAR_6]);
  FUNC_1(VAR_2);
 }
 FUNC_1(VAR_1);
}
