
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pnv_php_slot {int irq; int * wq; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ msi_enabled; scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct pnv_php_slot*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct pnv_php_slot *VAR_4,
    bool VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pdev;
 int VAR_7 = VAR_4->irq;
 u16 VAR_8;

 if (VAR_4->irq > 0) {
  FUNC_5(VAR_6, VAR_0, &VAR_8);
  VAR_8 &= ~(VAR_2 |
     VAR_3 |
     VAR_1);
  FUNC_6(VAR_6, VAR_0, VAR_8);

  FUNC_1(VAR_4->irq, VAR_4);
  VAR_4->irq = 0;
 }

 if (VAR_4->wq) {
  FUNC_0(VAR_4->wq);
  VAR_4->wq = ((void*)0);
 }

 if (VAR_5 || VAR_7 > 0) {
  if (VAR_6->msix_enabled)
   FUNC_4(VAR_6);
  else if (VAR_6->msi_enabled)
   FUNC_3(VAR_6);

  FUNC_2(VAR_6);
 }
}
