
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t * VAR_0, uint32_t * VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 VAR_2 = 16;
 do {
  VAR_1[VAR_2] =
      FUNC_0(1,
        VAR_1[VAR_2 - 3] ^ VAR_1[VAR_2 -
             8] ^
        VAR_1[VAR_2 - 14] ^ VAR_1[VAR_2 - 16]);
 } while (++VAR_2 <= 79);
 VAR_2 = 0;
 VAR_4 = VAR_0[0];
 VAR_5 = VAR_0[1];
 VAR_6 = VAR_0[2];
 VAR_7 = VAR_0[3];
 VAR_8 = VAR_0[4];

 do {
  if (VAR_2 < 20) {
   VAR_3 = ((VAR_5 & VAR_6) | ((~VAR_5) & VAR_7)) + 0x5A827999;
  } else if (VAR_2 < 40) {
   VAR_3 = (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1;
  } else if (VAR_2 < 60) {
   VAR_3 = ((VAR_5 & VAR_6) | (VAR_5 & VAR_7) | (VAR_6 & VAR_7)) + 0x8F1BBCDC;
  } else {
   VAR_3 = (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6;
  }
  VAR_3 += FUNC_0(5, VAR_4) + VAR_8 + VAR_1[VAR_2];
  VAR_8 = VAR_7;
  VAR_7 = VAR_6;
  VAR_6 = FUNC_0(30, VAR_5);
  VAR_5 = VAR_4;
  VAR_4 = VAR_3;
 } while (++VAR_2 <= 79);

 VAR_0[0] += VAR_4;
 VAR_0[1] += VAR_5;
 VAR_0[2] += VAR_6;
 VAR_0[3] += VAR_7;
 VAR_0[4] += VAR_8;

}
