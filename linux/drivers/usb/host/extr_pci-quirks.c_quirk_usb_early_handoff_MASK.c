
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int vendor; scalar_t__ class; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_4)
{



 if (VAR_4->vendor == 0x184e)
  return;
 if (VAR_4->class != VAR_2 &&
   VAR_4->class != VAR_1 &&
   VAR_4->class != VAR_0 &&
   VAR_4->class != VAR_3)
  return;

 if (FUNC_2(VAR_4) < 0) {
  FUNC_0(&VAR_4->dev,
    "Can't enable PCI device, BIOS handoff failed.\n");
  return;
 }
 if (VAR_4->class == VAR_2)
  FUNC_5(VAR_4);
 else if (VAR_4->class == VAR_1)
  FUNC_4(VAR_4);
 else if (VAR_4->class == VAR_0)
  FUNC_3(VAR_4);
 else if (VAR_4->class == VAR_3)
  FUNC_6(VAR_4);
 FUNC_1(VAR_4);
}
