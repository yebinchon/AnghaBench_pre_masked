
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_arasan_data {int phy; scalar_t__ is_phy_on; struct clk* clk_ahb; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sdhci_host* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 struct sdhci_arasan_data* FUNC_6 (struct sdhci_pltfm_host*) ;
 int FUNC_7 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_8 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 int VAR_1;
 struct sdhci_host *VAR_2 = FUNC_4(VAR_0);
 struct sdhci_pltfm_host *VAR_3 = FUNC_8(VAR_2);
 struct sdhci_arasan_data *VAR_4 = FUNC_6(VAR_3);
 struct clk *VAR_5 = VAR_4->clk_ahb;

 if (!FUNC_0(VAR_4->phy)) {
  if (VAR_4->is_phy_on)
   FUNC_3(VAR_4->phy);
  FUNC_2(VAR_4->phy);
 }

 FUNC_5(&VAR_0->dev);

 VAR_1 = FUNC_7(VAR_0);

 FUNC_1(VAR_5);

 return VAR_1;
}
