
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct omap_hsmmc_host {int dma_ch; int mmc; scalar_t__ mapbase; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {int blksz; int sg_len; int flags; struct scatterlist* sg; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int dst_addr_width; int src_addr_width; scalar_t__ dst_addr; scalar_t__ src_addr; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct omap_hsmmc_host* callback_param; int callback; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct dma_chan*,struct scatterlist*,int,int ,int) ;
 int FUNC_3 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 struct dma_chan* FUNC_6 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_7 (struct omap_hsmmc_host*,struct mmc_data*,int *,struct dma_chan*) ;

__attribute__((used)) static int FUNC_8(struct omap_hsmmc_host *VAR_9,
     struct mmc_request *VAR_10)
{
 struct dma_async_tx_descriptor *VAR_11;
 int VAR_12 = 0, VAR_13;
 struct mmc_data *VAR_14 = VAR_10->data;
 struct dma_chan *VAR_15;
 struct dma_slave_config VAR_16 = {
  .src_addr = VAR_9->mapbase + VAR_7,
  .dst_addr = VAR_9->mapbase + VAR_7,
  .src_addr_width = VAR_4,
  .dst_addr_width = VAR_4,
  .src_maxburst = VAR_14->blksz / 4,
  .dst_maxburst = VAR_14->blksz / 4,
 };


 for (VAR_13 = 0; VAR_13 < VAR_14->sg_len; VAR_13++) {
  struct scatterlist *VAR_17;

  VAR_17 = VAR_14->sg + VAR_13;
  if (VAR_17->length % VAR_14->blksz)
   return -VAR_5;
 }
 if ((VAR_14->blksz % 4) != 0)



  return -VAR_5;

 FUNC_0(VAR_9->dma_ch != -1);

 VAR_15 = FUNC_6(VAR_9, VAR_14);

 VAR_12 = FUNC_3(VAR_15, &VAR_16);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_9, VAR_14, ((void*)0), VAR_15);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_2(VAR_15, VAR_14->sg, VAR_14->sg_len,
  VAR_14->flags & VAR_6 ? VAR_2 : VAR_1,
  VAR_3 | VAR_0);
 if (!VAR_11) {
  FUNC_1(FUNC_5(VAR_9->mmc), "prep_slave_sg() failed\n");

  return -1;
 }

 VAR_11->callback = VAR_8;
 VAR_11->callback_param = VAR_9;


 FUNC_4(VAR_11);

 VAR_9->dma_ch = 1;

 return 0;
}
