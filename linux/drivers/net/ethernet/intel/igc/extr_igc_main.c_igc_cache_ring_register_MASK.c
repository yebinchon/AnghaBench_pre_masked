
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_2__ mac; } ;
struct igc_adapter {int num_rx_queues; int num_tx_queues; TYPE_1__** tx_ring; TYPE_4__** rx_ring; TYPE_3__ hw; } ;
struct TYPE_8__ {int reg_idx; } ;
struct TYPE_5__ {int reg_idx; } ;




__attribute__((used)) static void FUNC_0(struct igc_adapter *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;

 switch (VAR_0->hw.mac.type) {
 case 128:

 default:
  for (; VAR_1 < VAR_0->num_rx_queues; VAR_1++)
   VAR_0->rx_ring[VAR_1]->reg_idx = VAR_1;
  for (; VAR_2 < VAR_0->num_tx_queues; VAR_2++)
   VAR_0->tx_ring[VAR_2]->reg_idx = VAR_2;
  break;
 }
}
