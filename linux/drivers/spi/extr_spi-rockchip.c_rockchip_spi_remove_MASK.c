
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {scalar_t__ dma_rx; scalar_t__ dma_tx; } ;
struct rockchip_spi {int apb_pclk; int spiclk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct spi_master* FUNC_7 (int ) ;
 struct rockchip_spi* FUNC_8 (struct spi_master*) ;
 int FUNC_9 (struct spi_master*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_7(FUNC_2(VAR_0));
 struct rockchip_spi *VAR_2 = FUNC_8(VAR_1);

 FUNC_4(&VAR_0->dev);

 FUNC_0(VAR_2->spiclk);
 FUNC_0(VAR_2->apb_pclk);

 FUNC_5(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);
 FUNC_6(&VAR_0->dev);

 if (VAR_1->dma_tx)
  FUNC_1(VAR_1->dma_tx);
 if (VAR_1->dma_rx)
  FUNC_1(VAR_1->dma_rx);

 FUNC_9(VAR_1);

 return 0;
}
