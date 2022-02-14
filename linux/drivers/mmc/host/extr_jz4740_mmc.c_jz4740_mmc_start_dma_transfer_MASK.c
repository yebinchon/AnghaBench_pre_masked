
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int flags; scalar_t__ host_cookie; int sg; } ;
struct jz4740_mmc_host {int mmc; TYPE_1__* mem_res; } ;
struct dma_slave_config {scalar_t__ direction; scalar_t__ src_addr; scalar_t__ dst_addr; int dst_maxburst; int src_maxburst; int dst_addr_width; int src_addr_width; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct dma_chan*,int ,int,scalar_t__,int) ;
 int FUNC_3 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct jz4740_mmc_host*,struct mmc_data*) ;
 struct dma_chan* FUNC_6 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_7 (struct jz4740_mmc_host*,struct mmc_data*,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct jz4740_mmc_host *VAR_11,
      struct mmc_data *VAR_12)
{
 struct dma_chan *VAR_13 = FUNC_6(VAR_11, VAR_12);
 struct dma_async_tx_descriptor *VAR_14;
 struct dma_slave_config VAR_15 = {
  .src_addr_width = VAR_5,
  .dst_addr_width = VAR_5,
  .src_maxburst = VAR_7,
  .dst_maxburst = VAR_7,
 };
 int VAR_16;

 if (VAR_12->flags & VAR_10) {
  VAR_15.direction = VAR_3;
  VAR_15.dst_addr = VAR_11->mem_res->start + VAR_9;
 } else {
  VAR_15.direction = VAR_2;
  VAR_15.src_addr = VAR_11->mem_res->start + VAR_8;
 }

 VAR_16 = FUNC_7(VAR_11, VAR_12, VAR_0);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_3(VAR_13, &VAR_15);
 VAR_14 = FUNC_2(VAR_13, VAR_12->sg, VAR_16,
   VAR_15.direction,
   VAR_4 | VAR_1);
 if (!VAR_14) {
  FUNC_0(FUNC_8(VAR_11->mmc),
   "Failed to allocate DMA %s descriptor",
    VAR_15.direction == VAR_3 ? "TX" : "RX");
  goto dma_unmap;
 }

 FUNC_4(VAR_14);
 FUNC_1(VAR_13);

 return 0;

dma_unmap:
 if (VAR_12->host_cookie == VAR_0)
  FUNC_5(VAR_11, VAR_12);
 return -VAR_6;
}
