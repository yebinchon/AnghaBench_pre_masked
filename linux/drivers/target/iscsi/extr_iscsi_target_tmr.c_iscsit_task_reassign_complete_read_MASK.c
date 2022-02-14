
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state; } ;
struct iscsi_tmr_req {scalar_t__ exp_data_sn; } ;
struct iscsi_datain_req {int generate_recovery_values; int recovery; scalar_t__ runlength; scalar_t__ begrun; scalar_t__ data_sn; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int i_state; struct se_cmd se_cmd; int init_task_tag; scalar_t__ acked_data_sn; int cmd_flags; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 struct iscsi_datain_req* FUNC_1 () ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_datain_req*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct se_cmd*) ;

__attribute__((used)) static int FUNC_6(
 struct iscsi_cmd *VAR_5,
 struct iscsi_tmr_req *VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_5->conn;
 struct iscsi_datain_req *VAR_8;
 struct se_cmd *VAR_9 = &VAR_5->se_cmd;




 if (!VAR_6->exp_data_sn) {
  VAR_5->cmd_flags &= ~VAR_3;
  VAR_5->acked_data_sn = 0;
 } else {
  VAR_5->cmd_flags |= VAR_3;
  VAR_5->acked_data_sn = (VAR_6->exp_data_sn - 1);
 }

 if (!(VAR_5->se_cmd.transport_state & VAR_1)) {
  FUNC_3("READ ITT: 0x%08x: t_state: %d never sent to"
   " transport\n", VAR_5->init_task_tag,
   VAR_5->se_cmd.t_state);
  FUNC_5(VAR_9);
  return 0;
 }

 if (!(VAR_9->transport_state & VAR_0)) {
  FUNC_4("READ ITT: 0x%08x: t_state: %d, never returned"
   " from transport\n", VAR_5->init_task_tag,
   VAR_5->se_cmd.t_state);
  return -1;
 }

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -1;




 VAR_8->data_sn = VAR_8->begrun = VAR_6->exp_data_sn;
 VAR_8->runlength = 0;
 VAR_8->generate_recovery_values = 1;
 VAR_8->recovery = VAR_2;

 FUNC_2(VAR_5, VAR_8);

 VAR_5->i_state = VAR_4;
 FUNC_0(VAR_5, VAR_7, VAR_5->i_state);
 return 0;
}
