
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* dma_chan; } ;
struct sprd_spi {TYPE_1__ dma; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sprd_spi *VAR_2)
{
 if (VAR_2->dma.dma_chan[VAR_0])
  FUNC_0(VAR_2->dma.dma_chan[VAR_0]);

 if (VAR_2->dma.dma_chan[VAR_1])
  FUNC_0(VAR_2->dma.dma_chan[VAR_1]);
}
