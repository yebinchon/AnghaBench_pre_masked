
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct iwl_priv {int dummy; } ;
struct iwl_bt_coex_prot_env_cmd {void* type; void* action; } ;
typedef int env_cmd ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int,struct iwl_bt_coex_prot_env_cmd*) ;

int FUNC_2(struct iwl_priv *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct iwl_bt_coex_prot_env_cmd VAR_4;
 int VAR_5;

 VAR_4.action = VAR_2;
 VAR_4.type = VAR_3;
 VAR_5 = FUNC_1(VAR_1,
          VAR_0, 0,
          sizeof(VAR_4), &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1, "failed to send BT env command\n");
 return VAR_5;
}
