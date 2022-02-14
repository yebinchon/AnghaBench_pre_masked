
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int next_data; scalar_t__ use_dma; } ;
struct mmc_request {TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {scalar_t__ host_cookie; } ;


 struct omap_hsmmc_host* FUNC_0 (struct mmc_host*) ;
 struct dma_chan* FUNC_1 (struct omap_hsmmc_host*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct omap_hsmmc_host*,TYPE_1__*,int *,struct dma_chan*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct omap_hsmmc_host *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->data->host_cookie) {
  VAR_1->data->host_cookie = 0;
  return ;
 }

 if (VAR_2->use_dma) {
  struct dma_chan *VAR_3 = FUNC_1(VAR_2, VAR_1->data);

  if (FUNC_2(VAR_2, VAR_1->data,
      &VAR_2->next_data, VAR_3))
   VAR_1->data->host_cookie = 0;
 }
}
