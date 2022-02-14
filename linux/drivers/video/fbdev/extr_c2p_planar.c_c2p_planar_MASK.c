
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int d ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (void*,int,int,int*) ;
 int FUNC_4 (void*,int,int,int*,int) ;

void FUNC_5(void *VAR_0, const void *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
  u32 VAR_5, u32 VAR_6, u32 VAR_7,
  u32 VAR_8, u32 VAR_9)
{
 union {
  u8 pixels[32];
  u32 words[8];
 } VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 const u8 *VAR_15;
 void *VAR_16;

 VAR_0 += VAR_3*VAR_6+(VAR_2 & ~31);
 VAR_11 = VAR_2 % 32;
 VAR_12 = 0xffffffffU >> VAR_11;
 VAR_13 = ~(0xffffffffU >> ((VAR_11+VAR_4) % 32));
 while (VAR_5--) {
  VAR_15 = VAR_1;
  VAR_16 = VAR_0;
  VAR_14 = VAR_4;
  if (VAR_11+VAR_4 <= 32) {

   VAR_12 &= VAR_13;
   FUNC_2(VAR_10.pixels, 0, sizeof(VAR_10));
   FUNC_1(VAR_10.pixels+VAR_11, VAR_15, VAR_4);
   VAR_15 += VAR_4;
   FUNC_0(VAR_10.words);
   FUNC_4(VAR_16, VAR_7, VAR_9, VAR_10.words,
         VAR_12);
   VAR_16 += 4;
  } else {

   VAR_14 = VAR_4;

   if (VAR_11) {
    VAR_14 = 32 - VAR_11;
    FUNC_2(VAR_10.pixels, 0, VAR_11);
    FUNC_1(VAR_10.pixels+VAR_11, VAR_15, VAR_14);
    VAR_15 += VAR_14;
    FUNC_0(VAR_10.words);
    FUNC_4(VAR_16, VAR_7, VAR_9,
          VAR_10.words, VAR_12);
    VAR_16 += 4;
    VAR_14 = VAR_4-VAR_14;
   }

   while (VAR_14 >= 32) {
    FUNC_1(VAR_10.pixels, VAR_15, 32);
    VAR_15 += 32;
    FUNC_0(VAR_10.words);
    FUNC_3(VAR_16, VAR_7, VAR_9, VAR_10.words);
    VAR_16 += 4;
    VAR_14 -= 32;
   }

   VAR_14 %= 32;
   if (VAR_14 > 0) {
    FUNC_1(VAR_10.pixels, VAR_15, VAR_14);
    FUNC_2(VAR_10.pixels+VAR_14, 0, 32-VAR_14);
    FUNC_0(VAR_10.words);
    FUNC_4(VAR_16, VAR_7, VAR_9,
          VAR_10.words, VAR_13);
   }
  }
  VAR_1 += VAR_8;
  VAR_0 += VAR_6;
 }
}
