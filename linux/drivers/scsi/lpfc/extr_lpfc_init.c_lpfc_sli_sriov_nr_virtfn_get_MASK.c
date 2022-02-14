
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_dev {int dummy; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;

uint16_t
FUNC_2(struct lpfc_hba *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pcidev;
 uint16_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 == 0)
  return 0;

 FUNC_1(VAR_3, VAR_5 + VAR_1, &VAR_4);
 return VAR_4;
}
