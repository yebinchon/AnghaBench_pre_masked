
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct pltfm_imx_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct pltfm_imx_data*) ;
 struct pltfm_imx_data* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_2(VAR_0);
 struct pltfm_imx_data *VAR_2 = FUNC_1(VAR_1);


 return FUNC_0(VAR_2) ? 1 << 29 : 1 << 27;
}
