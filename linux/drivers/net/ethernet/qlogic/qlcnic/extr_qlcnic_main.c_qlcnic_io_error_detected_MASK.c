
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_ops {int (* io_error_detected ) (struct pci_dev*,int ) ;} ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;
struct TYPE_2__ {struct qlcnic_hardware_ops* hw_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_1,
       pci_channel_state_t VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_1(VAR_1);
 struct qlcnic_hardware_ops *VAR_4 = VAR_3->ahw->hw_ops;

 if (VAR_4->io_error_detected) {
  return VAR_4->io_error_detected(VAR_1, VAR_2);
 } else {
  FUNC_0(&VAR_1->dev, "AER error_detected handler not registered.\n");
  return VAR_0;
 }
}
