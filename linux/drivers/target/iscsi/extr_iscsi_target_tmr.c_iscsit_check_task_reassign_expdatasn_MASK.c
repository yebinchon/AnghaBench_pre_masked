
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tmr_req {scalar_t__ exp_data_sn; struct iscsi_cmd* ref_cmd; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_2__ {int se_cmd_flags; } ;
struct iscsi_cmd {scalar_t__ iscsi_opcode; scalar_t__ data_direction; scalar_t__ data_sn; int cmd_flags; scalar_t__ acked_data_sn; scalar_t__ r2t_sn; TYPE_1__ se_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_tmr_req*,struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_tmr_req*,struct iscsi_conn*) ;
 int FUNC_2 (char*,scalar_t__,...) ;

int FUNC_3(
 struct iscsi_tmr_req *VAR_6,
 struct iscsi_conn *VAR_7)
{
 struct iscsi_cmd *VAR_8 = VAR_6->ref_cmd;

 if (VAR_8->iscsi_opcode != VAR_4)
  return 0;

 if (VAR_8->se_cmd.se_cmd_flags & VAR_5)
  return 0;

 if (VAR_8->data_direction == VAR_1)
  return 0;
 if (VAR_8->data_direction == VAR_0) {
  if (VAR_6->exp_data_sn > VAR_8->data_sn) {
   FUNC_2("Received ExpDataSN: 0x%08x for READ"
    " in TMR TASK_REASSIGN greater than command's"
    " DataSN: 0x%08x.\n", VAR_6->exp_data_sn,
    VAR_8->data_sn);
   return -1;
  }
  if ((VAR_8->cmd_flags & VAR_3) &&
      (VAR_6->exp_data_sn <= VAR_8->acked_data_sn)) {
   FUNC_2("Received ExpDataSN: 0x%08x for READ"
    " in TMR TASK_REASSIGN for previously"
    " acknowledged DataIN: 0x%08x,"
    " protocol error\n", VAR_6->exp_data_sn,
    VAR_8->acked_data_sn);
   return -1;
  }
  return FUNC_0(VAR_6, VAR_7);
 }







 if (VAR_8->data_direction == VAR_2) {
  if (VAR_6->exp_data_sn > VAR_8->r2t_sn) {
   FUNC_2("Received ExpDataSN: 0x%08x for WRITE"
    " in TMR TASK_REASSIGN greater than command's"
    " R2TSN: 0x%08x.\n", VAR_6->exp_data_sn,
     VAR_8->r2t_sn);
   return -1;
  }
  return FUNC_1(VAR_6, VAR_7);
 }

 FUNC_2("Unknown iSCSI data_direction: 0x%02x\n",
   VAR_8->data_direction);

 return -1;
}
