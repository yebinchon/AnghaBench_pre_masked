
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibmvnic_adapter {TYPE_2__* rx_pool; TYPE_1__* login_rsp_buf; int replenish_task_cycles; } ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {int num_rxadd_subcrqs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;

 VAR_0->replenish_task_cycles++;
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->login_rsp_buf->num_rxadd_subcrqs);
      VAR_1++) {
  if (VAR_0->rx_pool[VAR_1].active)
   FUNC_1(VAR_0, &VAR_0->rx_pool[VAR_1]);
 }
}
