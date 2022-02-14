
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; } ;
struct TYPE_2__ {int * se_tfo; } ;
struct iscsi_cmd {TYPE_1__ se_cmd; int i_state; int i_conn_node; int buf_ptr; int reject_reason; int iscsi_opcode; struct iscsi_conn* conn; int init_task_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,int) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(
 struct iscsi_cmd *VAR_4,
 u8 VAR_5,
 bool VAR_6,
 unsigned char *VAR_7)
{
 struct iscsi_conn *VAR_8;
 const bool VAR_9 = VAR_4->se_cmd.se_tfo != ((void*)0);

 if (!VAR_4->conn) {
  FUNC_5("cmd->conn is NULL for ITT: 0x%08x\n",
    VAR_4->init_task_tag);
  return -1;
 }
 VAR_8 = VAR_4->conn;

 VAR_4->iscsi_opcode = VAR_2;
 VAR_4->reject_reason = VAR_5;

 VAR_4->buf_ptr = FUNC_2(VAR_7, VAR_1, VAR_0);
 if (!VAR_4->buf_ptr) {
  FUNC_5("Unable to allocate memory for cmd->buf_ptr\n");
  FUNC_1(VAR_4, 0);
  return -1;
 }

 if (VAR_6) {
  FUNC_6(&VAR_8->cmd_lock);
  FUNC_3(&VAR_4->i_conn_node, &VAR_8->conn_cmd_list);
  FUNC_7(&VAR_8->cmd_lock);
 }

 VAR_4->i_state = VAR_3;
 FUNC_0(VAR_4, VAR_8, VAR_4->i_state);




 if (VAR_9) {
  FUNC_4("iscsi reject: calling target_put_sess_cmd >>>>>>\n");
  FUNC_8(&VAR_4->se_cmd);
 }
 return -1;
}
