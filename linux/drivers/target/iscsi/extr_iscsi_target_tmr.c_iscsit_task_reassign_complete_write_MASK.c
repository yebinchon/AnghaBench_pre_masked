
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_cmd {int transport_state; scalar_t__ data_length; int t_state; } ;
struct iscsi_tmr_req {scalar_t__ exp_data_sn; } ;
struct iscsi_conn {TYPE_3__* conn_transport; TYPE_2__* sess; } ;
struct iscsi_cmd {int cmd_flags; scalar_t__ next_burst_len; scalar_t__ write_data_done; int r2t_lock; int outstanding_r2ts; struct se_cmd se_cmd; scalar_t__ unsolicited_data; int i_state; int init_task_tag; scalar_t__ acked_data_sn; struct iscsi_conn* conn; } ;
struct TYPE_6__ {int (* iscsit_get_dataout ) (struct iscsi_conn*,struct iscsi_cmd*,int) ;} ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ FirstBurstLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 scalar_t__ FUNC_1 (struct iscsi_cmd*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,int) ;
 int FUNC_6 (struct se_cmd*) ;

__attribute__((used)) static int FUNC_7(
 struct iscsi_cmd *VAR_4,
 struct iscsi_tmr_req *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = 0, VAR_8 = 0;
 struct iscsi_conn *VAR_9 = VAR_4->conn;
 struct se_cmd *VAR_10 = &VAR_4->se_cmd;




 if (!VAR_5->exp_data_sn) {
  VAR_4->cmd_flags &= ~VAR_1;
  VAR_4->acked_data_sn = 0;
 } else {
  VAR_4->cmd_flags |= VAR_1;
  VAR_4->acked_data_sn = (VAR_5->exp_data_sn - 1);
 }






 if (VAR_4->cmd_flags & VAR_2) {
  if (!(VAR_4->se_cmd.transport_state & VAR_0)) {
   FUNC_2("WRITE ITT: 0x%08x: t_state: %d"
    " never sent to transport\n",
    VAR_4->init_task_tag, VAR_4->se_cmd.t_state);
   FUNC_6(VAR_10);
   return 0;
  }

  VAR_4->i_state = VAR_3;
  FUNC_0(VAR_4, VAR_9, VAR_4->i_state);
  return 0;
 }





 if (VAR_4->unsolicited_data) {
  VAR_4->unsolicited_data = 0;

  VAR_8 = VAR_4->next_burst_len = VAR_4->write_data_done;

  if ((VAR_9->sess->sess_ops->FirstBurstLength - VAR_8) >=
       VAR_4->se_cmd.data_length) {
   VAR_6 = 1;
   VAR_7 = (VAR_4->se_cmd.data_length - VAR_8);
  } else
   VAR_7 = (VAR_9->sess->sess_ops->FirstBurstLength - VAR_8);

  FUNC_3(&VAR_4->r2t_lock);
  if (FUNC_1(VAR_4, VAR_8, VAR_7, 0, 0) < 0) {
   FUNC_4(&VAR_4->r2t_lock);
   return -1;
  }
  VAR_4->outstanding_r2ts++;
  FUNC_4(&VAR_4->r2t_lock);

  if (VAR_6)
   return 0;
 }



 return VAR_9->conn_transport->iscsit_get_dataout(VAR_9, VAR_4, 1);
}
