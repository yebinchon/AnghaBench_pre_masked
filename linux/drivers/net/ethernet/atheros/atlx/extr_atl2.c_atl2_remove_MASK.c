
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct atl2_adapter {TYPE_1__ hw; int link_chg_task; int reset_task; int phy_config_timer; int watchdog_timer; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct atl2_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_7(VAR_1);
 struct atl2_adapter *VAR_3 = FUNC_5(VAR_2);



 FUNC_9(VAR_0, &VAR_3->flags);

 FUNC_2(&VAR_3->watchdog_timer);
 FUNC_2(&VAR_3->phy_config_timer);
 FUNC_1(&VAR_3->reset_task);
 FUNC_1(&VAR_3->link_chg_task);

 FUNC_10(VAR_2);

 FUNC_0(&VAR_3->hw);

 FUNC_4(VAR_3->hw.hw_addr);
 FUNC_8(VAR_1);

 FUNC_3(VAR_2);

 FUNC_6(VAR_1);
}
