
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mmc_omap_host {int nr_slots; int mmc_omap_wq; scalar_t__ dma_rx; scalar_t__ dma_tx; int iclk; int fclk; int irq; TYPE_1__* pdata; int * slots; } ;
struct TYPE_2__ {int (* cleanup ) (int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct mmc_omap_host*) ;
 int FUNC_6 (struct mmc_omap_host*,int ) ;
 int FUNC_7 (int ) ;
 struct mmc_omap_host* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct mmc_omap_host *VAR_1 = FUNC_8(VAR_0);
 int VAR_2;

 FUNC_0(VAR_1 == ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_slots; VAR_2++)
  FUNC_7(VAR_1->slots[VAR_2]);

 if (VAR_1->pdata->cleanup)
  VAR_1->pdata->cleanup(&VAR_0->dev);

 FUNC_6(VAR_1, 0);
 FUNC_5(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1->fclk);
 FUNC_1(VAR_1->iclk);
 FUNC_2(VAR_1->iclk);

 if (VAR_1->dma_tx)
  FUNC_4(VAR_1->dma_tx);
 if (VAR_1->dma_rx)
  FUNC_4(VAR_1->dma_rx);

 FUNC_3(VAR_1->mmc_omap_wq);

 return 0;
}
