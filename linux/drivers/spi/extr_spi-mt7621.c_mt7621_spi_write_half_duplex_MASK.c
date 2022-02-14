
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7621_spi {int pending_write; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mt7621_spi*) ;
 int FUNC_1 (struct mt7621_spi*,scalar_t__) ;
 int FUNC_2 (struct mt7621_spi*,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mt7621_spi *VAR_1,
      int VAR_2, const u8 *VAR_3)
{
 int VAR_4 = VAR_1->pending_write;
 int VAR_5 = 0;

 if (VAR_4 & 3) {
  VAR_5 = FUNC_1(VAR_1, VAR_0 + (VAR_4 & ~3));
  if (VAR_4 < 4) {
   VAR_5 <<= (4 - VAR_4) * 8;
   VAR_5 = FUNC_3(VAR_5);
  }
 }

 while (VAR_2 > 0) {
  if (VAR_4 >= 36) {
   VAR_1->pending_write = VAR_4;
   FUNC_0(VAR_1);
   VAR_4 = 0;
  }

  VAR_5 |= *VAR_3++ << (8 * (VAR_4 & 3));
  VAR_4++;
  if ((VAR_4 & 3) == 0) {
   if (VAR_4 == 4)

    VAR_5 = FUNC_3(VAR_5);
   FUNC_2(VAR_1, VAR_0 + VAR_4 - 4, VAR_5);
   VAR_5 = 0;
  }
  VAR_2 -= 1;
 }

 if (VAR_4 & 3) {
  if (VAR_4 < 4) {
   VAR_5 = FUNC_3(VAR_5);
   VAR_5 >>= (4 - VAR_4) * 8;
  }
  FUNC_2(VAR_1, VAR_0 + (VAR_4 & ~3), VAR_5);
 }

 VAR_1->pending_write = VAR_4;
}
