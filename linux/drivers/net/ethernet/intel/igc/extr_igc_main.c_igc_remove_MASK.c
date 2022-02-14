
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct igc_adapter {int shadow_vfta; int mac_table; int io_addr; int watchdog_task; int reset_task; int phy_info_timer; int watchdog_timer; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (int ) ;
 struct igc_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_9(VAR_1);
 struct igc_adapter *VAR_3 = FUNC_6(VAR_2);

 FUNC_12(VAR_0, &VAR_3->state);

 FUNC_1(&VAR_3->watchdog_timer);
 FUNC_1(&VAR_3->phy_info_timer);

 FUNC_0(&VAR_3->reset_task);
 FUNC_0(&VAR_3->watchdog_task);




 FUNC_4(VAR_3);
 FUNC_13(VAR_2);

 FUNC_3(VAR_3);
 FUNC_10(VAR_1, VAR_3->io_addr);
 FUNC_11(VAR_1);

 FUNC_5(VAR_3->mac_table);
 FUNC_5(VAR_3->shadow_vfta);
 FUNC_2(VAR_2);

 FUNC_8(VAR_1);

 FUNC_7(VAR_1);
}
