
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {int axi_clk; } ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*) ;
 struct xenon_priv* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int ) ;
 int FUNC_9 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_pltfm_host *VAR_2 = FUNC_7(VAR_1);
 struct xenon_priv *VAR_3 = FUNC_6(VAR_2);

 FUNC_3(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_8(VAR_1, 0);

 FUNC_9(VAR_1);
 FUNC_0(VAR_3->axi_clk);
 FUNC_0(VAR_2->clk);

 FUNC_5(VAR_0);

 return 0;
}
