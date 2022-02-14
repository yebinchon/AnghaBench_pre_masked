
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ioreq {int cleanup_done; int flags; int xid; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct fcoe_cqe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qedf_ctx *VAR_2, struct fcoe_cqe *VAR_3,
 struct qedf_ioreq *VAR_4)
{
 FUNC_0(&(VAR_2->dbg_ctx), VAR_1, "Entered xid = 0x%x\n",
     VAR_4->xid);

 FUNC_1(VAR_0, &VAR_4->flags);


 FUNC_2(&VAR_4->cleanup_done);
}
