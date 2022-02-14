
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct ixgbevf_adapter {int state; int io_addr; TYPE_1__ hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 () ;

__attribute__((used)) static pci_ers_result_t FUNC_8(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_5(VAR_3);
 struct ixgbevf_adapter *VAR_5 = FUNC_3(VAR_4);

 if (FUNC_4(VAR_3)) {
  FUNC_1(&VAR_3->dev,
   "Cannot re-enable PCI device after reset.\n");
  return VAR_0;
 }

 VAR_5->hw.hw_addr = VAR_5->io_addr;
 FUNC_7();
 FUNC_0(VAR_2, &VAR_5->state);
 FUNC_6(VAR_3);

 FUNC_2(VAR_5);

 return VAR_1;
}
