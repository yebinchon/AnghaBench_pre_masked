
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct se_cmd {int transport_state; } ;
struct iscsi_datain_req {int generate_recovery_values; int recovery; scalar_t__ runlength; scalar_t__ begrun; scalar_t__ data_sn; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int cmd_flags; scalar_t__ acked_data_sn; int data_sn; int i_state; int init_task_tag; struct se_cmd se_cmd; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 struct iscsi_datain_req* FUNC_1 () ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_datain_req*) ;
 int FUNC_3 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_4 (char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_7,
 unsigned char *VAR_8,
 u32 VAR_9,
 u32 VAR_10)
{
 struct iscsi_conn *VAR_11 = VAR_7->conn;
 struct iscsi_datain_req *VAR_12;
 struct se_cmd *VAR_13 = &VAR_7->se_cmd;

 if (!(VAR_13->transport_state & VAR_0)) {
  FUNC_4("Ignoring ITT: 0x%08x Data SNACK\n",
    VAR_7->init_task_tag);
  return 0;
 }





 if ((VAR_7->cmd_flags & VAR_2) &&
     (VAR_9 <= VAR_7->acked_data_sn)) {
  FUNC_4("ITT: 0x%08x, Data SNACK requesting"
   " retransmission of DataSN: 0x%08x to 0x%08x but"
   " already acked to DataSN: 0x%08x by Data ACK SNACK,"
   " protocol error.\n", VAR_7->init_task_tag, VAR_9,
   (VAR_9 + VAR_10), VAR_7->acked_data_sn);

  return FUNC_3(VAR_7, VAR_5, VAR_8);
 }





 if ((VAR_9 + VAR_10) > (VAR_7->data_sn - 1)) {
  FUNC_4("Initiator requesting BegRun: 0x%08x, RunLength"
   ": 0x%08x greater than maximum DataSN: 0x%08x.\n",
    VAR_9, VAR_10, (VAR_7->data_sn - 1));
  return FUNC_3(VAR_7, VAR_3,
      VAR_8);
 }

 VAR_12 = FUNC_1();
 if (!VAR_12)
  return FUNC_3(VAR_7, VAR_4,
      VAR_8);

 VAR_12->data_sn = VAR_12->begrun = VAR_9;
 VAR_12->runlength = VAR_10;
 VAR_12->generate_recovery_values = 1;
 VAR_12->recovery = VAR_1;

 FUNC_2(VAR_7, VAR_12);

 VAR_7->i_state = VAR_6;
 FUNC_0(VAR_7, VAR_11, VAR_7->i_state);

 return 0;
}
