
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_gbe_hw {int dummy; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct pch_gbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_gbe_hw*,int ) ;
 int FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_7(VAR_3);
 struct pch_gbe_adapter *VAR_5 = FUNC_1(VAR_4);
 struct pch_gbe_hw *VAR_6 = &VAR_5->hw;

 if (FUNC_5(VAR_3)) {
  FUNC_0(VAR_4, "Cannot re-enable PCI device after reset\n");
  return VAR_1;
 }
 FUNC_8(VAR_3);
 FUNC_6(VAR_3, VAR_0, 0);
 FUNC_3(VAR_6);
 FUNC_4(VAR_5);

 FUNC_2(VAR_6, 0);

 return VAR_2;
}
