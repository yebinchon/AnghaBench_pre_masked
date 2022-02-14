
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int mwi; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct pci_devres* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_1)
{
 struct pci_devres *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 VAR_2->mwi = 1;
 return FUNC_1(VAR_1);
}
