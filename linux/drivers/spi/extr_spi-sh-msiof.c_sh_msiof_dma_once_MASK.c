
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sh_msiof_spi_priv {int slave_aborted; TYPE_3__* ctlr; int rx_dma_addr; TYPE_1__* pdev; int done; int done_txdma; int tx_dma_addr; } ;
struct dma_async_tx_descriptor {int * callback_param; void* callback; } ;
typedef int dma_cookie_t ;
struct TYPE_10__ {TYPE_2__* device; } ;
struct TYPE_9__ {TYPE_4__* dma_rx; TYPE_4__* dma_tx; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 struct dma_async_tx_descriptor* FUNC_5 (TYPE_4__*,int ,unsigned int,int ,int) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 void* VAR_16 ;
 int FUNC_9 (struct sh_msiof_spi_priv*) ;
 int FUNC_10 (struct sh_msiof_spi_priv*,void const*,void*,int,unsigned int) ;
 int FUNC_11 (struct sh_msiof_spi_priv*,void*) ;
 int FUNC_12 (struct sh_msiof_spi_priv*,void*) ;
 int FUNC_13 (struct sh_msiof_spi_priv*,int *) ;
 int FUNC_14 (struct sh_msiof_spi_priv*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct sh_msiof_spi_priv *VAR_17, const void *VAR_18,
        void *VAR_19, unsigned int VAR_20)
{
 u32 VAR_21 = 0;
 struct dma_async_tx_descriptor *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
 dma_cookie_t VAR_24;
 int VAR_25;


 if (VAR_19) {
  VAR_21 |= VAR_12 | VAR_11;
  VAR_23 = FUNC_5(VAR_17->ctlr->dma_rx,
     VAR_17->rx_dma_addr, VAR_20, VAR_1,
     VAR_4 | VAR_0);
  if (!VAR_23)
   return -VAR_6;

  VAR_23->callback = VAR_16;
  VAR_23->callback_param = &VAR_17->done;
  VAR_24 = FUNC_6(VAR_23);
  if (FUNC_2(VAR_24))
   return VAR_24;
 }

 if (VAR_18) {
  VAR_21 |= VAR_14 | VAR_13;
  FUNC_4(VAR_17->ctlr->dma_tx->device->dev,
        VAR_17->tx_dma_addr, VAR_20, VAR_5);
  VAR_22 = FUNC_5(VAR_17->ctlr->dma_tx,
     VAR_17->tx_dma_addr, VAR_20, VAR_3,
     VAR_4 | VAR_0);
  if (!VAR_22) {
   VAR_25 = -VAR_6;
   goto no_dma_tx;
  }

  VAR_22->callback = VAR_16;
  VAR_22->callback_param = &VAR_17->done_txdma;
  VAR_24 = FUNC_6(VAR_22);
  if (FUNC_2(VAR_24)) {
   VAR_25 = VAR_24;
   goto no_dma_tx;
  }
 }


 FUNC_14(VAR_17, VAR_7, VAR_9 | VAR_8);


 FUNC_10(VAR_17, VAR_18, VAR_19, 32, VAR_20 / 4);

 FUNC_14(VAR_17, VAR_10, VAR_21);

 FUNC_8(&VAR_17->done);
 if (VAR_18)
  FUNC_8(&VAR_17->done_txdma);
 VAR_17->slave_aborted = 0;


 if (VAR_19)
  FUNC_1(VAR_17->ctlr->dma_rx);
 if (VAR_18)
  FUNC_1(VAR_17->ctlr->dma_tx);

 VAR_25 = FUNC_11(VAR_17, VAR_19);
 if (VAR_25) {
  FUNC_0(&VAR_17->pdev->dev, "failed to start hardware\n");
  goto stop_dma;
 }

 if (VAR_18) {

  VAR_25 = FUNC_13(VAR_17, &VAR_17->done_txdma);
  if (VAR_25)
   goto stop_reset;
 }

 if (VAR_19) {

  VAR_25 = FUNC_13(VAR_17, &VAR_17->done);
  if (VAR_25)
   goto stop_reset;

  FUNC_14(VAR_17, VAR_10, 0);
 } else {

  FUNC_14(VAR_17, VAR_10, VAR_15);
  VAR_25 = FUNC_13(VAR_17, &VAR_17->done);
  if (VAR_25)
   goto stop_reset;
 }


 FUNC_9(VAR_17);

 VAR_25 = FUNC_12(VAR_17, VAR_19);
 if (VAR_25) {
  FUNC_0(&VAR_17->pdev->dev, "failed to shut down hardware\n");
  return VAR_25;
 }

 if (VAR_19)
  FUNC_3(VAR_17->ctlr->dma_rx->device->dev,
     VAR_17->rx_dma_addr, VAR_20, VAR_2);

 return 0;

stop_reset:
 FUNC_9(VAR_17);
 FUNC_12(VAR_17, VAR_19);
stop_dma:
 if (VAR_18)
  FUNC_7(VAR_17->ctlr->dma_tx);
no_dma_tx:
 if (VAR_19)
  FUNC_7(VAR_17->ctlr->dma_rx);
 FUNC_14(VAR_17, VAR_10, 0);
 return VAR_25;
}
