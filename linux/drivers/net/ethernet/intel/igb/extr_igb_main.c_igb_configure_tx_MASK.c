
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_hw {int dummy; } ;
struct igb_adapter {int num_tx_queues; TYPE_1__** tx_ring; struct e1000_hw hw; } ;
struct TYPE_2__ {int reg_idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct igb_adapter*,TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct igb_adapter *VAR_0)
{
 struct e1000_hw *VAR_1 = &VAR_0->hw;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx_queues; VAR_2++)
  FUNC_3(FUNC_0(VAR_0->tx_ring[VAR_2]->reg_idx), 0);

 FUNC_4();
 FUNC_2(10000, 20000);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx_queues; VAR_2++)
  FUNC_1(VAR_0, VAR_0->tx_ring[VAR_2]);
}
