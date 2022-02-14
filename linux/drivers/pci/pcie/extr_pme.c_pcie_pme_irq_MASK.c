
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_pme_service_data {int work; int lock; } ;
struct pcie_device {struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcie_pme_service_data* FUNC_0 (struct pcie_device*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct pci_dev *VAR_6;
 struct pcie_pme_service_data *VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 VAR_6 = ((struct pcie_device *)VAR_5)->port;
 VAR_7 = FUNC_0((struct pcie_device *)VAR_5);

 FUNC_4(&VAR_7->lock, VAR_9);
 FUNC_1(VAR_6, VAR_2, &VAR_8);

 if (VAR_8 == (u32) ~0 || !(VAR_8 & VAR_3)) {
  FUNC_5(&VAR_7->lock, VAR_9);
  return VAR_1;
 }

 FUNC_2(VAR_6, 0);
 FUNC_5(&VAR_7->lock, VAR_9);


 FUNC_3(&VAR_7->work);

 return VAR_0;
}
