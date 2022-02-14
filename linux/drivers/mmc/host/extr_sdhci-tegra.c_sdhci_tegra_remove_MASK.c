
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra {int rst; } ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*) ;
 struct sdhci_tegra* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_pltfm_host *VAR_2 = FUNC_5(VAR_1);
 struct sdhci_tegra *VAR_3 = FUNC_4(VAR_2);

 FUNC_6(VAR_1, 0);

 FUNC_2(VAR_3->rst);
 FUNC_7(2000, 4000);
 FUNC_0(VAR_2->clk);

 FUNC_3(VAR_0);

 return 0;
}
