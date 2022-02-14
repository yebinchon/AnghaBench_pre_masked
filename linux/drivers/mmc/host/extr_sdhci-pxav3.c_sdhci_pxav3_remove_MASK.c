
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pxa {int clk_core; int clk_io; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*) ;
 struct sdhci_pxa* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_pltfm_host *VAR_2 = FUNC_7(VAR_1);
 struct sdhci_pxa *VAR_3 = FUNC_6(VAR_2);

 FUNC_3(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_8(VAR_1, 1);

 FUNC_0(VAR_3->clk_io);
 FUNC_0(VAR_3->clk_core);

 FUNC_5(VAR_0);

 return 0;
}
