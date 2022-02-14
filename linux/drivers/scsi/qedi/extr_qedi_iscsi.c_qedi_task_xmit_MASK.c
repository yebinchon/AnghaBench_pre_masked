
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct qedi_conn {int dummy; } ;
struct qedi_cmd {int use_slowpath; int io_cmd_in_list; struct scsi_cmnd* scsi_cmd; int io_cmd; struct iscsi_task* task; struct qedi_conn* conn; scalar_t__ state; } ;
struct iscsi_task {struct scsi_cmnd* sc; struct qedi_cmd* dd_data; struct iscsi_conn* conn; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_task*) ;

__attribute__((used)) static int FUNC_3(struct iscsi_task *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->conn;
 struct qedi_conn *VAR_2 = VAR_1->dd_data;
 struct qedi_cmd *VAR_3 = VAR_0->dd_data;
 struct scsi_cmnd *VAR_4 = VAR_0->sc;

 VAR_3->state = 0;
 VAR_3->task = ((void*)0);
 VAR_3->use_slowpath = 0;
 VAR_3->conn = VAR_2;
 VAR_3->task = VAR_0;
 VAR_3->io_cmd_in_list = 0;
 FUNC_0(&VAR_3->io_cmd);

 if (!VAR_4)
  return FUNC_2(VAR_1, VAR_0);

 VAR_3->scsi_cmd = VAR_4;
 return FUNC_1(VAR_0);
}
