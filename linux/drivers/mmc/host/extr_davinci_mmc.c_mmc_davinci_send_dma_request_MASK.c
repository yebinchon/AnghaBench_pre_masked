
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_davinci_host {scalar_t__ data_dir; int mmc; int sg_len; struct dma_chan* dma_rx; TYPE_1__* mem_res; struct dma_chan* dma_tx; } ;
struct mmc_data {int sg; } ;
struct dma_slave_config {int dst_addr_width; int dst_maxburst; int src_addr_width; int src_maxburst; scalar_t__ src_addr; int direction; scalar_t__ dst_addr; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct dma_chan*,int ,int ,int ,int) ;
 int FUNC_3 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct mmc_davinci_host *VAR_9,
  struct mmc_data *VAR_10)
{
 struct dma_chan *VAR_11;
 struct dma_async_tx_descriptor *VAR_12;
 int VAR_13 = 0;

 if (VAR_9->data_dir == VAR_2) {
  struct dma_slave_config VAR_14 = {
   .direction = VAR_5,
   .dst_addr = VAR_9->mem_res->start + VAR_1,
   .dst_addr_width = VAR_7,
   .dst_maxburst =
    VAR_8 / VAR_7,
  };
  VAR_11 = VAR_9->dma_tx;
  FUNC_3(VAR_9->dma_tx, &VAR_14);

  VAR_12 = FUNC_2(VAR_9->dma_tx,
    VAR_10->sg,
    VAR_9->sg_len,
    VAR_5,
    VAR_6 | VAR_3);
  if (!VAR_12) {
   FUNC_0(FUNC_5(VAR_9->mmc),
    "failed to allocate DMA TX descriptor");
   VAR_13 = -1;
   goto out;
  }
 } else {
  struct dma_slave_config VAR_15 = {
   .direction = VAR_4,
   .src_addr = VAR_9->mem_res->start + VAR_0,
   .src_addr_width = VAR_7,
   .src_maxburst =
    VAR_8 / VAR_7,
  };
  VAR_11 = VAR_9->dma_rx;
  FUNC_3(VAR_9->dma_rx, &VAR_15);

  VAR_12 = FUNC_2(VAR_9->dma_rx,
    VAR_10->sg,
    VAR_9->sg_len,
    VAR_4,
    VAR_6 | VAR_3);
  if (!VAR_12) {
   FUNC_0(FUNC_5(VAR_9->mmc),
    "failed to allocate DMA RX descriptor");
   VAR_13 = -1;
   goto out;
  }
 }

 FUNC_4(VAR_12);
 FUNC_1(VAR_11);

out:
 return VAR_13;
}
