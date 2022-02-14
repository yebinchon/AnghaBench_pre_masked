
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int int32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3,
        u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 int32_t VAR_9, VAR_10;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 VAR_7 = (VAR_3 - 1) / 8;
 VAR_9 = (VAR_3 - 1) % 8;
 VAR_10 = VAR_2;
 while (VAR_10 > 0) {
  VAR_8 = (VAR_9 + VAR_10 > 8) ?
      8 : VAR_9 + VAR_10;
  VAR_6 = (((1 << VAR_8) - 1) ^ ((1 << VAR_9) - 1)) <<
      (VAR_4 * 8);
  VAR_0[VAR_7] &= ~VAR_6;
  VAR_0[VAR_7] |= ((VAR_5 << VAR_9) <<
          (VAR_4 * 8)) & VAR_6;
  VAR_10 -= 8 - VAR_9;
  VAR_5 = VAR_5 >> (8 - VAR_9);
  VAR_9 = 0;
  VAR_7++;
 }
}
