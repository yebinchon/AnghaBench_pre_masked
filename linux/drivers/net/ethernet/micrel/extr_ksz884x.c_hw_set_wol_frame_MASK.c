
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct ksz_hw {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_3, int VAR_4, uint VAR_5,
 const u8 *VAR_6, uint VAR_7, const u8 *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 u32 VAR_13;
 u8 VAR_14[64];
 u8 VAR_15 = 0;

 if (VAR_7 > VAR_5 * 8)
  VAR_7 = VAR_5 * 8;
 if (VAR_7 > 64)
  VAR_7 = 64;

 VAR_4 *= 0x10;
 FUNC_2(0, VAR_3->io + VAR_0 + VAR_4);
 FUNC_2(0, VAR_3->io + VAR_1 + VAR_4);

 VAR_9 = VAR_11 = VAR_10 = VAR_12 = 0;
 do {
  if (VAR_9) {
   if ((VAR_15 & 1))
    VAR_14[VAR_12++] = VAR_8[VAR_10];
   VAR_15 >>= 1;
   ++VAR_10;
   --VAR_9;
  } else {
   VAR_15 = VAR_6[VAR_11];
   FUNC_1(VAR_15, VAR_3->io + VAR_0 + VAR_4
    + VAR_11);
   ++VAR_11;
   if (VAR_15)
    VAR_9 = 8;
   else
    VAR_10 += 8;
  }
 } while (VAR_10 < (int) VAR_7);
 if (VAR_15) {
  VAR_9 = VAR_6[VAR_11 - 1];
  VAR_15 <<= (VAR_10 % 8);
  VAR_9 &= ~VAR_15;
  FUNC_1(VAR_9, VAR_3->io + VAR_0 + VAR_4 + VAR_11 -
   1);
 }
 VAR_13 = FUNC_0(VAR_12, VAR_14);
 FUNC_2(VAR_13, VAR_3->io + VAR_2 + VAR_4);
}
