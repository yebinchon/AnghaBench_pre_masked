
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dbg_ctx; int tmf_thread; } ;
struct qedi_conn {int iscsi_conn_id; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; struct iscsi_task* task; int tmf_work; int state; } ;
struct iscsi_tm {int flags; } ;
struct iscsi_task {scalar_t__ hdr; scalar_t__ dd_data; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct qedi_ctx*) ;
 int FUNC_3 (struct qedi_conn*,struct iscsi_task*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qedi_conn *VAR_7,
     struct iscsi_task *VAR_8)
{
 struct qedi_ctx *VAR_9 = VAR_7->qedi;
 struct iscsi_tm *VAR_10;
 struct qedi_cmd *VAR_11 = (struct qedi_cmd *)VAR_8->dd_data;
 s16 VAR_12 = 0;

 VAR_10 = (struct iscsi_tm *)VAR_8->hdr;
 VAR_11->task = VAR_8;


 if ((VAR_10->flags & VAR_1) ==
     VAR_2) {
  VAR_11->state = VAR_0;
  FUNC_0(&VAR_11->tmf_work, VAR_6);
  FUNC_4(VAR_9->tmf_thread, &VAR_11->tmf_work);

 } else if (((VAR_10->flags & VAR_1) ==
      VAR_3) ||
     ((VAR_10->flags & VAR_1) ==
      VAR_5) ||
     ((VAR_10->flags & VAR_1) ==
      VAR_4)) {
  VAR_12 = FUNC_2(VAR_9);
  if (VAR_12 == -1) {
   FUNC_1(&VAR_9->dbg_ctx, "Invalid tid, cid=0x%x\n",
     VAR_7->iscsi_conn_id);
   return -1;
  }
  VAR_11->task_id = VAR_12;

  FUNC_3(VAR_7, VAR_11->task);

 } else {
  FUNC_1(&VAR_9->dbg_ctx, "Invalid tmf, cid=0x%x\n",
    VAR_7->iscsi_conn_id);
  return -1;
 }

 return 0;
}
