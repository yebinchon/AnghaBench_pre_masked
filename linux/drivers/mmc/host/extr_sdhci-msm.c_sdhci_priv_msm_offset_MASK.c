
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_offset {int dummy; } ;
struct sdhci_msm_host {struct sdhci_msm_offset const* offset; } ;
struct sdhci_host {int dummy; } ;


 struct sdhci_msm_host* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static const struct sdhci_msm_offset *FUNC_2(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_msm_host *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->offset;
}
