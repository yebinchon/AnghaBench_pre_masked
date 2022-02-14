
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int host_cookie; int sg_count; int sg_len; int sg; } ;
struct jz4740_mmc_host {int mmc; } ;
struct dma_chan {TYPE_1__* device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct dma_chan* FUNC_2 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_data*) ;

__attribute__((used)) static int FUNC_5(struct jz4740_mmc_host *VAR_2,
           struct mmc_data *VAR_3,
           int VAR_4)
{
 struct dma_chan *VAR_5 = FUNC_2(VAR_2, VAR_3);
 enum dma_data_direction VAR_6 = FUNC_4(VAR_3);
 int VAR_7;

 if (VAR_3->host_cookie == VAR_0)
  return VAR_3->sg_count;

 VAR_7 = FUNC_1(VAR_5->device->dev,
   VAR_3->sg,
   VAR_3->sg_len,
   VAR_6);

 if (VAR_7 <= 0) {
  FUNC_0(FUNC_3(VAR_2->mmc),
   "Failed to map scatterlist for DMA operation\n");
  return -VAR_1;
 }

 VAR_3->sg_count = VAR_7;
 VAR_3->host_cookie = VAR_4;

 return VAR_3->sg_count;
}
