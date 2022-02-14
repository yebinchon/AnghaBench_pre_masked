
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_adapter {int num_queues; TYPE_1__* rx_ring; int ena_dev; } ;
struct TYPE_2__ {unsigned int smoothed_interval; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->ena_dev);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++)
  VAR_0->rx_ring[VAR_2].smoothed_interval = VAR_1;
}
