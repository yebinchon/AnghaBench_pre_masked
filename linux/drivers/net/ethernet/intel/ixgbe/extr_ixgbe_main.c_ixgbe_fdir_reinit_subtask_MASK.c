
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags2; int flags; int num_tx_queues; int num_xdp_queues; TYPE_2__** xdp_ring; TYPE_1__** tx_ring; int fdir_overflow; int state; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 int VAR_9;

 if (!(VAR_7->flags2 & VAR_2))
  return;

 VAR_7->flags2 &= ~VAR_2;


 if (FUNC_4(VAR_4, &VAR_7->state))
  return;


 if (!(VAR_7->flags & VAR_3))
  return;

 VAR_7->fdir_overflow++;

 if (FUNC_2(VAR_8) == 0) {
  for (VAR_9 = 0; VAR_9 < VAR_7->num_tx_queues; VAR_9++)
   FUNC_3(VAR_5,
    &(VAR_7->tx_ring[VAR_9]->state));
  for (VAR_9 = 0; VAR_9 < VAR_7->num_xdp_queues; VAR_9++)
   FUNC_3(VAR_5,
    &VAR_7->xdp_ring[VAR_9]->state);

  FUNC_0(VAR_8, VAR_0, VAR_1);
 } else {
  FUNC_1(VAR_6, "failed to finish FDIR re-initialization, "
        "ignored adding FDIR ATR filters\n");
 }
}
