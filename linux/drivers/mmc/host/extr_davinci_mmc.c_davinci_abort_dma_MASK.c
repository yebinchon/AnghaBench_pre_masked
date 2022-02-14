
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {scalar_t__ data_dir; struct dma_chan* dma_tx; struct dma_chan* dma_rx; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_1(struct mmc_davinci_host *VAR_1)
{
 struct dma_chan *VAR_2;

 if (VAR_1->data_dir == VAR_0)
  VAR_2 = VAR_1->dma_rx;
 else
  VAR_2 = VAR_1->dma_tx;

 FUNC_0(VAR_2);
}
