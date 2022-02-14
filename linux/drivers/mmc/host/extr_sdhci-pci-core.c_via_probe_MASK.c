
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_chip {int quirks; TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_chip *VAR_1)
{
 if (VAR_1->pdev->revision == 0x10)
  VAR_1->quirks |= VAR_0;

 return 0;
}
