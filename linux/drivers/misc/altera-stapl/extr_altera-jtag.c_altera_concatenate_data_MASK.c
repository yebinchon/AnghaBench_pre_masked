
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
typedef long u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0,
    u8 *VAR_1,
    u32 VAR_2,
    u8 *VAR_3,
    u32 VAR_4,
    u32 VAR_5,
    u8 *VAR_6,
    u32 VAR_7)




{
 u32 VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0L; VAR_8 < VAR_2; ++VAR_8) {
  if (VAR_1[VAR_8 >> 3L] & (1L << (VAR_8 & 7L)))
   VAR_0[VAR_8 >> 3L] |= (1L << (VAR_8 & 7L));
  else
   VAR_0[VAR_8 >> 3L] &= ~(u32)(1L << (VAR_8 & 7L));

 }

 VAR_9 = VAR_4;
 VAR_10 = VAR_2 + VAR_5;
 for (; VAR_8 < VAR_10; ++VAR_8, ++VAR_9) {
  if (VAR_3[VAR_9 >> 3L] & (1L << (VAR_9 & 7L)))
   VAR_0[VAR_8 >> 3L] |= (1L << (VAR_8 & 7L));
  else
   VAR_0[VAR_8 >> 3L] &= ~(u32)(1L << (VAR_8 & 7L));

 }

 VAR_9 = 0L;
 VAR_10 = VAR_2 + VAR_5 + VAR_7;
 for (; VAR_8 < VAR_10; ++VAR_8, ++VAR_9) {
  if (VAR_6[VAR_9 >> 3L] & (1L << (VAR_9 & 7L)))
   VAR_0[VAR_8 >> 3L] |= (1L << (VAR_8 & 7L));
  else
   VAR_0[VAR_8 >> 3L] &= ~(u32)(1L << (VAR_8 & 7L));

 }
}
