
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spi {int clk; TYPE_1__* cfg; } ;
struct spi_master {scalar_t__ dma_rx; scalar_t__ dma_tx; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int (* disable ) (struct stm32_spi*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 struct stm32_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct stm32_spi*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct stm32_spi *VAR_2 = FUNC_4(VAR_1);

 VAR_2->cfg->disable(VAR_2);

 if (VAR_1->dma_tx)
  FUNC_1(VAR_1->dma_tx);
 if (VAR_1->dma_rx)
  FUNC_1(VAR_1->dma_rx);

 FUNC_0(VAR_2->clk);

 FUNC_3(&VAR_0->dev);

 return 0;
}
