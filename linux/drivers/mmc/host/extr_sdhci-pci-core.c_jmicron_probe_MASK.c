
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sdhci_pci_chip {int quirks; TYPE_1__* pdev; } ;
struct pci_dev {scalar_t__ bus; int devfn; } ;
struct TYPE_2__ {scalar_t__ revision; scalar_t__ device; scalar_t__ bus; int dev; int devfn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sdhci_pci_chip*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,scalar_t__,struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct sdhci_pci_chip *VAR_12)
{
 int VAR_13;
 u16 VAR_14 = 0;

 if (VAR_12->pdev->revision == 0) {
  VAR_12->quirks |= VAR_7 |
     VAR_8 |
     VAR_6 |
     VAR_10 |
     VAR_9;
 }
 if (VAR_12->pdev->device == VAR_4)
  VAR_14 = VAR_3;
 else if (VAR_12->pdev->device == VAR_2)
  VAR_14 = VAR_1;

 if (VAR_14) {
  struct pci_dev *VAR_15;

  VAR_15 = ((void*)0);
  while ((VAR_15 = FUNC_5(VAR_5,
      VAR_14, VAR_15)) != ((void*)0)) {
   if ((FUNC_0(VAR_12->pdev->devfn) ==
    FUNC_0(VAR_15->devfn)) &&
    (VAR_12->pdev->bus == VAR_15->bus))
    break;
  }

  if (VAR_15) {
   FUNC_4(VAR_15);
   FUNC_2(&VAR_12->pdev->dev, "Refusing to bind to "
    "secondary interface.\n");
   return -VAR_0;
  }
 }





 VAR_13 = FUNC_3(VAR_12, 1);
 if (VAR_13) {
  FUNC_1(&VAR_12->pdev->dev, "Failure enabling card power\n");
  return VAR_13;
 }


 if (VAR_12->pdev->device == VAR_2 ||
     VAR_12->pdev->device == VAR_1)
  VAR_12->quirks |= VAR_11;

 return 0;
}
