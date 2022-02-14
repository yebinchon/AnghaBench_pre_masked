
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct mantis_pci {scalar_t__ mmio; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,scalar_t__) ;
 int FUNC_1 (int ,struct mantis_pci*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(struct mantis_pci *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 FUNC_0(VAR_0, 1, " mem: 0x%p", VAR_1->mmio);
 FUNC_1(VAR_2->irq, VAR_1);
 if (VAR_1->mmio) {
  FUNC_2(VAR_1->mmio);
  FUNC_6(FUNC_5(VAR_2, 0),
       FUNC_4(VAR_2, 0));
 }

 FUNC_3(VAR_2);
}
