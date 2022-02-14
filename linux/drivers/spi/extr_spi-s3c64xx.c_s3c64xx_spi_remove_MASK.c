
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct TYPE_4__ {int ch; } ;
struct TYPE_3__ {int ch; } ;
struct s3c64xx_spi_driver_data {int clk; int src_clk; int ioclk; TYPE_2__ tx_dma; TYPE_1__ rx_dma; scalar_t__ regs; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct s3c64xx_spi_driver_data*) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct s3c64xx_spi_driver_data* FUNC_8 (struct spi_master*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_3(VAR_1);
 struct s3c64xx_spi_driver_data *VAR_3 = FUNC_8(VAR_2);

 FUNC_5(&VAR_1->dev);

 FUNC_9(0, VAR_3->regs + VAR_0);

 if (!FUNC_2(VAR_3)) {
  FUNC_1(VAR_3->rx_dma.ch);
  FUNC_1(VAR_3->tx_dma.ch);
 }

 FUNC_0(VAR_3->ioclk);

 FUNC_0(VAR_3->src_clk);

 FUNC_0(VAR_3->clk);

 FUNC_6(&VAR_1->dev);
 FUNC_4(&VAR_1->dev);
 FUNC_7(&VAR_1->dev);

 return 0;
}
