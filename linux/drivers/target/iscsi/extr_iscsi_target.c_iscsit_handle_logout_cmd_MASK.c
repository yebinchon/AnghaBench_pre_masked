
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int lock; int abnormal_logouts; int normal_logouts; } ;
struct iscsi_tiqn {TYPE_1__ logout_stats; } ;
struct iscsi_logout {int flags; int opcode; int cmdsn; int exp_statsn; int cid; int itt; } ;
struct iscsi_conn {scalar_t__ conn_state; int cmd_lock; int conn_cmd_list; int cid; TYPE_2__* sess; } ;
struct iscsi_cmd {int immediate_cmd; int targ_xfer_tag; int logout_reason; int i_conn_node; int data_direction; int logout_cid; void* exp_stat_sn; void* cmd_sn; int init_task_tag; int i_state; int iscsi_opcode; } ;
struct TYPE_4__ {int init_task_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_conn*,void*) ;
 int FUNC_3 (struct iscsi_cmd*,int ) ;
 int FUNC_4 (struct iscsi_cmd*,int) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 struct iscsi_tiqn* FUNC_6 (struct iscsi_conn*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int ,int ,int ,int,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct iscsi_conn *VAR_10, struct iscsi_cmd *VAR_11,
   unsigned char *VAR_12)
{
 int VAR_13, VAR_14 = 0;
 u8 VAR_15 = 0;
 struct iscsi_logout *VAR_16;
 struct iscsi_tiqn *VAR_17 = FUNC_6(VAR_10);

 VAR_16 = (struct iscsi_logout *) VAR_12;
 VAR_15 = (VAR_16->flags & 0x7f);

 if (VAR_17) {
  FUNC_10(&VAR_17->logout_stats.lock);
  if (VAR_15 == VAR_4)
   VAR_17->logout_stats.normal_logouts++;
  else
   VAR_17->logout_stats.abnormal_logouts++;
  FUNC_12(&VAR_17->logout_stats.lock);
 }

 FUNC_8("Got Logout Request ITT: 0x%08x CmdSN: 0x%08x"
  " ExpStatSN: 0x%08x Reason: 0x%02x CID: %hu on CID: %hu\n",
  VAR_16->itt, VAR_16->cmdsn, VAR_16->exp_statsn, VAR_15,
  VAR_16->cid, VAR_10->cid);

 if (VAR_10->conn_state != VAR_9) {
  FUNC_9("Received logout request on connection that"
   " is not in logged in state, ignoring request.\n");
  FUNC_4(VAR_11, 0);
  return 0;
 }

 VAR_11->iscsi_opcode = VAR_7;
 VAR_11->i_state = VAR_8;
 VAR_11->immediate_cmd = ((VAR_16->opcode & VAR_6) ? 1 : 0);
 VAR_10->sess->init_task_tag = VAR_11->init_task_tag = VAR_16->itt;
 VAR_11->targ_xfer_tag = 0xFFFFFFFF;
 VAR_11->cmd_sn = FUNC_1(VAR_16->cmdsn);
 VAR_11->exp_stat_sn = FUNC_1(VAR_16->exp_statsn);
 VAR_11->logout_cid = FUNC_0(VAR_16->cid);
 VAR_11->logout_reason = VAR_15;
 VAR_11->data_direction = VAR_2;





 if ((VAR_15 == VAR_4) ||
    ((VAR_15 == VAR_3) &&
     FUNC_0(VAR_16->cid) == VAR_10->cid))
  VAR_14 = 1;

 FUNC_11(&VAR_10->cmd_lock);
 FUNC_7(&VAR_11->i_conn_node, &VAR_10->conn_cmd_list);
 FUNC_13(&VAR_10->cmd_lock);

 if (VAR_15 != VAR_5)
  FUNC_2(VAR_10, FUNC_1(VAR_16->exp_statsn));





 if (VAR_11->immediate_cmd) {
  int VAR_18 = FUNC_3(VAR_11, 0);

  if (VAR_18 < 0)
   return VAR_18;
 } else {
  VAR_13 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_16->cmdsn);
  if (VAR_13 == VAR_1)
   VAR_14 = 0;
  else if (VAR_13 == VAR_0)
   return -1;
 }

 return VAR_14;
}
