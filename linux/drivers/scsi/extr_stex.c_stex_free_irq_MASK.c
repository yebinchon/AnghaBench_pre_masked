
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_hba {scalar_t__ msi_enabled; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (int ,struct st_hba*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct st_hba *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_0(VAR_1->irq, VAR_0);
 if (VAR_0->msi_enabled)
  FUNC_1(VAR_1);
}
