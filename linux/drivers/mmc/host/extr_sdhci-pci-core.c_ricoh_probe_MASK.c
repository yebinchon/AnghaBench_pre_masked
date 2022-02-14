
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_chip {int quirks; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_chip *VAR_3)
{
 if (VAR_3->pdev->subsystem_vendor == VAR_0 ||
     VAR_3->pdev->subsystem_vendor == VAR_1)
  VAR_3->quirks |= VAR_2;
 return 0;
}
