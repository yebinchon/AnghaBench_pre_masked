
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igb_adapter {int num_tx_queues; TYPE_1__** tx_ring; } ;
struct TYPE_2__ {scalar_t__ launchtime_enable; } ;



__attribute__((used)) static bool FUNC_0(struct igb_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++) {
  if (VAR_0->tx_ring[VAR_1]->launchtime_enable)
   return 1;
 }

 return 0;
}
