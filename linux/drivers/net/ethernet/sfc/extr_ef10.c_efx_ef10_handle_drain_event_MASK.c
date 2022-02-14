
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int active_queues; int flush_wq; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct efx_nic *VAR_0)
{
 if (FUNC_1(&VAR_0->active_queues))
  FUNC_3(&VAR_0->flush_wq);

 FUNC_0(FUNC_2(&VAR_0->active_queues) < 0);
}
