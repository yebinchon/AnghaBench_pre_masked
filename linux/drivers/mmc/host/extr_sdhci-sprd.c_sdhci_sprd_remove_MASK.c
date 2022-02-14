
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_sprd_host {int clk_2x_enable; int clk_enable; int clk_sdio; } ;
struct sdhci_host {struct mmc_host* mmc; } ;
struct platform_device {int dummy; } ;
struct mmc_host {int dummy; } ;


 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 struct sdhci_host* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_4(VAR_0);
 struct sdhci_sprd_host *VAR_2 = FUNC_0(VAR_1);
 struct mmc_host *VAR_3 = VAR_1->mmc;

 FUNC_3(VAR_3);
 FUNC_1(VAR_2->clk_sdio);
 FUNC_1(VAR_2->clk_enable);
 FUNC_1(VAR_2->clk_2x_enable);

 FUNC_2(VAR_3);

 return 0;
}
