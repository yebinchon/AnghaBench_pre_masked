
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct davinci_spi {scalar_t__ dma_tx; scalar_t__ dma_rx; int clk; int bitbang; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 struct davinci_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct davinci_spi *VAR_1;
 struct spi_master *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_4(VAR_2);

 FUNC_3(&VAR_1->bitbang);

 FUNC_0(VAR_1->clk);
 FUNC_5(VAR_2);

 if (VAR_1->dma_rx) {
  FUNC_1(VAR_1->dma_rx);
  FUNC_1(VAR_1->dma_tx);
 }

 return 0;
}
