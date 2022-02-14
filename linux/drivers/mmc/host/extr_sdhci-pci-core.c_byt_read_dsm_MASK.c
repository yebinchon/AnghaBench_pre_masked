
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_3__* chip; TYPE_2__* host; } ;
struct mmc_host {int dummy; } ;
struct intel_host {int d3_retune; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int rpm_retune; TYPE_1__* pdev; } ;
struct TYPE_5__ {struct mmc_host* mmc; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct intel_host*,struct device*,struct mmc_host*) ;
 struct intel_host* FUNC_1 (struct sdhci_pci_slot*) ;

__attribute__((used)) static void FUNC_2(struct sdhci_pci_slot *VAR_0)
{
 struct intel_host *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = &VAR_0->chip->pdev->dev;
 struct mmc_host *VAR_3 = VAR_0->host->mmc;

 FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_0->chip->rpm_retune = VAR_1->d3_retune;
}
