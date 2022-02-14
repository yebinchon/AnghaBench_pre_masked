
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {int pm_qos_req; TYPE_1__* socdata; int clk_ahb; int clk_ipg; int clk_per; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct platform_device*) ;
 struct pltfm_imx_data* FUNC_8 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_1(VAR_2);
 struct sdhci_pltfm_host *VAR_4 = FUNC_9(VAR_3);
 struct pltfm_imx_data *VAR_5 = FUNC_8(VAR_4);
 int VAR_6 = (FUNC_6(VAR_3->ioaddr + VAR_1) == 0xffffffff);

 FUNC_4(&VAR_2->dev);
 FUNC_3(&VAR_2->dev);
 FUNC_5(&VAR_2->dev);

 FUNC_10(VAR_3, VAR_6);

 FUNC_0(VAR_5->clk_per);
 FUNC_0(VAR_5->clk_ipg);
 FUNC_0(VAR_5->clk_ahb);

 if (VAR_5->socdata->flags & VAR_0)
  FUNC_2(&VAR_5->pm_qos_req);

 FUNC_7(VAR_2);

 return 0;
}
