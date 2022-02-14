
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra_soc_data {scalar_t__ dma_mask; } ;
struct sdhci_tegra {struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,scalar_t__) ;
 struct device* FUNC_1 (int ) ;
 struct sdhci_tegra* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_3(VAR_0);
 struct sdhci_tegra *VAR_2 = FUNC_2(VAR_1);
 const struct sdhci_tegra_soc_data *VAR_3 = VAR_2->soc_data;
 struct device *VAR_4 = FUNC_1(VAR_0->mmc);

 if (VAR_3->dma_mask)
  return FUNC_0(VAR_4, VAR_3->dma_mask);

 return 0;
}
