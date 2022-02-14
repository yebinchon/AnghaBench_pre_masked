
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_2 = VAR_1 + 1;
 u32 VAR_3;

 if (!VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_0[VAR_3]);

 FUNC_0(VAR_0);
 VAR_0 = ((void*)0);
}
