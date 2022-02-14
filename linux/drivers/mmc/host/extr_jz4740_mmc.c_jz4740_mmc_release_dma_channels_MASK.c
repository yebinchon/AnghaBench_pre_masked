
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4740_mmc_host {int dma_rx; int dma_tx; int use_dma; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct jz4740_mmc_host *VAR_0)
{
 if (!VAR_0->use_dma)
  return;

 FUNC_0(VAR_0->dma_tx);
 FUNC_0(VAR_0->dma_rx);
}
