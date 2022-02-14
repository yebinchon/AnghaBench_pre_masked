
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_1, u8 *VAR_2,
      u8 *VAR_3, u8 *VAR_4)
{
 u8 VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10;
 u32 VAR_11, VAR_12 = 1;


 VAR_6 = VAR_3[0] ^ VAR_4[0];
 VAR_7 = VAR_3[1] ^ VAR_4[1];
 VAR_8 = VAR_3[2] ^ VAR_4[2];
 VAR_10 = VAR_6 | (VAR_7 << 8) | (VAR_8 << 16);


 if (FUNC_0(!VAR_10))
  return 0;


 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  switch (VAR_10 % 4) {
  case 2:
   VAR_5 += VAR_12;
  case 1:
   break;
  default:
   return -VAR_0;
  }
  VAR_12 <<= 1;
  VAR_10 >>= 2;
 }


 VAR_12 = 1;
 for (VAR_11 = 0; VAR_11 < 9; VAR_11++) {
  switch (VAR_10 % 4) {
  case 2:
   VAR_9 += VAR_12;
  case 1:
   break;
  default:
   return -VAR_0;
  }
  VAR_12 <<= 1;
  VAR_10 >>= 2;
 }


 VAR_2[VAR_9] ^= (1 << VAR_5);

 return 1;
}
