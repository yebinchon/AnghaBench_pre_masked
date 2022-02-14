
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int rxq_flush_pending; int rxq_flush_outstanding; int active_queues; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct ef4_nic *VAR_1)
{

 FUNC_1();

 return (FUNC_0(&VAR_1->active_queues) == 0 ||
  (FUNC_0(&VAR_1->rxq_flush_outstanding) < VAR_0
   && FUNC_0(&VAR_1->rxq_flush_pending) > 0));
}
