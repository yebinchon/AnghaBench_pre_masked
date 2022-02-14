
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct TYPE_2__ {struct dma_async_tx_descriptor* data_desc; } ;
struct atmel_mci {TYPE_1__ dma; struct dma_chan* data_chan; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static void
FUNC_2(struct atmel_mci *VAR_0, struct mmc_data *VAR_1)
{
 struct dma_chan *VAR_2 = VAR_0->data_chan;
 struct dma_async_tx_descriptor *VAR_3 = VAR_0->dma.data_desc;

 if (VAR_2) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_2);
 }
}
