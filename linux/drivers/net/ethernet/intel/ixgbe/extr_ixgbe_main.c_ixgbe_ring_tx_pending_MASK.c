
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct ixgbe_adapter {int num_tx_queues; int num_xdp_queues; struct ixgbe_ring** xdp_ring; struct ixgbe_ring** tx_ring; } ;



__attribute__((used)) static bool FUNC_0(struct ixgbe_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++) {
  struct ixgbe_ring *VAR_2 = VAR_0->tx_ring[VAR_1];

  if (VAR_2->next_to_use != VAR_2->next_to_clean)
   return 1;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_xdp_queues; VAR_1++) {
  struct ixgbe_ring *VAR_3 = VAR_0->xdp_ring[VAR_1];

  if (VAR_3->next_to_use != VAR_3->next_to_clean)
   return 1;
 }

 return 0;
}
