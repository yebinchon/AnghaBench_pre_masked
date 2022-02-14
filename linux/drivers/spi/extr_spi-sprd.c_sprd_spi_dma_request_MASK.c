
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** dma_chan; } ;
struct sprd_spi {TYPE_1__ dma; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct sprd_spi *VAR_3)
{
 VAR_3->dma.dma_chan[VAR_1] = FUNC_4(VAR_3->dev, "rx_chn");
 if (FUNC_0(VAR_3->dma.dma_chan[VAR_1])) {
  if (FUNC_1(VAR_3->dma.dma_chan[VAR_1]) == -VAR_0)
   return FUNC_1(VAR_3->dma.dma_chan[VAR_1]);

  FUNC_2(VAR_3->dev, "request RX DMA channel failed!\n");
  return FUNC_1(VAR_3->dma.dma_chan[VAR_1]);
 }

 VAR_3->dma.dma_chan[VAR_2] = FUNC_4(VAR_3->dev, "tx_chn");
 if (FUNC_0(VAR_3->dma.dma_chan[VAR_2])) {
  if (FUNC_1(VAR_3->dma.dma_chan[VAR_2]) == -VAR_0)
   return FUNC_1(VAR_3->dma.dma_chan[VAR_2]);

  FUNC_2(VAR_3->dev, "request TX DMA channel failed!\n");
  FUNC_3(VAR_3->dma.dma_chan[VAR_1]);
  return FUNC_1(VAR_3->dma.dma_chan[VAR_2]);
 }

 return 0;
}
