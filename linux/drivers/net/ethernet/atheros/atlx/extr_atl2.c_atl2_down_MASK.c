
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl2_adapter {int link_duplex; int link_speed; int cfg_phy; int phy_config_timer; int watchdog_timer; int hw; int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl2_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct atl2_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;



 FUNC_7(VAR_1, &VAR_2->flags);

 FUNC_6(VAR_3);


 FUNC_1(&VAR_2->hw);
 FUNC_4(1);

 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->watchdog_timer);
 FUNC_3(&VAR_2->phy_config_timer);
 FUNC_2(0, &VAR_2->cfg_phy);

 FUNC_5(VAR_3);
 VAR_2->link_speed = VAR_0;
 VAR_2->link_duplex = -1;
}
