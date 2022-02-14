
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_adapter {int num_queues; TYPE_1__* rx_ring; } ;
struct TYPE_2__ {int mtu; } ;



__attribute__((used)) static void FUNC_0(struct ena_adapter *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++)
  VAR_0->rx_ring[VAR_2].mtu = VAR_1;
}
