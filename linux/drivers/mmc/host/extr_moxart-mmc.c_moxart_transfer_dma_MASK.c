
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct moxart_host {scalar_t__ data_len; scalar_t__ data_remain; int timeout; int dma_complete; struct dma_async_tx_descriptor* tx_desc; int mmc; struct dma_chan* dma_chan_rx; struct dma_chan* dma_chan_tx; } ;
struct mmc_data {scalar_t__ bytes_xfered; int flags; int sg_len; int sg; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {struct moxart_host* callback_param; int callback; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dma_chan*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (struct dma_chan*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mmc_data*) ;
 int VAR_5 ;
 long FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct mmc_data *VAR_6, struct moxart_host *VAR_7)
{
 u32 VAR_8, VAR_9;
 long VAR_10;
 struct dma_async_tx_descriptor *VAR_11 = ((void*)0);
 struct dma_chan *VAR_12;

 if (VAR_7->data_len == VAR_6->bytes_xfered)
  return;

 if (VAR_6->flags & VAR_4) {
  VAR_12 = VAR_7->dma_chan_tx;
  VAR_9 = VAR_2;
 } else {
  VAR_12 = VAR_7->dma_chan_rx;
  VAR_9 = VAR_1;
 }

 VAR_8 = FUNC_2(VAR_12->device->dev, VAR_6->sg,
    VAR_6->sg_len, FUNC_7(VAR_6));

 if (VAR_8 > 0) {
  VAR_11 = FUNC_4(VAR_12, VAR_6->sg,
            VAR_8, VAR_9,
            VAR_3 |
            VAR_0);
 } else {
  FUNC_0(FUNC_6(VAR_7->mmc), "dma_map_sg returned zero length\n");
 }

 if (VAR_11) {
  VAR_7->tx_desc = VAR_11;
  VAR_11->callback = VAR_5;
  VAR_11->callback_param = VAR_7;
  FUNC_5(VAR_11);
  FUNC_1(VAR_12);
 }

 VAR_6->bytes_xfered += VAR_7->data_remain;

 VAR_10 = FUNC_8(
     &VAR_7->dma_complete, VAR_7->timeout);

 FUNC_3(VAR_12->device->dev,
       VAR_6->sg, VAR_6->sg_len,
       FUNC_7(VAR_6));
}
