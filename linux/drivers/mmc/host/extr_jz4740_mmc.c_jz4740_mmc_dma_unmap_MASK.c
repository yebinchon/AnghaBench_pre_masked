
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int host_cookie; int sg_len; int sg; } ;
struct jz4740_mmc_host {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct dma_chan* FUNC_1 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_2 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_3(struct jz4740_mmc_host *VAR_1,
     struct mmc_data *VAR_2)
{
 struct dma_chan *VAR_3 = FUNC_1(VAR_1, VAR_2);
 enum dma_data_direction VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_3->device->dev, VAR_2->sg, VAR_2->sg_len, VAR_4);
 VAR_2->host_cookie = VAR_0;
}
