
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_2__* host; TYPE_4__* chip; } ;
struct TYPE_10__ {int caps2; } ;
struct TYPE_9__ {TYPE_3__* pdev; } ;
struct TYPE_8__ {scalar_t__ device; } ;
struct TYPE_6__ {int hs400_enhanced_strobe; } ;
struct TYPE_7__ {TYPE_5__* mmc; TYPE_1__ mmc_host_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sdhci_pci_slot*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_slot *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5);

 VAR_5->host->mmc->caps2 |= VAR_0;

 if (VAR_5->chip->pdev->device != VAR_3) {
  VAR_5->host->mmc->caps2 |= VAR_2,
  VAR_5->host->mmc_host_ops.hs400_enhanced_strobe =
      VAR_4;
  VAR_5->host->mmc->caps2 |= VAR_1;
 }

 return VAR_6;
}
