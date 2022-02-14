
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7621_spi {int pending_write; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mt7621_spi*,scalar_t__) ;
 int FUNC_2 (struct mt7621_spi*) ;
 int FUNC_3 (struct mt7621_spi*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct mt7621_spi *VAR_4,
     int VAR_5, u8 *VAR_6)
{
 int VAR_7;






 VAR_7 = VAR_4->pending_write;
 VAR_4->pending_write = 0;

 while (VAR_5 || VAR_7) {
  int VAR_8;
  u32 VAR_9 = (FUNC_0(VAR_7, 4) * 8) << 24;
  int VAR_10 = FUNC_0(VAR_5, 32);

  if (VAR_7 > 4)
   VAR_9 |= (VAR_7 - 4) * 8;
  VAR_9 |= (VAR_10 * 8) << 12;
  FUNC_3(VAR_4, VAR_1, VAR_9);

  VAR_7 = 0;

  VAR_9 = FUNC_1(VAR_4, VAR_2);
  VAR_9 |= VAR_3;
  FUNC_3(VAR_4, VAR_2, VAR_9);

  FUNC_2(VAR_4);

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   if ((VAR_8 % 4) == 0)
    VAR_9 = FUNC_1(VAR_4, VAR_0 + VAR_8);
   *VAR_6++ = VAR_9 & 0xff;
   VAR_9 >>= 8;
  }

  VAR_5 -= VAR_8;
 }
}
