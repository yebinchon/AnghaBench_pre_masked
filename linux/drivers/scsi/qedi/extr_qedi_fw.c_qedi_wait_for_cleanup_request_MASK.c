
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_work_map {int dummy; } ;
struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {int iscsi_conn_id; int wait_queue; } ;
struct qedi_cmd {scalar_t__ state; scalar_t__ type; int task_id; } ;
struct iscsi_task {scalar_t__ dd_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct qedi_ctx *VAR_6,
      struct qedi_conn *VAR_7,
      struct iscsi_task *VAR_8,
      struct qedi_cmd *VAR_9,
      struct qedi_work_map *VAR_10)
{
 struct qedi_cmd *VAR_11 = (struct qedi_cmd *)VAR_8->dd_data;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7->wait_queue,
       ((VAR_9->state ==
         VAR_0) ||
       ((VAR_9->type == VAR_5) &&
        (VAR_11->state ==
         VAR_4))),
       5 * VAR_2);
 if (!VAR_12) {
  VAR_9->state = VAR_1;

  FUNC_0(&VAR_6->dbg_ctx, VAR_3,
     "Cleanup timedout tid=0x%x, issue connection recovery, cid=0x%x\n",
     VAR_11->task_id, VAR_7->iscsi_conn_id);

  return -1;
 }
 return 0;
}
