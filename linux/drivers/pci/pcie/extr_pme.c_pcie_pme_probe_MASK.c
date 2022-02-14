
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_pme_service_data {struct pcie_device* srv; int work; int lock; } ;
struct pcie_device {int irq; struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pcie_pme_service_data*) ;
 struct pcie_pme_service_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*,char*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,char*,struct pcie_device*) ;
 int FUNC_8 (struct pcie_device*,struct pcie_pme_service_data*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct pcie_device *VAR_5)
{
 struct pci_dev *VAR_6;
 struct pcie_pme_service_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(&VAR_7->lock);
 FUNC_0(&VAR_7->work, VAR_4);
 VAR_7->srv = VAR_5;
 FUNC_8(VAR_5, VAR_7);

 VAR_6 = VAR_5->port;
 FUNC_5(VAR_6, 0);
 FUNC_4(VAR_6);

 VAR_8 = FUNC_7(VAR_5->irq, VAR_3, VAR_2, "PCIe PME", VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return VAR_8;
 }

 FUNC_3(VAR_6, "Signaling with IRQ %d\n", VAR_5->irq);

 FUNC_6(VAR_6);
 FUNC_5(VAR_6, 1);
 return 0;
}
