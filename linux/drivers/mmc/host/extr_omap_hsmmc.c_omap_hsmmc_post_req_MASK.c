
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {scalar_t__ use_dma; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ host_cookie; int sg_len; int sg; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;
 struct omap_hsmmc_host* FUNC_2 (struct mmc_host*) ;
 struct dma_chan* FUNC_3 (struct omap_hsmmc_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, struct mmc_request *VAR_1,
    int VAR_2)
{
 struct omap_hsmmc_host *VAR_3 = FUNC_2(VAR_0);
 struct mmc_data *VAR_4 = VAR_1->data;

 if (VAR_3->use_dma && VAR_4->host_cookie) {
  struct dma_chan *VAR_5 = FUNC_3(VAR_3, VAR_4);

  FUNC_0(VAR_5->device->dev, VAR_4->sg, VAR_4->sg_len,
        FUNC_1(VAR_4));
  VAR_4->host_cookie = 0;
 }
}
