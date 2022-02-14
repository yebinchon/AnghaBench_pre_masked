
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_sync_cmd_params {int * mailbox; } ;
struct pqi_ctrl_info {int config_table_length; int config_table_offset; int max_outstanding_requests; int max_transfer_size; int max_sg_entries; } ;
typedef int params ;


 int VAR_0 ;
 int FUNC_0 (struct sis_sync_cmd_params*,int ,int) ;
 int FUNC_1 (struct pqi_ctrl_info*,int ,struct sis_sync_cmd_params*) ;

int FUNC_2(struct pqi_ctrl_info *VAR_1)
{
 int VAR_2;
 struct sis_sync_cmd_params VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_2 = FUNC_1(VAR_1, VAR_0,
  &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_1->max_sg_entries = VAR_3.mailbox[1];
 VAR_1->max_transfer_size = VAR_3.mailbox[2];
 VAR_1->max_outstanding_requests = VAR_3.mailbox[3];
 VAR_1->config_table_offset = VAR_3.mailbox[4];
 VAR_1->config_table_length = VAR_3.mailbox[5];

 return 0;
}
