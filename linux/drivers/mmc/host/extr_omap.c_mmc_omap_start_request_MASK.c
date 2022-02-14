
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int cmd; } ;
struct mmc_omap_host {struct dma_chan* dma_rx; struct dma_chan* dma_tx; TYPE_1__* data; scalar_t__ dma_in_use; struct mmc_request* mrq; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct mmc_omap_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmc_omap_host*,int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_omap_host *VAR_1,
       struct mmc_request *VAR_2)
{
 FUNC_0(VAR_1->mrq != ((void*)0));

 VAR_1->mrq = VAR_2;


 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2->cmd);
 if (VAR_1->dma_in_use) {
  struct dma_chan *VAR_3 = VAR_1->data->flags & VAR_0 ?
    VAR_1->dma_tx : VAR_1->dma_rx;

  FUNC_1(VAR_3);
 }
}
