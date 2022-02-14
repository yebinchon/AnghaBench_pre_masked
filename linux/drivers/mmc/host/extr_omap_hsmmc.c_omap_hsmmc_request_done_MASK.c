
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int dma_ch; int mmc; int * mrq; scalar_t__ use_dma; int irq_lock; scalar_t__ req_in_progress; } ;
struct mmc_request {scalar_t__ data; } ;


 int FUNC_0 (int ,struct mmc_request*) ;
 int FUNC_1 (struct omap_hsmmc_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct omap_hsmmc_host *VAR_0, struct mmc_request *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->irq_lock, VAR_3);
 VAR_0->req_in_progress = 0;
 VAR_2 = VAR_0->dma_ch;
 FUNC_3(&VAR_0->irq_lock, VAR_3);

 FUNC_1(VAR_0);

 if (VAR_1->data && VAR_0->use_dma && VAR_2 != -1)
  return;
 VAR_0->mrq = ((void*)0);
 FUNC_0(VAR_0->mmc, VAR_1);
}
