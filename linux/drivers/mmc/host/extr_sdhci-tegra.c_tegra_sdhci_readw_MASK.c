
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct sdhci_host *VAR_3, int VAR_4)
{
 struct sdhci_pltfm_host *VAR_5 = FUNC_2(VAR_3);
 struct sdhci_tegra *VAR_6 = FUNC_1(VAR_5);
 const struct sdhci_tegra_soc_data *VAR_7 = VAR_6->soc_data;

 if (FUNC_3((VAR_7->nvquirks & VAR_0) &&
   (VAR_4 == VAR_1))) {

  return VAR_2;
 }

 return FUNC_0(VAR_3->ioaddr + VAR_4);
}
