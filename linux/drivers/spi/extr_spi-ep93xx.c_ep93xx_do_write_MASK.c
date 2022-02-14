
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spi_transfer {int bits_per_word; scalar_t__ tx_buf; } ;
struct spi_master {TYPE_1__* cur_msg; } ;
struct ep93xx_spi {size_t tx; scalar_t__ mmio; } ;
struct TYPE_2__ {struct spi_transfer* state; } ;


 scalar_t__ VAR_0 ;
 struct ep93xx_spi* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct spi_master *VAR_1)
{
 struct ep93xx_spi *VAR_2 = FUNC_0(VAR_1);
 struct spi_transfer *VAR_3 = VAR_1->cur_msg->state;
 u32 VAR_4 = 0;

 if (VAR_3->bits_per_word > 8) {
  if (VAR_3->tx_buf)
   VAR_4 = ((u16 *)VAR_3->tx_buf)[VAR_2->tx];
  VAR_2->tx += 2;
 } else {
  if (VAR_3->tx_buf)
   VAR_4 = ((u8 *)VAR_3->tx_buf)[VAR_2->tx];
  VAR_2->tx += 1;
 }
 FUNC_1(VAR_4, VAR_2->mmio + VAR_0);
}
