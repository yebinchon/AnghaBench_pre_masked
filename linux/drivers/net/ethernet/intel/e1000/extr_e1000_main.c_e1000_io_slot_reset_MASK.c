
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; scalar_t__ need_ioport; struct e1000_hw hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (int ,int ) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;

__attribute__((used)) static pci_ers_result_t FUNC_11(struct pci_dev *VAR_6)
{
 struct net_device *VAR_7 = FUNC_7(VAR_6);
 struct e1000_adapter *VAR_8 = FUNC_3(VAR_7);
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 int VAR_10;

 if (VAR_8->need_ioport)
  VAR_10 = FUNC_4(VAR_6);
 else
  VAR_10 = FUNC_5(VAR_6);
 if (VAR_10) {
  FUNC_9("Cannot re-enable PCI device after reset.\n");
  return VAR_2;
 }


 FUNC_10();
 FUNC_0(VAR_5, &VAR_8->flags);
 FUNC_8(VAR_6);

 FUNC_6(VAR_6, VAR_1, 0);
 FUNC_6(VAR_6, VAR_0, 0);

 FUNC_1(VAR_8);
 FUNC_2(VAR_4, ~0);

 return VAR_3;
}
