
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dev; } ;
struct ep93xx_spi {int dma_tx; int dma_rx; } ;
struct dma_async_tx_descriptor {struct spi_master* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int VAR_2 ;
 int FUNC_5 (struct spi_master*,int ) ;
 struct dma_async_tx_descriptor* FUNC_6 (struct spi_master*,int ) ;
 struct ep93xx_spi* FUNC_7 (struct spi_master*) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_3)
{
 struct ep93xx_spi *VAR_4 = FUNC_7(VAR_3);
 struct dma_async_tx_descriptor *VAR_5, *VAR_6;

 VAR_5 = FUNC_6(VAR_3, VAR_0);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_3->dev, "DMA RX failed: %ld\n", FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 VAR_6 = FUNC_6(VAR_3, VAR_1);
 if (FUNC_0(VAR_6)) {
  FUNC_5(VAR_3, VAR_0);
  FUNC_2(&VAR_3->dev, "DMA TX failed: %ld\n", FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }


 VAR_5->callback = VAR_2;
 VAR_5->callback_param = VAR_3;


 FUNC_4(VAR_5);
 FUNC_4(VAR_6);

 FUNC_3(VAR_4->dma_rx);
 FUNC_3(VAR_4->dma_tx);


 return 1;
}
