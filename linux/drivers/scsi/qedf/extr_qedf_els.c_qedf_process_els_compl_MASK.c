
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int resp_len; } ;
struct qedf_ioreq {int refcount; int * cb_arg; int (* cb_func ) (int *) ;TYPE_2__ mp_req; int timeout_work; int flags; int cmd_type; int xid; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct fcoe_cqe_midpath_info {int data_placement_size; } ;
struct TYPE_3__ {struct fcoe_cqe_midpath_info midpath_info; } ;
struct fcoe_cqe {TYPE_1__ cqe_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct qedf_ctx *VAR_3, struct fcoe_cqe *VAR_4,
 struct qedf_ioreq *VAR_5)
{
 struct fcoe_cqe_midpath_info *VAR_6;

 FUNC_0(&(VAR_3->dbg_ctx), VAR_1, "Entered with xid = 0x%x"
     " cmd_type = %d.\n", VAR_5->xid, VAR_5->cmd_type);

 FUNC_2(VAR_0, &VAR_5->flags);


 FUNC_1(&VAR_5->timeout_work);


 VAR_6 = &VAR_4->cqe_info.midpath_info;
 VAR_5->mp_req.resp_len = VAR_6->data_placement_size;


 if ((VAR_5->cb_func) && (VAR_5->cb_arg)) {
  VAR_5->cb_func(VAR_5->cb_arg);
  VAR_5->cb_arg = ((void*)0);
 }

 FUNC_3(&VAR_5->refcount, VAR_2);
}
