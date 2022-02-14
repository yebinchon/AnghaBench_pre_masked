
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; int sess; } ;
struct iscsi_cmd {int targ_xfer_tag; int i_conn_node; int init_task_tag; int iscsi_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 struct iscsi_cmd* FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iscsi_conn *VAR_5, int VAR_6)
{
 u8 VAR_7;
 struct iscsi_cmd *VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_4);
 if (!VAR_8)
  return -1;

 VAR_8->iscsi_opcode = VAR_0;
 VAR_7 = (VAR_6) ? VAR_2 :
    VAR_1;
 VAR_8->init_task_tag = VAR_3;
 VAR_8->targ_xfer_tag = (VAR_6) ?
        FUNC_4(VAR_5->sess) : 0xFFFFFFFF;
 FUNC_5(&VAR_5->cmd_lock);
 FUNC_3(&VAR_8->i_conn_node, &VAR_5->conn_cmd_list);
 FUNC_6(&VAR_5->cmd_lock);

 if (VAR_6)
  FUNC_2(VAR_5);
 FUNC_0(VAR_8, VAR_5, VAR_7);

 return 0;
}
