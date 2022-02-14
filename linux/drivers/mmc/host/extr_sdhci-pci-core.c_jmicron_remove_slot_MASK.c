
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pci_slot {int host; TYPE_2__* chip; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_pci_slot *VAR_2, int VAR_3)
{
 if (VAR_3)
  return;

 if (VAR_2->chip->pdev->device == VAR_1 ||
     VAR_2->chip->pdev->device == VAR_0)
  FUNC_0(VAR_2->host, 0);
}
