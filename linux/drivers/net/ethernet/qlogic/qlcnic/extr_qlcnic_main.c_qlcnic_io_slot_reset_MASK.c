
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_ops {int (* io_slot_reset ) (struct pci_dev*) ;} ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {struct qlcnic_hardware_ops* hw_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_1(VAR_1);
 struct qlcnic_hardware_ops *VAR_3 = VAR_2->ahw->hw_ops;

 if (VAR_3->io_slot_reset) {
  return VAR_3->io_slot_reset(VAR_1);
 } else {
  FUNC_0(&VAR_1->dev, "AER slot_reset handler not registered.\n");
  return VAR_0;
 }
}
