
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igb_ring {int dummy; } ;
struct igb_adapter {int num_rx_queues; struct igb_ring** rx_ring; int hw; struct net_device* netdev; } ;


 int FUNC_0 (struct igb_ring*,int ) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_ring*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (struct igb_adapter*) ;
 int FUNC_12 (struct igb_adapter*) ;

__attribute__((used)) static void FUNC_13(struct igb_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 FUNC_4(VAR_0);
 FUNC_8(VAR_1);
 FUNC_12(VAR_0);

 FUNC_6(VAR_0);

 FUNC_11(VAR_0);
 FUNC_9(VAR_0);
 FUNC_10(VAR_0);

 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 FUNC_7(&VAR_0->hw);





 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct igb_ring *VAR_3 = VAR_0->rx_ring[VAR_2];
  FUNC_0(VAR_3, FUNC_3(VAR_3));
 }
}
