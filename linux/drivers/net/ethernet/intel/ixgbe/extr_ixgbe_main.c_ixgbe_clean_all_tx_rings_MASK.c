
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_tx_queues; int num_xdp_queues; int * xdp_ring; int * tx_ring; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++)
  FUNC_0(VAR_0->tx_ring[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_xdp_queues; VAR_1++)
  FUNC_0(VAR_0->xdp_ring[VAR_1]);
}
