
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;
 char FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3(
 char *VAR_0)
{
 char *VAR_1;
 u32 VAR_2 = FUNC_1(VAR_0), VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1 = &VAR_0[VAR_3];
  if (!FUNC_0(*VAR_1))
   continue;

  *VAR_1 = FUNC_2(*VAR_1);
 }
}
