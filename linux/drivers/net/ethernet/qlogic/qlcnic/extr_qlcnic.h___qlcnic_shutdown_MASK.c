
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct pci_dev*) ;} ;


 struct qlcnic_adapter* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static inline int FUNC_2(struct pci_dev *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->nic_ops->shutdown(VAR_0);
}
