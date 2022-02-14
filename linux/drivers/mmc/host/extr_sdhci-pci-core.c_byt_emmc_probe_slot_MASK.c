
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_5__* host; TYPE_2__* chip; int hw_reset; } ;
struct TYPE_8__ {int select_drive_strength; } ;
struct TYPE_10__ {int timeout_clk; TYPE_3__ mmc_host_ops; TYPE_4__* mmc; } ;
struct TYPE_9__ {int caps; } ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sdhci_pci_slot*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_slot *VAR_9)
{
 FUNC_0(VAR_9);
 VAR_9->host->mmc->caps |= VAR_1 | VAR_4 |
     VAR_3 | VAR_0 |
     VAR_2 |
     VAR_5;
 VAR_9->hw_reset = VAR_8;
 if (VAR_9->chip->pdev->device == VAR_6)
  VAR_9->host->timeout_clk = 1000;
 VAR_9->host->mmc_host_ops.select_drive_strength =
      VAR_7;
 return 0;
}
