
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_pme_service_data {int noirq; int lock; } ;
struct pcie_device {int irq; struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pcie_pme_service_data* FUNC_1 (struct pcie_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pcie_device *VAR_0)
{
 struct pcie_pme_service_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(&VAR_1->lock);
 if (VAR_1->noirq) {
  struct pci_dev *VAR_2 = VAR_0->port;

  FUNC_2(VAR_2);
  FUNC_3(VAR_2, 1);
  VAR_1->noirq = 0;
 } else {
  FUNC_0(VAR_0->irq);
 }
 FUNC_5(&VAR_1->lock);

 return 0;
}
