
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igc_ring {int dummy; } ;
struct igc_adapter {int num_rx_queues; struct igc_ring** rx_ring; int hw; struct net_device* netdev; } ;


 int FUNC_0 (struct igc_ring*,int ) ;
 int FUNC_1 (struct igc_adapter*) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_ring*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (struct igc_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct igc_adapter*) ;
 int FUNC_9 (struct igc_adapter*) ;
 int FUNC_10 (struct igc_adapter*) ;

__attribute__((used)) static void FUNC_11(struct igc_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2 = 0;

 FUNC_4(VAR_0);
 FUNC_7(VAR_1);

 FUNC_10(VAR_0);
 FUNC_8(VAR_0);
 FUNC_9(VAR_0);

 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 FUNC_6(&VAR_0->hw);





 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct igc_ring *VAR_3 = VAR_0->rx_ring[VAR_2];

  FUNC_0(VAR_3, FUNC_3(VAR_3));
 }
}
