
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_slot {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_card {int host; } ;
struct intel_host {int drv_strength; } ;


 struct sdhci_host* FUNC_0 (int ) ;
 struct intel_host* FUNC_1 (struct sdhci_pci_slot*) ;
 struct sdhci_pci_slot* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_0,
           unsigned int VAR_1, int VAR_2,
           int VAR_3, int *VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_0(VAR_0->host);
 struct sdhci_pci_slot *VAR_6 = FUNC_2(VAR_5);
 struct intel_host *VAR_7 = FUNC_1(VAR_6);

 return VAR_7->drv_strength;
}
