
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
 int FUNC_3 (void*,int,int*) ;
 int FUNC_4 (void*,int,int*,int) ;

void FUNC_5(void *VAR_0, const void *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
  u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 union {
  u8 pixels[16];
  u32 words[4];
 } VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 const u8 *VAR_14;
 void *VAR_15;

 VAR_0 += VAR_3*VAR_6+(VAR_2 & ~15)*VAR_8;
 VAR_10 = VAR_2 % 16;
 VAR_11 = 0xffffU >> VAR_10;
 VAR_11 |= VAR_11 << 16;
 VAR_12 = 0xffffU ^ (0xffffU >> ((VAR_10+VAR_4) % 16));
 VAR_12 |= VAR_12 << 16;
 while (VAR_5--) {
  VAR_14 = VAR_1;
  VAR_15 = VAR_0;
  VAR_13 = VAR_4;
  if (VAR_10+VAR_4 <= 16) {

   VAR_11 &= VAR_12;
   FUNC_2(VAR_9.pixels, 0, sizeof(VAR_9));
   FUNC_1(VAR_9.pixels+VAR_10, VAR_14, VAR_4);
   VAR_14 += VAR_4;
   FUNC_0(VAR_9.words);
   FUNC_4(VAR_15, VAR_8, VAR_9.words, VAR_11);
   VAR_15 += VAR_8*2;
  } else {

   VAR_13 = VAR_4;

   if (VAR_10) {
    VAR_13 = 16 - VAR_10;
    FUNC_2(VAR_9.pixels, 0, VAR_10);
    FUNC_1(VAR_9.pixels+VAR_10, VAR_14, VAR_13);
    VAR_14 += VAR_13;
    FUNC_0(VAR_9.words);
    FUNC_4(VAR_15, VAR_8, VAR_9.words, VAR_11);
    VAR_15 += VAR_8*2;
    VAR_13 = VAR_4-VAR_13;
   }

   while (VAR_13 >= 16) {
    FUNC_1(VAR_9.pixels, VAR_14, 16);
    VAR_14 += 16;
    FUNC_0(VAR_9.words);
    FUNC_3(VAR_15, VAR_8, VAR_9.words);
    VAR_15 += VAR_8*2;
    VAR_13 -= 16;
   }

   VAR_13 %= 16;
   if (VAR_13 > 0) {
    FUNC_1(VAR_9.pixels, VAR_14, VAR_13);
    FUNC_2(VAR_9.pixels+VAR_13, 0, 16-VAR_13);
    FUNC_0(VAR_9.words);
    FUNC_4(VAR_15, VAR_8, VAR_9.words, VAR_12);
   }
  }
  VAR_1 += VAR_7;
  VAR_0 += VAR_6;
 }
}
