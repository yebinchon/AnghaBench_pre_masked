
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sis_sync_cmd_params {int* mailbox; } ;
struct pqi_ctrl_info {int pqi_reset_quiesce_supported; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sis_sync_cmd_params*,int ,int) ;
 int FUNC_1 (struct pqi_ctrl_info*,int ,struct sis_sync_cmd_params*) ;

int FUNC_2(struct pqi_ctrl_info *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 struct sis_sync_cmd_params VAR_9;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));

 VAR_6 = FUNC_1(VAR_5, VAR_1,
  &VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_7 = VAR_9.mailbox[1];

 if (!(VAR_7 & VAR_2))
  return -VAR_0;

 VAR_8 = VAR_9.mailbox[4];

 if ((VAR_8 & VAR_4) !=
  VAR_4)
  return -VAR_0;

 if (VAR_8 & VAR_3)
  VAR_5->pqi_reset_quiesce_supported = 1;

 return 0;
}
