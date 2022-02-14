
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_2__* chip; TYPE_1__* host; } ;
struct mmc_host_ops {int start_signal_voltage_switch; int execute_tuning; } ;
struct mmc_host {int f_max; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {TYPE_3__* pdev; } ;
struct TYPE_4__ {struct mmc_host* mmc; struct mmc_host_ops mmc_host_ops; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct sdhci_pci_slot*) ;
 int FUNC_2 (struct device*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct sdhci_pci_slot *VAR_2)
{
 struct mmc_host_ops *VAR_3 = &VAR_2->host->mmc_host_ops;
 struct device *VAR_4 = &VAR_2->chip->pdev->dev;
 struct mmc_host *VAR_5 = VAR_2->host->mmc;

 FUNC_1(VAR_2);

 FUNC_0(VAR_2->chip->pdev);

 VAR_3->execute_tuning = VAR_0;
 VAR_3->start_signal_voltage_switch = VAR_1;

 FUNC_2(VAR_4, "max-frequency", &VAR_5->f_max);
}
