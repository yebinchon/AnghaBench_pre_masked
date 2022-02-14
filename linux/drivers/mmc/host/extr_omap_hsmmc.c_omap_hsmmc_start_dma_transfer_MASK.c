
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int base; struct mmc_request* mrq; } ;
struct mmc_request {TYPE_1__* data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int blksz; int blocks; int timeout_clks; int timeout_ns; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct dma_chan*) ;
 struct dma_chan* FUNC_2 (struct omap_hsmmc_host*,TYPE_1__*) ;
 int FUNC_3 (struct omap_hsmmc_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct omap_hsmmc_host *VAR_1)
{
 struct mmc_request *VAR_2 = VAR_1->mrq;
 struct dma_chan *VAR_3;

 if (!VAR_2->data)
  return;
 FUNC_0(VAR_1->base, VAR_0, (VAR_2->data->blksz)
    | (VAR_2->data->blocks << 16));
 FUNC_3(VAR_1, VAR_2->data->timeout_ns,
    VAR_2->data->timeout_clks);
 VAR_3 = FUNC_2(VAR_1, VAR_2->data);
 FUNC_1(VAR_3);
}
