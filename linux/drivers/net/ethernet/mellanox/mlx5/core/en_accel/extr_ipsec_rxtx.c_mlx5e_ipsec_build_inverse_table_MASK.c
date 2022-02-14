
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long long,size_t) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;

void FUNC_2(void)
{
 u16 VAR_2;
 u32 VAR_3;







 VAR_1[1] = FUNC_1(0xFFFF);
 for (VAR_3 = 2; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(1ULL << 32, VAR_3) >> 16;
  VAR_1[VAR_3] = FUNC_1(VAR_2);
 }
}
