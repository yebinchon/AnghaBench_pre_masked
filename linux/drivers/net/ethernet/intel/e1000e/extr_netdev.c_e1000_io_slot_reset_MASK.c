
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int state_saved; int dev; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags2; struct e1000_hw hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ,int ) ;
 struct e1000_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_10(struct pci_dev *VAR_9)
{
 struct net_device *VAR_10 = FUNC_7(VAR_9);
 struct e1000_adapter *VAR_11 = FUNC_4(VAR_10);
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 u16 VAR_13 = 0;
 int VAR_14;
 pci_ers_result_t VAR_15;

 if (VAR_11->flags2 & VAR_0)
  VAR_13 = VAR_2;
 if (VAR_11->flags2 & VAR_1)
  VAR_13 |= VAR_3;
 if (VAR_13)
  FUNC_1(VAR_9, VAR_13);

 VAR_14 = FUNC_5(VAR_9);
 if (VAR_14) {
  FUNC_0(&VAR_9->dev,
   "Cannot re-enable PCI device after reset.\n");
  VAR_15 = VAR_6;
 } else {
  VAR_9->state_saved = 1;
  FUNC_8(VAR_9);
  FUNC_9(VAR_9);

  FUNC_6(VAR_9, VAR_5, 0);
  FUNC_6(VAR_9, VAR_4, 0);

  FUNC_2(VAR_11);
  FUNC_3(VAR_8, ~0);
  VAR_15 = VAR_7;
 }

 return VAR_15;
}
