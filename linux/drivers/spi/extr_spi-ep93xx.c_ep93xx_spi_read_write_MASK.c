
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {scalar_t__ len; } ;
struct spi_master {TYPE_1__* cur_msg; } ;
struct ep93xx_spi {scalar_t__ fifo_level; scalar_t__ tx; scalar_t__ rx; scalar_t__ mmio; } ;
struct TYPE_2__ {struct spi_transfer* state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_master*) ;
 int FUNC_1 (struct spi_master*) ;
 int FUNC_2 (scalar_t__) ;
 struct ep93xx_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_4)
{
 struct ep93xx_spi *VAR_5 = FUNC_3(VAR_4);
 struct spi_transfer *VAR_6 = VAR_4->cur_msg->state;


 while ((FUNC_2(VAR_5->mmio + VAR_2) & VAR_3)) {
  FUNC_0(VAR_4);
  VAR_5->fifo_level--;
 }


 while (VAR_5->fifo_level < VAR_1 && VAR_5->tx < VAR_6->len) {
  FUNC_1(VAR_4);
  VAR_5->fifo_level++;
 }

 if (VAR_5->rx == VAR_6->len)
  return 0;

 return -VAR_0;
}
