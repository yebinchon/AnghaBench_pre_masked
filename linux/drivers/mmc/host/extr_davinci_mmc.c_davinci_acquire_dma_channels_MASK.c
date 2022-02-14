
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {void* dma_rx; void* dma_tx; int mmc; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mmc_davinci_host *VAR_0)
{
 VAR_0->dma_tx = FUNC_4(FUNC_5(VAR_0->mmc), "tx");
 if (FUNC_0(VAR_0->dma_tx)) {
  FUNC_2(FUNC_5(VAR_0->mmc), "Can't get dma_tx channel\n");
  return FUNC_1(VAR_0->dma_tx);
 }

 VAR_0->dma_rx = FUNC_4(FUNC_5(VAR_0->mmc), "rx");
 if (FUNC_0(VAR_0->dma_rx)) {
  FUNC_2(FUNC_5(VAR_0->mmc), "Can't get dma_rx channel\n");
  FUNC_3(VAR_0->dma_tx);
  return FUNC_1(VAR_0->dma_rx);
 }

 return 0;
}
