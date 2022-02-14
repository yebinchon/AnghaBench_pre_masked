
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(int VAR_11, u16 VAR_12, u16 VAR_13, u16 VAR_14,
          u16 VAR_15, u16 VAR_16, u16 VAR_17, u16 VAR_18,
          u32 VAR_19)
{
 u32 VAR_20, VAR_21;
 u32 VAR_22 = 0;

 VAR_17--;
 VAR_16--;
 FUNC_0(VAR_18, VAR_7);
 if ((VAR_13 < VAR_15) || ((VAR_13 == VAR_15) && (VAR_12 <= VAR_14))) {
  VAR_20 = VAR_10 * (VAR_13 + VAR_17) + VAR_12 + VAR_16;
  VAR_21 = VAR_10 * (VAR_15 + VAR_17) + VAR_14 + VAR_16;
  if (VAR_19) {
   if (VAR_11)
    VAR_22 = ((VAR_16 >> 3) + 1) * (VAR_17 + 1) - 1;
   else
    VAR_22 =
        (((VAR_16 >> 4) + 1) * (VAR_17 + 1) - 1) * 2;

   FUNC_0((1 << 5) | 1, VAR_6);
  } else
   FUNC_0(1, VAR_6);
 } else {
  VAR_20 = VAR_10 * VAR_13 + VAR_12;
  VAR_21 = VAR_10 * VAR_15 + VAR_14;
  if (VAR_19) {
   FUNC_0((1 << 5), VAR_6);
  } else {
   FUNC_0(0, VAR_6);
  }
 }
 if (VAR_11) {
  VAR_20 <<= 1;
  VAR_21 <<= 1;
 }
 FUNC_0(VAR_16, VAR_3);
 FUNC_0(VAR_17, VAR_0);
 FUNC_0(VAR_20 & 0xffff, VAR_9);
 FUNC_0(VAR_20 >> 16, VAR_8);
 FUNC_0(VAR_21 & 0xffff, VAR_2);
 FUNC_0(VAR_21 >> 16, VAR_1);
 if (VAR_19) {
  VAR_22 += VAR_19;
  FUNC_0(VAR_22 & 0xffff, VAR_5);
  FUNC_0(VAR_22 >> 16, VAR_4);
 }
 FUNC_1(VAR_11);
}
