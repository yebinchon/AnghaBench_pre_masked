
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 unsigned long VAR_5 = VAR_2 << VAR_0;

 if (VAR_4) {
  FUNC_1("No low mem\n");
  return;
 }

 FUNC_0("mapped [mem %#010llx-%#010llx] (%luMB)\n",
        (unsigned long long)VAR_3,
        (unsigned long long)VAR_1,
        VAR_5 >> 20);
}
