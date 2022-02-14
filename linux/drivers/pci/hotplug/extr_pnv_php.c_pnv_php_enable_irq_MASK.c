
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_php_slot {struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,char*,int) ;
 int FUNC_5 (struct pnv_php_slot*) ;
 int FUNC_6 (struct pnv_php_slot*,int) ;

__attribute__((used)) static void FUNC_7(struct pnv_php_slot *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2, VAR_3;






 if (FUNC_0(VAR_1))
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_4(VAR_1, "Error %d enabling device\n", VAR_3);
  return;
 }

 FUNC_3(VAR_1);


 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 > 0) {
  FUNC_6(VAR_0, VAR_2);
  return;
 }





 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3 || VAR_1->irq) {
  VAR_2 = VAR_1->irq;
  FUNC_6(VAR_0, VAR_2);
 }
}
