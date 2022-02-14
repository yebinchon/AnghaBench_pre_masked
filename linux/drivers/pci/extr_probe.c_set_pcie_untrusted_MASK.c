
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int untrusted; } ;


 struct pci_dev* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1;





 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 && VAR_1->untrusted)
  VAR_0->untrusted = 1;
}
