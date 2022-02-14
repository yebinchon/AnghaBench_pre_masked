
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int num_q_vectors; int flags; int pdev; scalar_t__ link_duplex; scalar_t__ link_speed; int stats64_lock; int phy_info_timer; int watchdog_timer; TYPE_1__** q_vector; int state; struct e1000_hw hw; struct net_device* netdev; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (struct igb_adapter*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 () ;

void FUNC_20(struct igb_adapter *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->netdev;
 struct e1000_hw *VAR_9 = &VAR_7->hw;
 u32 VAR_10, VAR_11;
 int VAR_12;




 FUNC_14(VAR_6, &VAR_7->state);


 VAR_11 = FUNC_13(VAR_0);
 FUNC_18(VAR_0, VAR_11 & ~VAR_1);


 FUNC_4(VAR_7);

 FUNC_10(VAR_8);
 FUNC_11(VAR_8);


 VAR_10 = FUNC_13(VAR_2);
 VAR_10 &= ~VAR_3;
 FUNC_18(VAR_2, VAR_10);

 FUNC_19();
 FUNC_17(10000, 11000);

 FUNC_3(VAR_7);

 VAR_7->flags &= ~VAR_4;

 for (VAR_12 = 0; VAR_12 < VAR_7->num_q_vectors; VAR_12++) {
  if (VAR_7->q_vector[VAR_12]) {
   FUNC_9(&VAR_7->q_vector[VAR_12]->napi);
   FUNC_8(&VAR_7->q_vector[VAR_12]->napi);
  }
 }

 FUNC_0(&VAR_7->watchdog_timer);
 FUNC_0(&VAR_7->phy_info_timer);


 FUNC_15(&VAR_7->stats64_lock);
 FUNC_7(VAR_7);
 FUNC_16(&VAR_7->stats64_lock);

 VAR_7->link_speed = 0;
 VAR_7->link_duplex = 0;

 if (!FUNC_12(VAR_7->pdev))
  FUNC_5(VAR_7);


 VAR_7->flags &= ~VAR_5;

 FUNC_2(VAR_7);
 FUNC_1(VAR_7);





}
