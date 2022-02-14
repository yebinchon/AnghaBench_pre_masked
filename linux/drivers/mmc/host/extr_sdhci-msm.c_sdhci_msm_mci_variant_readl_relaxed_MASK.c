
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {scalar_t__ core_mem; } ;
struct sdhci_host {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct sdhci_msm_host* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static u32 FUNC_3(struct sdhci_host *VAR_0,
  u32 VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_2(VAR_0);
 struct sdhci_msm_host *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->core_mem + VAR_1);
}
