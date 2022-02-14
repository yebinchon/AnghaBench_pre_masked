
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_4__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_3__ {struct device* dev; } ;
struct imx_port {int rx_periods; int dma_is_rxing; int rx_cookie; int rx_buf; TYPE_2__ rx_ring; TYPE_1__ port; struct dma_chan* dma_chan_rx; struct scatterlist rx_sgl; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct imx_port* callback_param; int callback; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct device*,struct scatterlist*,int,int ) ;
 int FUNC_4 (struct device*,struct scatterlist*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_chan*,int ,int,int,int ,int ) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int VAR_6 ;
 int FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct imx_port *VAR_7)
{
 struct scatterlist *VAR_8 = &VAR_7->rx_sgl;
 struct dma_chan *VAR_9 = VAR_7->dma_chan_rx;
 struct device *VAR_10 = VAR_7->port.dev;
 struct dma_async_tx_descriptor *VAR_11;
 int VAR_12;

 VAR_7->rx_ring.head = 0;
 VAR_7->rx_ring.tail = 0;
 VAR_7->rx_periods = VAR_5;

 FUNC_9(VAR_8, VAR_7->rx_buf, VAR_4);
 VAR_12 = FUNC_3(VAR_10, VAR_8, 1, VAR_1);
 if (VAR_12 == 0) {
  FUNC_1(VAR_10, "DMA mapping error for RX.\n");
  return -VAR_3;
 }

 VAR_11 = FUNC_5(VAR_9, FUNC_7(VAR_8),
  FUNC_8(VAR_8), FUNC_8(VAR_8) / VAR_7->rx_periods,
  VAR_0, VAR_2);

 if (!VAR_11) {
  FUNC_4(VAR_10, VAR_8, 1, VAR_1);
  FUNC_1(VAR_10, "We cannot prepare for the RX slave dma!\n");
  return -VAR_3;
 }
 VAR_11->callback = VAR_6;
 VAR_11->callback_param = VAR_7;

 FUNC_0(VAR_10, "RX: prepare for the DMA.\n");
 VAR_7->dma_is_rxing = 1;
 VAR_7->rx_cookie = FUNC_6(VAR_11);
 FUNC_2(VAR_9);
 return 0;
}
