
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {scalar_t__ acked_data_sn; int init_task_tag; int cmd_flags; } ;


 int VAR_0 ;
 struct iscsi_cmd* FUNC_0 (struct iscsi_conn*,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,...) ;

int FUNC_3(
 struct iscsi_conn *VAR_1,
 u32 VAR_2,
 u32 VAR_3,
 u32 VAR_4)
{
 struct iscsi_cmd *VAR_5 = ((void*)0);

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5) {
  FUNC_2("Data ACK SNACK for TTT: 0x%08x is"
   " invalid.\n", VAR_2);
  return -1;
 }

 if (VAR_3 <= VAR_5->acked_data_sn) {
  FUNC_2("ITT: 0x%08x Data ACK SNACK BegRUN: 0x%08x is"
   " less than the already acked DataSN: 0x%08x.\n",
   VAR_5->init_task_tag, VAR_3, VAR_5->acked_data_sn);
  return -1;
 }





 VAR_5->cmd_flags |= VAR_0;
 VAR_5->acked_data_sn = (VAR_3 - 1);

 FUNC_1("Received Data ACK SNACK for ITT: 0x%08x,"
  " updated acked DataSN to 0x%08x.\n",
   VAR_5->init_task_tag, VAR_5->acked_data_sn);

 return 0;
}
