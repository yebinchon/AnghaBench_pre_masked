
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct se_tmr_req {scalar_t__ response; int call_transport; } ;
struct iscsi_tmr_req {struct se_tmr_req* se_tmr_req; } ;
struct iscsi_tm {scalar_t__ flags; scalar_t__ rtt; int opcode; int exp_statsn; int cmdsn; int lun; int itt; int refcmdsn; } ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; TYPE_1__* sess; int cid; } ;
struct TYPE_9__ {struct se_tmr_req* se_tmr_req; } ;
struct iscsi_cmd {int immediate_cmd; int targ_xfer_tag; TYPE_2__ se_cmd; int i_state; int i_conn_node; struct iscsi_tmr_req* tmr_req; scalar_t__ exp_stat_sn; scalar_t__ cmd_sn; int init_task_tag; int iscsi_opcode; scalar_t__ sense_buffer; int data_direction; } ;
struct TYPE_8__ {int se_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct iscsi_tmr_req*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_20 ;
 int FUNC_3 (struct iscsi_conn*,scalar_t__) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_5 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_6 (struct iscsi_tmr_req*,struct iscsi_conn*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 scalar_t__ FUNC_9 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_10 (struct iscsi_conn*,struct iscsi_tmr_req*,unsigned char*) ;
 scalar_t__ FUNC_11 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_12 (struct iscsi_conn*,struct iscsi_tmr_req*,unsigned char*) ;
 struct iscsi_tmr_req* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (char*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_2__*,int) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*,int *,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_24 (TYPE_2__*,int ) ;

int
FUNC_25(struct iscsi_conn *VAR_21, struct iscsi_cmd *VAR_22,
      unsigned char *VAR_23)
{
 struct se_tmr_req *VAR_24;
 struct iscsi_tmr_req *VAR_25;
 struct iscsi_tm *VAR_26;
 int VAR_27 = 0, VAR_28;
 u8 VAR_29, VAR_30 = VAR_19;

 VAR_26 = (struct iscsi_tm *) VAR_23;
 VAR_26->flags &= ~VAR_5;
 VAR_29 = VAR_26->flags;

 FUNC_15("Got Task Management Request ITT: 0x%08x, CmdSN:"
  " 0x%08x, Function: 0x%02x, RefTaskTag: 0x%08x, RefCmdSN:"
  " 0x%08x, CID: %hu\n", VAR_26->itt, VAR_26->cmdsn, VAR_29,
  VAR_26->rtt, VAR_26->refcmdsn, VAR_21->cid);

 if ((VAR_29 != 135) &&
     ((VAR_29 != 128) &&
      VAR_26->rtt != VAR_17)) {
  FUNC_16("RefTaskTag should be set to 0xFFFFFFFF.\n");
  VAR_26->rtt = VAR_17;
 }

 if ((VAR_29 == 128) &&
   !(VAR_26->opcode & VAR_6)) {
  FUNC_16("Task Management Request TASK_REASSIGN not"
   " issued as immediate command, bad iSCSI Initiator"
    "implementation\n");
  return FUNC_5(VAR_22,
          VAR_10, VAR_23);
 }
 if ((VAR_29 != 135) &&
     FUNC_0(VAR_26->refcmdsn) != VAR_11)
  VAR_26->refcmdsn = FUNC_2(VAR_11);

 VAR_22->data_direction = VAR_3;
 VAR_22->tmr_req = FUNC_13(sizeof(*VAR_22->tmr_req), VAR_4);
 if (!VAR_22->tmr_req) {
  return FUNC_5(VAR_22,
          VAR_9,
          VAR_23);
 }

 FUNC_23(&VAR_22->se_cmd, &VAR_20,
         VAR_21->sess->se_sess, 0, VAR_3,
         VAR_18, VAR_22->sense_buffer + 2);

 FUNC_20(&VAR_22->se_cmd, 1);





 if (VAR_29 != 128) {
  VAR_30 = FUNC_7(VAR_29);
  if (VAR_30 == VAR_19) {
   FUNC_16("Unknown iSCSI TMR Function:"
          " 0x%02x\n", VAR_29);
   return FUNC_5(VAR_22,
    VAR_9, VAR_23);
  }
 }
 VAR_28 = FUNC_1(&VAR_22->se_cmd, VAR_22->tmr_req, VAR_30,
     VAR_4);
 if (VAR_28 < 0)
  return FUNC_5(VAR_22,
    VAR_9, VAR_23);

 VAR_22->tmr_req->se_tmr_req = VAR_22->se_cmd.se_tmr_req;

 VAR_22->iscsi_opcode = VAR_7;
 VAR_22->i_state = VAR_16;
 VAR_22->immediate_cmd = ((VAR_26->opcode & VAR_6) ? 1 : 0);
 VAR_22->init_task_tag = VAR_26->itt;
 VAR_22->targ_xfer_tag = 0xFFFFFFFF;
 VAR_22->cmd_sn = FUNC_0(VAR_26->cmdsn);
 VAR_22->exp_stat_sn = FUNC_0(VAR_26->exp_statsn);
 VAR_24 = VAR_22->se_cmd.se_tmr_req;
 VAR_25 = VAR_22->tmr_req;



 if (VAR_29 != 128) {
  VAR_28 = FUNC_24(&VAR_22->se_cmd,
            FUNC_17(&VAR_26->lun));
  if (VAR_28 < 0) {
   VAR_24->response = VAR_15;
   goto attach;
  }
 }

 switch (VAR_29) {
 case 135:
  VAR_24->response = FUNC_9(VAR_22, VAR_23);
  if (VAR_24->response)
   goto attach;
  break;
 case 134:
 case 133:
 case 132:
 case 131:
  break;
 case 129:
  if (FUNC_12(VAR_21, VAR_25, VAR_23) < 0) {
   VAR_24->response = VAR_12;
   goto attach;
  }
  break;
 case 130:
  if (FUNC_10(VAR_21, VAR_25, VAR_23) < 0) {
   VAR_24->response = VAR_12;
   goto attach;
  }
  break;
 case 128:
  VAR_24->response = FUNC_11(VAR_22, VAR_23);




  if (VAR_24->response)
   break;

  if (FUNC_6(VAR_25, VAR_21) < 0)
   return FUNC_5(VAR_22,
     VAR_8, VAR_23);
  break;
 default:
  FUNC_16("Unknown TMR function: 0x%02x, protocol"
   " error.\n", VAR_29);
  VAR_24->response = VAR_14;
  goto attach;
 }

 if ((VAR_29 != 128) &&
     (VAR_24->response == VAR_13))
  VAR_24->call_transport = 1;
attach:
 FUNC_18(&VAR_21->cmd_lock);
 FUNC_14(&VAR_22->i_conn_node, &VAR_21->conn_cmd_list);
 FUNC_19(&VAR_21->cmd_lock);

 if (!(VAR_26->opcode & VAR_6)) {
  int VAR_31 = FUNC_8(VAR_21, VAR_22, VAR_23, VAR_26->cmdsn);
  if (VAR_31 == VAR_1) {
   VAR_27 = 1;
  } else if (VAR_31 == VAR_2) {
   FUNC_21(&VAR_22->se_cmd);
   return 0;
  } else if (VAR_31 == VAR_0) {
   return -1;
  }
 }
 FUNC_3(VAR_21, FUNC_0(VAR_26->exp_statsn));

 if (VAR_27 || !(VAR_26->opcode & VAR_6))
  return 0;



 if (VAR_24->call_transport)
  return FUNC_22(&VAR_22->se_cmd);
 FUNC_4(VAR_22, VAR_21, VAR_22->i_state);
 FUNC_21(&VAR_22->se_cmd);
 return 0;
}
