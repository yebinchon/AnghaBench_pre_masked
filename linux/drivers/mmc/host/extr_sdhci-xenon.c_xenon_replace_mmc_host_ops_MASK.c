
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable_sdio_irq; int execute_tuning; int init_card; int start_signal_voltage_switch; int set_ios; } ;
struct sdhci_host {TYPE_1__ mmc_host_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct sdhci_host *VAR_5)
{
 VAR_5->mmc_host_ops.set_ios = VAR_3;
 VAR_5->mmc_host_ops.start_signal_voltage_switch =
   VAR_4;
 VAR_5->mmc_host_ops.init_card = VAR_2;
 VAR_5->mmc_host_ops.execute_tuning = VAR_1;
 VAR_5->mmc_host_ops.enable_sdio_irq = VAR_0;
}
