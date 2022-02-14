
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_ops {int (* io_resume ) (struct pci_dev*) ;} ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {struct qlcnic_hardware_ops* hw_ops; } ;


 int FUNC_0 (int *,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = FUNC_1(VAR_0);
 struct qlcnic_hardware_ops *VAR_2 = VAR_1->ahw->hw_ops;

 if (VAR_2->io_resume)
  VAR_2->io_resume(VAR_0);
 else
  FUNC_0(&VAR_0->dev, "AER resume handler not registered.\n");
}
