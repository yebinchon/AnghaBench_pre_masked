
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ flash_address; } ;
struct igb_adapter {int flags; int shadow_vfta; int mac_table; int io_addr; int watchdog_task; int reset_task; int phy_info_timer; int watchdog_timer; int state; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct igb_adapter*) ;
 int FUNC_8 (struct igb_adapter*) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 struct igb_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 struct net_device* FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static void FUNC_23(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_16(VAR_4);
 struct igb_adapter *VAR_6 = FUNC_13(VAR_5);
 struct e1000_hw *VAR_7 = &VAR_6->hw;

 FUNC_19(&VAR_4->dev);



 FUNC_9(VAR_6);
 FUNC_7(VAR_6);



 FUNC_20(VAR_3, &VAR_6->state);
 FUNC_2(&VAR_6->watchdog_timer);
 FUNC_2(&VAR_6->phy_info_timer);

 FUNC_0(&VAR_6->reset_task);
 FUNC_0(&VAR_6->watchdog_task);
 FUNC_8(VAR_6);





 FUNC_21(VAR_5);

 FUNC_5(VAR_6);

 FUNC_17(VAR_4, VAR_6->io_addr);
 if (VAR_7->flash_address)
  FUNC_11(VAR_7->flash_address);
 FUNC_18(VAR_4);

 FUNC_12(VAR_6->mac_table);
 FUNC_12(VAR_6->shadow_vfta);
 FUNC_4(VAR_5);

 FUNC_15(VAR_4);

 FUNC_14(VAR_4);
}
