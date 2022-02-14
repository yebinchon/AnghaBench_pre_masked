
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_adapter {int num_rx_queues; TYPE_1__** rx_ring; } ;
struct TYPE_2__ {scalar_t__ desc; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++)
  if (VAR_0->rx_ring[VAR_1]->desc)
   FUNC_0(VAR_0->rx_ring[VAR_1]);
}
