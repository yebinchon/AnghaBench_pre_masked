
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mxcmci_host {int clk_ipg; int clk_per; scalar_t__ dma; TYPE_1__* pdata; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* exit ) (int *,struct mmc_host*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mxcmci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,struct mmc_host*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_5(VAR_0);
 struct mxcmci_host *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 if (VAR_2->pdata && VAR_2->pdata->exit)
  VAR_2->pdata->exit(&VAR_0->dev, VAR_1);

 if (VAR_2->dma)
  FUNC_1(VAR_2->dma);

 FUNC_0(VAR_2->clk_per);
 FUNC_0(VAR_2->clk_ipg);

 FUNC_2(VAR_1);

 return 0;
}
