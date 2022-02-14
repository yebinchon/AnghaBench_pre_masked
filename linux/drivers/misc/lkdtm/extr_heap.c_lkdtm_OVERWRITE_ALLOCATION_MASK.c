
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t,int ) ;

void FUNC_2(void)
{
 size_t VAR_1 = 1020;
 u32 *VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return;

 VAR_2[1024 / sizeof(u32)] = 0x12345678;
 FUNC_0(VAR_2);
}
