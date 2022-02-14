
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ioreq {int tm_done; int * sc_cmd; int flags; } ;
struct qedf_ctx {int dummy; } ;
struct fcoe_cqe_rsp_info {int dummy; } ;
struct TYPE_2__ {struct fcoe_cqe_rsp_info rsp_info; } ;
struct fcoe_cqe {TYPE_1__ cqe_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qedf_ioreq*,struct fcoe_cqe_rsp_info*) ;

void FUNC_3(struct qedf_ctx *VAR_1, struct fcoe_cqe *VAR_2,
 struct qedf_ioreq *VAR_3)
{
 struct fcoe_cqe_rsp_info *VAR_4;

 FUNC_0(VAR_0, &VAR_3->flags);

 VAR_4 = &VAR_2->cqe_info.rsp_info;
 FUNC_2(VAR_3, VAR_4);

 VAR_3->sc_cmd = ((void*)0);
 FUNC_1(&VAR_3->tm_done);
}
