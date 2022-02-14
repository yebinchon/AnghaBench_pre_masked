
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {int pad_calib_required; struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 struct sdhci_tegra* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_1(VAR_1);
 struct sdhci_tegra *VAR_3 = FUNC_0(VAR_2);
 const struct sdhci_tegra_soc_data *VAR_4 = VAR_3->soc_data;

 if (VAR_4->nvquirks & VAR_0)
  VAR_3->pad_calib_required = 1;
}
