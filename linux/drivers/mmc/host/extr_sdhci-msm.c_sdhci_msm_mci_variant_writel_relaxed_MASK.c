
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {scalar_t__ core_mem; } ;
struct sdhci_host {int dummy; } ;


 struct sdhci_msm_host* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_0,
  struct sdhci_host *VAR_1, u32 VAR_2)
{
 struct sdhci_pltfm_host *VAR_3 = FUNC_1(VAR_1);
 struct sdhci_msm_host *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_0, VAR_4->core_mem + VAR_2);
}
