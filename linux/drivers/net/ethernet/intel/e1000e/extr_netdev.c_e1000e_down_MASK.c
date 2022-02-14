
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {scalar_t__ mtu; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_adapter {int flags2; int rx_ring; int tx_ring; int pdev; struct net_device* netdev; scalar_t__ link_duplex; scalar_t__ link_speed; int stats64_lock; int phy_info_timer; int napi; int state; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct e1000_adapter*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int,int) ;

void FUNC_21(struct e1000_adapter *VAR_9, bool VAR_10)
{
 struct net_device *VAR_11 = VAR_9->netdev;
 struct e1000_hw *VAR_12 = &VAR_9->hw;
 u32 VAR_13, VAR_14;




 FUNC_17(VAR_6, &VAR_9->state);

 FUNC_14(VAR_11);


 VAR_14 = FUNC_11(VAR_4);
 if (!(VAR_9->flags2 & VAR_3))
  FUNC_12(VAR_4, VAR_14 & ~VAR_0);


 FUNC_15(VAR_11);


 VAR_13 = FUNC_11(VAR_5);
 VAR_13 &= ~VAR_1;
 FUNC_12(VAR_5, VAR_13);


 FUNC_9();
 FUNC_20(10000, 11000);

 FUNC_4(VAR_9);

 FUNC_13(&VAR_9->napi);

 FUNC_0(&VAR_9->phy_info_timer);

 FUNC_18(&VAR_9->stats64_lock);
 FUNC_8(VAR_9);
 FUNC_19(&VAR_9->stats64_lock);

 FUNC_6(VAR_9);

 VAR_9->link_speed = 0;
 VAR_9->link_duplex = 0;


 if ((VAR_12->mac.type >= VAR_7) &&
     (VAR_9->netdev->mtu > VAR_2) &&
     FUNC_5(VAR_12, 0))
  FUNC_10("failed to disable jumbo frame workaround mode\n");

 if (!FUNC_16(VAR_9->pdev)) {
  if (VAR_10)
   FUNC_7(VAR_9);
  else if (VAR_12->mac.type >= VAR_8)
   FUNC_3(VAR_9);
 }
 FUNC_2(VAR_9->tx_ring);
 FUNC_1(VAR_9->rx_ring);
}
