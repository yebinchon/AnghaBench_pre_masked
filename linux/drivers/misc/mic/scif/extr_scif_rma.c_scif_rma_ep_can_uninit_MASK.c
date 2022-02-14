
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rma_lock; int fence_refcount; int tcw_refcount; int tw_refcount; int mmn_list; int remote_reg_list; int reg_list; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct scif_endpt *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2(&VAR_0->rma_info.rma_lock);

 if (FUNC_1(&VAR_0->rma_info.reg_list) &&
     FUNC_1(&VAR_0->rma_info.remote_reg_list) &&
     FUNC_1(&VAR_0->rma_info.mmn_list) &&
     !FUNC_0(&VAR_0->rma_info.tw_refcount) &&
     !FUNC_0(&VAR_0->rma_info.tcw_refcount) &&
     !FUNC_0(&VAR_0->rma_info.fence_refcount))
  VAR_1 = 1;
 FUNC_3(&VAR_0->rma_info.rma_lock);
 return VAR_1;
}
