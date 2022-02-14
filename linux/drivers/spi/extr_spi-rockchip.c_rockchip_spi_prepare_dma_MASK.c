
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nents; int sgl; } ;
struct TYPE_3__ {int nents; int sgl; } ;
struct spi_transfer {TYPE_2__ tx_sg; scalar_t__ tx_buf; TYPE_1__ rx_sg; scalar_t__ rx_buf; } ;
struct spi_master {int dma_tx; int dma_rx; } ;
struct rockchip_spi {int fifo_len; int state; int n_bytes; int dma_addr_tx; int dma_addr_rx; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int dst_addr_width; int dst_addr; int direction; int src_addr_width; int src_addr; } ;
struct dma_async_tx_descriptor {struct spi_master* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct rockchip_spi*,int) ;

__attribute__((used)) static int FUNC_8(struct rockchip_spi *VAR_8,
  struct spi_master *VAR_9, struct spi_transfer *VAR_10)
{
 struct dma_async_tx_descriptor *VAR_11, *VAR_12;

 FUNC_1(&VAR_8->state, 0);

 VAR_11 = ((void*)0);
 if (VAR_10->rx_buf) {
  struct dma_slave_config VAR_13 = {
   .direction = VAR_0,
   .src_addr = VAR_8->dma_addr_rx,
   .src_addr_width = VAR_8->n_bytes,
   .src_maxburst = 1,
  };

  FUNC_4(VAR_9->dma_rx, &VAR_13);

  VAR_11 = FUNC_3(
    VAR_9->dma_rx,
    VAR_10->rx_sg.sgl, VAR_10->rx_sg.nents,
    VAR_0, VAR_2);
  if (!VAR_11)
   return -VAR_3;

  VAR_11->callback = VAR_6;
  VAR_11->callback_param = VAR_9;
 }

 VAR_12 = ((void*)0);
 if (VAR_10->tx_buf) {
  struct dma_slave_config VAR_14 = {
   .direction = VAR_1,
   .dst_addr = VAR_8->dma_addr_tx,
   .dst_addr_width = VAR_8->n_bytes,
   .dst_maxburst = VAR_8->fifo_len / 4,
  };

  FUNC_4(VAR_9->dma_tx, &VAR_14);

  VAR_12 = FUNC_3(
    VAR_9->dma_tx,
    VAR_10->tx_sg.sgl, VAR_10->tx_sg.nents,
    VAR_1, VAR_2);
  if (!VAR_12) {
   if (VAR_11)
    FUNC_6(VAR_9->dma_rx);
   return -VAR_3;
  }

  VAR_12->callback = VAR_7;
  VAR_12->callback_param = VAR_9;
 }


 if (VAR_11) {
  FUNC_0(VAR_4, &VAR_8->state);
  FUNC_5(VAR_11);
  FUNC_2(VAR_9->dma_rx);
 }

 FUNC_7(VAR_8, 1);

 if (VAR_12) {
  FUNC_0(VAR_5, &VAR_8->state);
  FUNC_5(VAR_12);
  FUNC_2(VAR_9->dma_tx);
 }


 return 1;
}
