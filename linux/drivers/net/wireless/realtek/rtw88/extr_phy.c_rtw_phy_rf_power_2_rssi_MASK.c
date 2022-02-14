
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int sum ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;

u8 FUNC_3(s8 *VAR_1, u8 VAR_2)
{
 s8 VAR_3;
 u8 VAR_4;
 u64 VAR_5;
 u64 VAR_6 = 0;
 u8 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_3 = VAR_1[VAR_7];
  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 += VAR_5;
 }

 VAR_6 = (VAR_6 + (1 << (VAR_0 - 1))) >> VAR_0;
 switch (VAR_2) {
 case 2:
  VAR_6 >>= 1;
  break;
 case 3:
  VAR_6 = ((VAR_6) + ((VAR_6) << 1) + ((VAR_6) << 3)) >> 5;
  break;
 case 4:
  VAR_6 >>= 2;
  break;
 default:
  break;
 }

 return FUNC_1(VAR_6);
}
