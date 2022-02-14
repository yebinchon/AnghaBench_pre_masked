
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int dummy; } ;
struct dma_chan {int dummy; } ;
struct bcm2835_host {TYPE_1__* pdev; struct dma_chan* dma_chan; int * dma_desc; int * data; int * cmd; struct mmc_request* mrq; int timeout_work; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct bcm2835_host*) ;
 int FUNC_4 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_host *VAR_0)
{
 struct dma_chan *VAR_1 = ((void*)0);
 struct mmc_request *VAR_2;

 FUNC_0(&VAR_0->timeout_work);

 VAR_2 = VAR_0->mrq;

 VAR_0->mrq = ((void*)0);
 VAR_0->cmd = ((void*)0);
 VAR_0->data = ((void*)0);

 VAR_0->dma_desc = ((void*)0);
 VAR_1 = VAR_0->dma_chan;
 VAR_0->dma_chan = ((void*)0);

 if (VAR_1) {
  int VAR_3 = FUNC_2(VAR_1);

  if (VAR_3)
   FUNC_1(&VAR_0->pdev->dev,
    "failed to terminate DMA (%d)\n", VAR_3);
 }

 FUNC_4(FUNC_3(VAR_0), VAR_2);
}
