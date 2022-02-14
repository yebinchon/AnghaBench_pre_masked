
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_1__* host; } ;
struct mmc_host_ops {int execute_tuning; } ;
struct TYPE_2__ {struct mmc_host_ops mmc_host_ops; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_slot *VAR_1)
{
 struct mmc_host_ops *VAR_2 = &VAR_1->host->mmc_host_ops;

 VAR_2->execute_tuning = VAR_0;

 return 0;
}
