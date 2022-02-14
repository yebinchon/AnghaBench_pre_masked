
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qedf_rport {int free_sqes; int flags; } ;
struct qedf_ioreq {int cmd_type; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; TYPE_1__* cmd_mgr; } ;
struct fcoe_cqe {int cqe_data; } ;
struct TYPE_2__ {struct qedf_ioreq* cmds; } ;



 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (int *) ;
 int FUNC_3 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_4 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_5 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_6 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_7 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_8 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_9 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_10 (struct qedf_ctx*,struct fcoe_cqe*,struct qedf_ioreq*) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct qedf_ctx *VAR_5, struct fcoe_cqe *VAR_6)
{
 u16 VAR_7;
 struct qedf_ioreq *VAR_8;
 struct qedf_rport *VAR_9;
 u32 VAR_10;

 VAR_10 = (VAR_6->cqe_data >> VAR_1) &
     VAR_0;

 VAR_7 = VAR_6->cqe_data & VAR_2;
 VAR_8 = &VAR_5->cmd_mgr->cmds[VAR_7];


 if (!VAR_8) {
  FUNC_0(&VAR_5->dbg_ctx,
    "io_req is NULL for xid=0x%x.\n", VAR_7);
  return;
 }

 VAR_9 = VAR_8->fcport;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_5->dbg_ctx,
    "fcport is NULL for xid=0x%x io_req=%p.\n",
    VAR_7, VAR_8);
  return;
 }





 if (!FUNC_11(VAR_4, &VAR_9->flags)) {
  FUNC_0(&VAR_5->dbg_ctx,
    "Session not offloaded yet, fcport = %p.\n", VAR_9);
  return;
 }


 switch (VAR_10) {
 case 135:
  FUNC_2(&VAR_9->free_sqes);
  switch (VAR_8->cmd_type) {
  case 130:
   FUNC_10(VAR_5, VAR_6, VAR_8);
   break;
  case 131:
   FUNC_5(VAR_5, VAR_6, VAR_8);
   break;
  case 128:
   FUNC_8(VAR_5, VAR_6, VAR_8);
   break;
  case 129:
   FUNC_7(VAR_5, VAR_6, VAR_8);
   break;
  }
  break;
 case 137:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Error detect CQE.\n");
  FUNC_6(VAR_5, VAR_6, VAR_8);
  break;
 case 136:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Cleanup CQE.\n");
  FUNC_4(VAR_5, VAR_6, VAR_8);
  break;
 case 139:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Abort CQE.\n");
  FUNC_3(VAR_5, VAR_6, VAR_8);
  break;
 case 138:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Dummy CQE.\n");
  break;
 case 134:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Local completion CQE.\n");
  break;
 case 133:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Warning CQE.\n");
  FUNC_9(VAR_5, VAR_6, VAR_8);
  break;
 case 132:
  FUNC_2(&VAR_9->free_sqes);
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Max FCoE CQE.\n");
  break;
 default:
  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Default CQE.\n");
  break;
 }
}
