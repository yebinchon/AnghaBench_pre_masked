
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {struct device* dev; TYPE_1__* state; } ;
struct imx_port {int dma_is_txing; int dma_tx_nents; int tx_bytes; TYPE_2__ port; struct dma_chan* dma_chan_tx; struct scatterlist* tx_sgl; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct imx_port* callback_param; int callback; } ;
struct device {int dummy; } ;
struct circ_buf {scalar_t__ tail; scalar_t__ head; scalar_t__ buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct device*,struct scatterlist*,int,int ) ;
 int FUNC_4 (struct device*,struct scatterlist*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_chan*,struct scatterlist*,int,int ,int ) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int VAR_8 ;
 int FUNC_7 (struct imx_port*,int ) ;
 int FUNC_8 (struct imx_port*,int ,int ) ;
 int FUNC_9 (struct scatterlist*,scalar_t__,int ) ;
 int FUNC_10 (struct scatterlist*,int) ;
 int FUNC_11 (struct scatterlist*,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_13(struct imx_port *VAR_9)
{
 struct circ_buf *VAR_10 = &VAR_9->port.state->xmit;
 struct scatterlist *VAR_11 = VAR_9->tx_sgl;
 struct dma_async_tx_descriptor *VAR_12;
 struct dma_chan *VAR_13 = VAR_9->dma_chan_tx;
 struct device *VAR_14 = VAR_9->port.dev;
 u32 VAR_15, VAR_16;
 int VAR_17;

 if (VAR_9->dma_is_txing)
  return;

 VAR_16 = FUNC_7(VAR_9, VAR_6);
 VAR_16 &= ~VAR_7;
 FUNC_8(VAR_9, VAR_16, VAR_6);

 VAR_9->tx_bytes = FUNC_12(VAR_10);

 if (VAR_10->tail < VAR_10->head) {
  VAR_9->dma_tx_nents = 1;
  FUNC_9(VAR_11, VAR_10->buf + VAR_10->tail, VAR_9->tx_bytes);
 } else {
  VAR_9->dma_tx_nents = 2;
  FUNC_10(VAR_11, 2);
  FUNC_11(VAR_11, VAR_10->buf + VAR_10->tail,
    VAR_3 - VAR_10->tail);
  FUNC_11(VAR_11 + 1, VAR_10->buf, VAR_10->head);
 }

 VAR_17 = FUNC_3(VAR_14, VAR_11, VAR_9->dma_tx_nents, VAR_2);
 if (VAR_17 == 0) {
  FUNC_1(VAR_14, "DMA mapping error for TX.\n");
  return;
 }
 VAR_12 = FUNC_5(VAR_13, VAR_11, VAR_9->dma_tx_nents,
     VAR_0, VAR_1);
 if (!VAR_12) {
  FUNC_4(VAR_14, VAR_11, VAR_9->dma_tx_nents,
        VAR_2);
  FUNC_1(VAR_14, "We cannot prepare for the TX slave dma!\n");
  return;
 }
 VAR_12->callback = VAR_8;
 VAR_12->callback_param = VAR_9;

 FUNC_0(VAR_14, "TX: prepare to send %lu bytes by DMA.\n",
   FUNC_12(VAR_10));

 VAR_15 = FUNC_7(VAR_9, VAR_4);
 VAR_15 |= VAR_5;
 FUNC_8(VAR_9, VAR_15, VAR_4);


 VAR_9->dma_is_txing = 1;
 FUNC_6(VAR_12);
 FUNC_2(VAR_13);
 return;
}
