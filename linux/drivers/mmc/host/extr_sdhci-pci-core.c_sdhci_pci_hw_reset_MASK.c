
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_slot {int (* hw_reset ) (struct sdhci_host*) ;} ;
struct sdhci_host {int dummy; } ;


 struct sdhci_pci_slot* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_0)
{
 struct sdhci_pci_slot *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->hw_reset)
  VAR_1->hw_reset(VAR_0);
}
