
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_1__* chip; } ;
struct sdhci_host {int flags; } ;
struct pci_dev {int class; int dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct sdhci_pci_slot* FUNC_2 (struct sdhci_host*) ;

int FUNC_3(struct sdhci_host *VAR_3)
{
 struct sdhci_pci_slot *VAR_4;
 struct pci_dev *VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = VAR_4->chip->pdev;

 if (((VAR_5->class & 0xFFFF00) == (VAR_0 << 8)) &&
  ((VAR_5->class & 0x0000FF) != VAR_1) &&
  (VAR_3->flags & VAR_2)) {
  FUNC_0(&VAR_5->dev, "Will use DMA mode even though HW "
   "doesn't fully claim to support it.\n");
 }

 FUNC_1(VAR_5);

 return 0;
}
