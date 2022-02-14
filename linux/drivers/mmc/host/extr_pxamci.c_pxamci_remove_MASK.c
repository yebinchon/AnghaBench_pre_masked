
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {int dma_chan_tx; int dma_chan_rx; scalar_t__ base; TYPE_1__* pdata; } ;
struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* exit ) (int *,struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct pxamci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct pxamci_host*) ;
 int FUNC_7 (int *,struct mmc_host*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct mmc_host *VAR_9 = FUNC_5(VAR_8);

 if (VAR_9) {
  struct pxamci_host *VAR_10 = FUNC_3(VAR_9);

  FUNC_4(VAR_9);

  if (VAR_10->pdata && VAR_10->pdata->exit)
   VAR_10->pdata->exit(&VAR_8->dev, VAR_9);

  FUNC_6(VAR_10);
  FUNC_8(VAR_7|VAR_5|VAR_0|VAR_6|
         VAR_2|VAR_4|VAR_1,
         VAR_10->base + VAR_3);

  FUNC_1(VAR_10->dma_chan_rx);
  FUNC_1(VAR_10->dma_chan_tx);
  FUNC_0(VAR_10->dma_chan_rx);
  FUNC_0(VAR_10->dma_chan_tx);

  FUNC_2(VAR_9);
 }

 return 0;
}
