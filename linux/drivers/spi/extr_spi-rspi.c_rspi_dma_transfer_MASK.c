
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_table {int nents; int sgl; } ;
struct rspi_data {unsigned int tx_irq; unsigned int rx_irq; TYPE_1__* ctlr; scalar_t__ dma_callbacked; int wait; } ;
struct dma_async_tx_descriptor {struct rspi_data* callback_param; int * callback; } ;
typedef int dma_cookie_t ;
struct TYPE_2__ {int dev; int dma_rx; int dma_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct dma_async_tx_descriptor* FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (struct rspi_data*,int ) ;
 void* VAR_9 ;
 int FUNC_12 (struct rspi_data*,int ) ;
 int FUNC_13 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(struct rspi_data *VAR_10, struct sg_table *VAR_11,
        struct sg_table *VAR_12)
{
 struct dma_async_tx_descriptor *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 u8 VAR_15 = 0;
 unsigned int VAR_16 = 0;
 dma_cookie_t VAR_17;
 int VAR_18;


 if (VAR_12) {
  VAR_14 = FUNC_6(VAR_10->ctlr->dma_rx, VAR_12->sgl,
     VAR_12->nents, VAR_1,
     VAR_3 | VAR_0);
  if (!VAR_14) {
   VAR_18 = -VAR_4;
   goto no_dma_rx;
  }

  VAR_14->callback = VAR_9;
  VAR_14->callback_param = VAR_10;
  VAR_17 = FUNC_7(VAR_14);
  if (FUNC_5(VAR_17)) {
   VAR_18 = VAR_17;
   goto no_dma_rx;
  }

  VAR_15 |= VAR_7;
 }

 if (VAR_11) {
  VAR_13 = FUNC_6(VAR_10->ctlr->dma_tx, VAR_11->sgl,
     VAR_11->nents, VAR_2,
     VAR_3 | VAR_0);
  if (!VAR_13) {
   VAR_18 = -VAR_4;
   goto no_dma_tx;
  }

  if (VAR_12) {

   VAR_13->callback = ((void*)0);
  } else {
   VAR_13->callback = VAR_9;
   VAR_13->callback_param = VAR_10;
  }
  VAR_17 = FUNC_7(VAR_13);
  if (FUNC_5(VAR_17)) {
   VAR_18 = VAR_17;
   goto no_dma_tx;
  }

  VAR_15 |= VAR_8;
 }





 if (VAR_11)
  FUNC_3(VAR_16 = VAR_10->tx_irq);
 if (VAR_12 && VAR_10->rx_irq != VAR_16)
  FUNC_3(VAR_10->rx_irq);

 FUNC_12(VAR_10, VAR_15);
 VAR_10->dma_callbacked = 0;


 if (VAR_12)
  FUNC_4(VAR_10->ctlr->dma_rx);
 if (VAR_11)
  FUNC_4(VAR_10->ctlr->dma_tx);

 VAR_18 = FUNC_13(VAR_10->wait,
            VAR_10->dma_callbacked, VAR_6);
 if (VAR_18 > 0 && VAR_10->dma_callbacked) {
  VAR_18 = 0;
 } else {
  if (!VAR_18) {
   FUNC_1(&VAR_10->ctlr->dev, "DMA timeout\n");
   VAR_18 = -VAR_5;
  }
  if (VAR_11)
   FUNC_8(VAR_10->ctlr->dma_tx);
  if (VAR_12)
   FUNC_8(VAR_10->ctlr->dma_rx);
 }

 FUNC_11(VAR_10, VAR_15);

 if (VAR_11)
  FUNC_9(VAR_10->tx_irq);
 if (VAR_12 && VAR_10->rx_irq != VAR_16)
  FUNC_9(VAR_10->rx_irq);

 return VAR_18;

no_dma_tx:
 if (VAR_12)
  FUNC_8(VAR_10->ctlr->dma_rx);
no_dma_rx:
 if (VAR_18 == -VAR_4) {
  FUNC_10("%s %s: DMA not available, falling back to PIO\n",
        FUNC_0(&VAR_10->ctlr->dev),
        FUNC_2(&VAR_10->ctlr->dev));
 }
 return VAR_18;
}
