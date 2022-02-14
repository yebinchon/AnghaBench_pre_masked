
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_0)
{
 struct pci_dev *VAR_1;


 if (!VAR_0->pcidev)
  return;
 else
  VAR_1 = VAR_0->pcidev;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return;
}
