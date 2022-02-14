
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct igb_adapter {int rss_queues; int num_rx_queues; int num_tx_queues; TYPE_4__** tx_ring; TYPE_3__** rx_ring; scalar_t__ vfs_allocated_count; TYPE_2__ hw; } ;
struct TYPE_8__ {int reg_idx; } ;
struct TYPE_7__ {scalar_t__ reg_idx; } ;


 scalar_t__ FUNC_0 (int) ;
__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;
 u32 VAR_3 = VAR_0->vfs_allocated_count;

 switch (VAR_0->hw.mac.type) {
 case 133:





  if (VAR_0->vfs_allocated_count) {
   for (; VAR_1 < VAR_0->rss_queues; VAR_1++)
    VAR_0->rx_ring[VAR_1]->reg_idx = VAR_3 +
              FUNC_0(VAR_1);
  }

 case 134:
 case 132:
 case 129:
 case 128:
 case 131:
 case 130:

 default:
  for (; VAR_1 < VAR_0->num_rx_queues; VAR_1++)
   VAR_0->rx_ring[VAR_1]->reg_idx = VAR_3 + VAR_1;
  for (; VAR_2 < VAR_0->num_tx_queues; VAR_2++)
   VAR_0->tx_ring[VAR_2]->reg_idx = VAR_3 + VAR_2;
  break;
 }
}
