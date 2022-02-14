
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct bcm2835_host {int * dma_chan; } ;


 int FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 (int *) ;
 struct bcm2835_host* FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0)
{
 struct bcm2835_host *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->dma_chan)
  FUNC_1(VAR_1->dma_chan);
 VAR_1->dma_chan = ((void*)0);
 FUNC_0(VAR_1);
}
