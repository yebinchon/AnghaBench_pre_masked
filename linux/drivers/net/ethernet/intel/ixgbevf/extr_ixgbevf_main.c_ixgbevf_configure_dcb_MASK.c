
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ timeout; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
struct ixgbevf_adapter {unsigned int num_rx_queues; unsigned int num_tx_queues; int state; TYPE_1__** tx_ring; int mbx_lock; struct ixgbe_hw hw; } ;
struct TYPE_3__ {unsigned int reg_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ixgbevf_adapter *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = VAR_1->num_rx_queues;
 unsigned int VAR_6 = VAR_1->num_tx_queues;
 int VAR_7;

 FUNC_2(&VAR_1->mbx_lock);


 VAR_7 = FUNC_0(VAR_2, &VAR_4, &VAR_3);

 FUNC_3(&VAR_1->mbx_lock);

 if (VAR_7)
  return VAR_7;

 if (VAR_4 > 1) {

  VAR_6 = 1;


  VAR_1->tx_ring[0]->reg_idx = VAR_3;


  VAR_5 = VAR_4;
 }


 if ((VAR_1->num_rx_queues != VAR_5) ||
     (VAR_1->num_tx_queues != VAR_6)) {

  VAR_2->mbx.timeout = 0;


  FUNC_1(VAR_0, &VAR_1->state);
 }

 return 0;
}
