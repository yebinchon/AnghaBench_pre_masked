
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_cmd {int transport_state; TYPE_2__* se_tmr_req; } ;
struct iscsi_conn {TYPE_1__* conn_transport; } ;
struct iscsi_cmd {int cmd_flags; int iscsi_opcode; int logout_reason; int istate_lock; struct iscsi_conn* conn; struct se_cmd se_cmd; int i_state; int data_direction; int immediate_data; int sense_reason; } ;
struct TYPE_4__ {int response; } ;
struct TYPE_3__ {int (* iscsit_get_dataout ) (struct iscsi_conn*,struct iscsi_cmd*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (struct iscsi_cmd*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct iscsi_conn*,struct iscsi_cmd*,int) ;
 int FUNC_10 (struct se_cmd*) ;
 int FUNC_11 (struct se_cmd*) ;
 int FUNC_12 (struct se_cmd*) ;
 int FUNC_13 (struct se_cmd*,int ,int ) ;

int FUNC_14(struct iscsi_cmd *VAR_7, int VAR_8)
{
 struct se_cmd *VAR_9 = &VAR_7->se_cmd;
 struct iscsi_conn *VAR_10 = VAR_7->conn;
 int VAR_11 = 0;

 FUNC_7(&VAR_7->istate_lock);
 if (VAR_8)
  VAR_7->cmd_flags &= ~VAR_4;

 switch (VAR_7->iscsi_opcode) {
 case 130:




  if (VAR_7->sense_reason) {
   if (VAR_7->sense_reason == VAR_6) {
    VAR_7->i_state = VAR_5;
    FUNC_8(&VAR_7->istate_lock);
    FUNC_0(VAR_7, VAR_7->conn,
      VAR_7->i_state);
    return 0;
   }
   FUNC_8(&VAR_7->istate_lock);
   if (VAR_7->se_cmd.transport_state & VAR_0)
    return 0;
   return FUNC_13(VAR_9,
     VAR_7->sense_reason, 0);
  }




  if (VAR_7->immediate_data) {
   if (VAR_7->cmd_flags & VAR_2) {
    FUNC_8(&VAR_7->istate_lock);
    FUNC_10(&VAR_7->se_cmd);
    return 0;
   }
   FUNC_8(&VAR_7->istate_lock);

   if (!(VAR_7->cmd_flags &
     VAR_3)) {
    if (VAR_7->se_cmd.transport_state & VAR_0)
     return 0;

    FUNC_4(VAR_7);
    VAR_10->conn_transport->iscsit_get_dataout(VAR_10, VAR_7, 0);
   }
   return 0;
  }



  FUNC_8(&VAR_7->istate_lock);

  if ((VAR_7->data_direction == VAR_1) &&
      !(VAR_7->cmd_flags & VAR_3)) {
   if (VAR_7->se_cmd.transport_state & VAR_0)
    return 0;

   FUNC_5(VAR_7);
  }
  return FUNC_12(&VAR_7->se_cmd);

 case 131:
 case 128:
  FUNC_8(&VAR_7->istate_lock);
  FUNC_0(VAR_7, VAR_7->conn, VAR_7->i_state);
  break;
 case 129:
  if (VAR_7->se_cmd.se_tmr_req->response) {
   FUNC_8(&VAR_7->istate_lock);
   FUNC_0(VAR_7, VAR_7->conn,
     VAR_7->i_state);
   return 0;
  }
  FUNC_8(&VAR_7->istate_lock);

  return FUNC_11(&VAR_7->se_cmd);
 case 132:
  FUNC_8(&VAR_7->istate_lock);
  switch (VAR_7->logout_reason) {
  case 134:
   VAR_11 = FUNC_2(VAR_7, VAR_7->conn);
   break;
  case 135:
   VAR_11 = FUNC_1(VAR_7, VAR_7->conn);
   break;
  case 133:
   VAR_11 = FUNC_3(VAR_7, VAR_7->conn);
   break;
  default:
   FUNC_6("Unknown iSCSI Logout Request Code:"
    " 0x%02x\n", VAR_7->logout_reason);
   return -1;
  }

  return VAR_11;
 default:
  FUNC_8(&VAR_7->istate_lock);
  FUNC_6("Cannot perform out of order execution for"
  " unknown iSCSI Opcode: 0x%02x\n", VAR_7->iscsi_opcode);
  return -1;
 }

 return 0;
}
