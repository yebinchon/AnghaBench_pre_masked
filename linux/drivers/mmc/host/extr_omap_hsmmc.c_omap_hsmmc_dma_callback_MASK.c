
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dma_ch; int req_in_progress; int mmc; struct mmc_request* mrq; int irq_lock; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {int sg_len; int sg; int host_cookie; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 struct dma_chan* FUNC_3 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct omap_hsmmc_host *VAR_1 = VAR_0;
 struct dma_chan *VAR_2;
 struct mmc_data *VAR_3;
 int VAR_4;

 FUNC_4(&VAR_1->irq_lock);
 if (VAR_1->dma_ch < 0) {
  FUNC_5(&VAR_1->irq_lock);
  return;
 }

 VAR_3 = VAR_1->mrq->data;
 VAR_2 = FUNC_3(VAR_1, VAR_3);
 if (!VAR_3->host_cookie)
  FUNC_0(VAR_2->device->dev,
        VAR_3->sg, VAR_3->sg_len,
        FUNC_1(VAR_3));

 VAR_4 = VAR_1->req_in_progress;
 VAR_1->dma_ch = -1;
 FUNC_5(&VAR_1->irq_lock);


 if (!VAR_4) {
  struct mmc_request *VAR_5 = VAR_1->mrq;

  VAR_1->mrq = ((void*)0);
  FUNC_2(VAR_1->mmc, VAR_5);
 }
}
