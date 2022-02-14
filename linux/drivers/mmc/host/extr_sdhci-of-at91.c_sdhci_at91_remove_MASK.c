
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_at91_priv {struct clk* mainck; struct clk* hclock; struct clk* gck; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sdhci_at91_priv* FUNC_5 (struct sdhci_pltfm_host*) ;
 int FUNC_6 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_pltfm_host *VAR_2 = FUNC_7(VAR_1);
 struct sdhci_at91_priv *VAR_3 = FUNC_5(VAR_2);
 struct clk *VAR_4 = VAR_3->gck;
 struct clk *VAR_5 = VAR_3->hclock;
 struct clk *VAR_6 = VAR_3->mainck;

 FUNC_3(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_6(VAR_0);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);

 return 0;
}
