
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_rx_ring {int dummy; } ;
struct e1000_adapter {int num_rx_queues; int (* alloc_rx_buf ) (struct e1000_adapter*,struct e1000_rx_ring*,int ) ;struct e1000_rx_ring* rx_ring; struct net_device* netdev; } ;


 int FUNC_0 (struct e1000_rx_ring*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*,struct e1000_rx_ring*,int ) ;

__attribute__((used)) static void FUNC_8(struct e1000_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 FUNC_5(VAR_1);

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 FUNC_6(VAR_0);
 FUNC_1(VAR_0);




 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct e1000_rx_ring *VAR_3 = &VAR_0->rx_ring[VAR_2];
  VAR_0->alloc_rx_buf(VAR_0, VAR_3,
          FUNC_0(VAR_3));
 }
}
