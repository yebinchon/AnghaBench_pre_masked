
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_queue {int napi; } ;
struct netfront_info {struct netfront_queue* queues; TYPE_1__* netdev; } ;
struct TYPE_2__ {unsigned int real_num_tx_queues; } ;


 int FUNC_0 (struct netfront_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct netfront_info *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->netdev->real_num_tx_queues; VAR_1++) {
  struct netfront_queue *VAR_2 = &VAR_0->queues[VAR_1];

  if (FUNC_3(VAR_0->netdev))
   FUNC_1(&VAR_2->napi);
  FUNC_2(&VAR_2->napi);
 }

 FUNC_0(VAR_0->queues);
 VAR_0->queues = ((void*)0);
}
