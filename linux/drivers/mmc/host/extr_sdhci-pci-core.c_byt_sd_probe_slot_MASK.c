
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sdhci_pci_slot {int cd_override_level; TYPE_5__* host; TYPE_3__* chip; scalar_t__ cd_idx; } ;
struct TYPE_6__ {int get_cd; } ;
struct TYPE_10__ {TYPE_4__* mmc; TYPE_1__ mmc_host_ops; } ;
struct TYPE_9__ {int caps; int caps2; } ;
struct TYPE_8__ {TYPE_2__* pdev; } ;
struct TYPE_7__ {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sdhci_pci_slot*) ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_slot *VAR_11)
{
 FUNC_0(VAR_11);
 VAR_11->host->mmc->caps |= VAR_3 |
     VAR_1 | VAR_2;
 VAR_11->cd_idx = 0;
 VAR_11->cd_override_level = 1;
 if (VAR_11->chip->pdev->device == VAR_6 ||
     VAR_11->chip->pdev->device == VAR_5 ||
     VAR_11->chip->pdev->device == VAR_4 ||
     VAR_11->chip->pdev->device == VAR_7)
  VAR_11->host->mmc_host_ops.get_cd = VAR_10;

 if (VAR_11->chip->pdev->subsystem_vendor == VAR_9 &&
     VAR_11->chip->pdev->subsystem_device == VAR_8)
  VAR_11->host->mmc->caps2 |= VAR_0;

 return 0;
}
