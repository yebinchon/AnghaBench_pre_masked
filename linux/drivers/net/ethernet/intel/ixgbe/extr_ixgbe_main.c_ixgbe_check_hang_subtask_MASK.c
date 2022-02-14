
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct ixgbe_q_vector {TYPE_2__ tx; TYPE_1__ rx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int num_tx_queues; int num_xdp_queues; int flags; int num_q_vectors; struct ixgbe_q_vector** q_vector; int * xdp_ring; int * tx_ring; int netdev; int state; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 u64 VAR_9 = 0;
 int VAR_10;


 if (FUNC_5(VAR_4, &VAR_7->state) ||
     FUNC_5(VAR_5, &VAR_7->state) ||
     FUNC_5(VAR_6, &VAR_7->state))
  return;


 if (FUNC_3(VAR_7->netdev)) {
  for (VAR_10 = 0; VAR_10 < VAR_7->num_tx_queues; VAR_10++)
   FUNC_4(VAR_7->tx_ring[VAR_10]);
  for (VAR_10 = 0; VAR_10 < VAR_7->num_xdp_queues; VAR_10++)
   FUNC_4(VAR_7->xdp_ring[VAR_10]);
 }

 if (!(VAR_7->flags & VAR_3)) {





  FUNC_1(VAR_8, VAR_0,
   (VAR_2 | VAR_1));
 } else {

  for (VAR_10 = 0; VAR_10 < VAR_7->num_q_vectors; VAR_10++) {
   struct ixgbe_q_vector *VAR_11 = VAR_7->q_vector[VAR_10];
   if (VAR_11->rx.ring || VAR_11->tx.ring)
    VAR_9 |= FUNC_0(VAR_10);
  }
 }


 FUNC_2(VAR_7, VAR_9);
}
