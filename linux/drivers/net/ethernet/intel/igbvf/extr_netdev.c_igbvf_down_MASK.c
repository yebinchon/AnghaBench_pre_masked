
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {TYPE_1__* rx_ring; int tx_ring; scalar_t__ link_duplex; scalar_t__ link_speed; int watchdog_timer; int state; struct e1000_hw hw; struct net_device* netdev; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct igbvf_adapter*) ;
 int FUNC_9 (struct igbvf_adapter*) ;
 int FUNC_10 (struct igbvf_adapter*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,int *) ;

void FUNC_16(struct igbvf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 u32 VAR_6, VAR_7;




 FUNC_15(VAR_2, &VAR_3->state);


 VAR_6 = FUNC_4(FUNC_0(0));
 FUNC_5(FUNC_0(0), VAR_6 & ~VAR_0);

 FUNC_13(VAR_4);
 FUNC_14(VAR_4);


 VAR_7 = FUNC_4(FUNC_1(0));
 FUNC_5(FUNC_1(0), VAR_7 & ~VAR_1);


 FUNC_3();
 FUNC_11(10);

 FUNC_12(&VAR_3->rx_ring->napi);

 FUNC_8(VAR_3);

 FUNC_2(&VAR_3->watchdog_timer);


 FUNC_10(VAR_3);

 VAR_3->link_speed = 0;
 VAR_3->link_duplex = 0;

 FUNC_9(VAR_3);
 FUNC_7(VAR_3->tx_ring);
 FUNC_6(VAR_3->rx_ring);
}
