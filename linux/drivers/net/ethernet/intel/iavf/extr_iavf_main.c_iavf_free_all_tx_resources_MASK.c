
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_adapter {int num_active_queues; TYPE_1__* tx_rings; } ;
struct TYPE_2__ {scalar_t__ desc; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct iavf_adapter *VAR_0)
{
 int VAR_1;

 if (!VAR_0->tx_rings)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_active_queues; VAR_1++)
  if (VAR_0->tx_rings[VAR_1].desc)
   FUNC_0(&VAR_0->tx_rings[VAR_1]);
}
