
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {TYPE_1__* ops; int use_dma; } ;
struct mmc_data {int dummy; } ;
struct TYPE_2__ {int (* dma_finalize ) (struct mmci_host*,struct mmc_data*) ;} ;


 int FUNC_0 (struct mmci_host*,struct mmc_data*) ;

void FUNC_1(struct mmci_host *VAR_0, struct mmc_data *VAR_1)
{
 if (!VAR_0->use_dma)
  return;

 if (VAR_0->ops && VAR_0->ops->dma_finalize)
  VAR_0->ops->dma_finalize(VAR_0, VAR_1);
}
