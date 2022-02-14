
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {scalar_t__ len; } ;
struct spi_master {TYPE_1__* cur_msg; int dev; } ;
struct spi_device {int dummy; } ;
struct ep93xx_spi {scalar_t__ mmio; scalar_t__ dma_rx; scalar_t__ tx; scalar_t__ rx; } ;
struct TYPE_2__ {struct spi_transfer* state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct spi_master*) ;
 int FUNC_4 (scalar_t__) ;
 struct ep93xx_spi* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_5,
       struct spi_device *VAR_6,
       struct spi_transfer *VAR_7)
{
 struct ep93xx_spi *VAR_8 = FUNC_5(VAR_5);
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_0(&VAR_5->dev, "failed to setup chip for transfer\n");
  return VAR_10;
 }

 VAR_5->cur_msg->state = VAR_7;
 VAR_8->rx = 0;
 VAR_8->tx = 0;






 if (VAR_8->dma_rx && VAR_7->len > VAR_0)
  return FUNC_2(VAR_5);


 FUNC_3(VAR_5);

 VAR_9 = FUNC_4(VAR_8->mmio + VAR_1);
 VAR_9 |= (VAR_3 | VAR_4 | VAR_2);
 FUNC_6(VAR_9, VAR_8->mmio + VAR_1);


 return 1;
}
