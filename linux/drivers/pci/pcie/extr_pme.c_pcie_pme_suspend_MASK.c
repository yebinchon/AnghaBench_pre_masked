
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_pme_service_data {int dummy; } ;
struct pcie_device {int irq; struct pci_dev* port; } ;
struct pci_dev {int subordinate; int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct pcie_pme_service_data* FUNC_3 (struct pcie_device*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*,struct pcie_pme_service_data*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pcie_device *VAR_1)
{
 struct pcie_pme_service_data *VAR_2 = FUNC_3(VAR_1);
 struct pci_dev *VAR_3 = VAR_1->port;
 bool VAR_4;
 int VAR_5;

 if (FUNC_0(&VAR_3->dev)) {
  VAR_4 = 1;
 } else {
  FUNC_1(&VAR_0);
  VAR_4 = FUNC_4(VAR_3->subordinate);
  FUNC_7(&VAR_0);
 }
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_1->irq);
  if (!VAR_5)
   return 0;
 }

 FUNC_5(VAR_3, VAR_2);

 FUNC_6(VAR_1->irq);

 return 0;
}
