
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {int use_dma; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dma_release ) (struct mmci_host*) ;} ;


 int FUNC_0 (struct mmci_host*) ;

void FUNC_1(struct mmci_host *VAR_0)
{
 if (VAR_0->ops && VAR_0->ops->dma_release)
  VAR_0->ops->dma_release(VAR_0);

 VAR_0->use_dma = 0;
}
