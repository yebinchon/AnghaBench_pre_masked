
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_mmc_platform_data {int icnclk; struct reset_control* rstc; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct reset_control {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct reset_control*) ;
 struct st_mmc_platform_data* FUNC_3 (struct sdhci_pltfm_host*) ;
 int FUNC_4 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_pltfm_host *VAR_2 = FUNC_5(VAR_1);
 struct st_mmc_platform_data *VAR_3 = FUNC_3(VAR_2);
 struct reset_control *VAR_4 = VAR_3->rstc;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_0);

 FUNC_0(VAR_3->icnclk);

 if (VAR_4)
  FUNC_2(VAR_4);

 return VAR_5;
}
