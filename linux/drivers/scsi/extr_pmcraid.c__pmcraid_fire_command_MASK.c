
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcraid_instance {int ioarrin; int outstanding_cmds; int pending_pool_lock; int pending_cmd_pool; } ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; int free_list; struct pmcraid_instance* drv_inst; } ;
struct TYPE_3__ {int ioarcb_bus_addr; } ;
struct TYPE_4__ {TYPE_1__ ioarcb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct pmcraid_cmd *VAR_0)
{
 struct pmcraid_instance *VAR_1 = VAR_0->drv_inst;
 unsigned long VAR_2;






 FUNC_5(&VAR_1->pending_pool_lock, VAR_2);
 FUNC_3(&VAR_0->free_list, &VAR_1->pending_cmd_pool);
 FUNC_6(&VAR_1->pending_pool_lock, VAR_2);
 FUNC_0(&VAR_1->outstanding_cmds);


 FUNC_4();
 FUNC_1(FUNC_2(VAR_0->ioa_cb->ioarcb.ioarcb_bus_addr), VAR_1->ioarrin);
}
