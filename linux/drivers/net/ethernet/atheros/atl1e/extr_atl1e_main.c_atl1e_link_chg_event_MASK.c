
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct atl1e_adapter {int link_chg_task; int link_speed; int mdio_lock; int hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (struct net_device*,char*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct atl1e_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;

 FUNC_5(&VAR_3->mdio_lock);
 FUNC_0(&VAR_3->hw, VAR_1, &VAR_5);
 FUNC_0(&VAR_3->hw, VAR_1, &VAR_5);
 FUNC_6(&VAR_3->mdio_lock);
 VAR_6 = VAR_5 & VAR_0;

 if (!VAR_6) {
  if (FUNC_2(VAR_4)) {

   FUNC_1(VAR_4, "NIC Link is Down\n");
   VAR_3->link_speed = VAR_2;
   FUNC_3(VAR_4);
  }
 }
 FUNC_4(&VAR_3->link_chg_task);
}
