
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct spi_transfer {int bits_per_word; scalar_t__ rx_buf; } ;
struct spi_master {TYPE_1__* cur_msg; } ;
struct ep93xx_spi {size_t rx; scalar_t__ mmio; } ;
struct TYPE_2__ {struct spi_transfer* state; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 struct ep93xx_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static void FUNC_2(struct spi_master *VAR_1)
{
 struct ep93xx_spi *VAR_2 = FUNC_1(VAR_1);
 struct spi_transfer *VAR_3 = VAR_1->cur_msg->state;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2->mmio + VAR_0);
 if (VAR_3->bits_per_word > 8) {
  if (VAR_3->rx_buf)
   ((u16 *)VAR_3->rx_buf)[VAR_2->rx] = VAR_4;
  VAR_2->rx += 2;
 } else {
  if (VAR_3->rx_buf)
   ((u8 *)VAR_3->rx_buf)[VAR_2->rx] = VAR_4;
  VAR_2->rx += 1;
 }
}
