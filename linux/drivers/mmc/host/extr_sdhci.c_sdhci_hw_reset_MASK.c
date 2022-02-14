
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* ops; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* hw_reset ) (struct sdhci_host*) ;} ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ops && VAR_1->ops->hw_reset)
  VAR_1->ops->hw_reset(VAR_1);
}
