
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmveth_buff_pool {scalar_t__ threshold; int available; scalar_t__ active; } ;
struct ibmveth_adapter {struct ibmveth_buff_pool* rx_buff_pool; int replenish_task_cycles; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ibmveth_adapter*,struct ibmveth_buff_pool*) ;
 int FUNC_2 (struct ibmveth_adapter*) ;

__attribute__((used)) static void FUNC_3(struct ibmveth_adapter *VAR_1)
{
 int VAR_2;

 VAR_1->replenish_task_cycles++;

 for (VAR_2 = (VAR_0 - 1); VAR_2 >= 0; VAR_2--) {
  struct ibmveth_buff_pool *VAR_3 = &VAR_1->rx_buff_pool[VAR_2];

  if (VAR_3->active &&
      (FUNC_0(&VAR_3->available) < VAR_3->threshold))
   FUNC_1(VAR_1, VAR_3);
 }

 FUNC_2(VAR_1);
}
