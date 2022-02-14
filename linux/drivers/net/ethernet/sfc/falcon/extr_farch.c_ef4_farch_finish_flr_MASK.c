
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int active_queues; int rxq_flush_outstanding; int rxq_flush_pending; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct ef4_nic *VAR_0)
{
 FUNC_0(&VAR_0->rxq_flush_pending, 0);
 FUNC_0(&VAR_0->rxq_flush_outstanding, 0);
 FUNC_0(&VAR_0->active_queues, 0);
}
