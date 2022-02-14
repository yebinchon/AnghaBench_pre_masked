
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_ring {int dummy; } ;
struct igb_adapter {int num_rx_queues; struct igb_ring** rx_ring; } ;


 int FUNC_0 (struct igb_adapter*,struct igb_ring*) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*,struct igb_ring*) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_0)
{
 int VAR_1;


 FUNC_1(VAR_0);




 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++) {
  struct igb_ring *VAR_2 = VAR_0->rx_ring[VAR_1];

  FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_2);
 }
}
