
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {struct sdhci_host* host; } ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps2; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_slot *VAR_1)
{
 struct sdhci_host *VAR_2 = VAR_1->host;

 VAR_1->host->mmc->caps2 |= VAR_0;
 FUNC_0(VAR_2);

 return 0;
}
