
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_adapter {int num_queues; TYPE_2__* rx_ring; TYPE_1__* tx_ring; } ;
struct TYPE_4__ {int ring_size; } ;
struct TYPE_3__ {int ring_size; } ;



__attribute__((used)) static void FUNC_0(struct ena_adapter *VAR_0,
         int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_queues; VAR_3++) {
  VAR_0->tx_ring[VAR_3].ring_size = VAR_1;
  VAR_0->rx_ring[VAR_3].ring_size = VAR_2;
 }
}
