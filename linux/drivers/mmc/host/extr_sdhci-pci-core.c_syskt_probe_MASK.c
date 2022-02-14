
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_chip {TYPE_1__* pdev; } ;
struct TYPE_2__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_chip *VAR_2)
{
 if ((VAR_2->pdev->class & 0x0000FF) == VAR_1) {
  VAR_2->pdev->class &= ~0x0000FF;
  VAR_2->pdev->class |= VAR_0;
 }
 return 0;
}
