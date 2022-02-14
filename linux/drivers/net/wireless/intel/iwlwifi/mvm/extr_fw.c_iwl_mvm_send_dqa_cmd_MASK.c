
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_dqa_enable_cmd {int cmd_queue; } ;
typedef int dqa_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_dqa_enable_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_3)
{
 struct iwl_dqa_enable_cmd VAR_4 = {
  .cmd_queue = FUNC_2(VAR_2),
 };
 u32 VAR_5 = FUNC_3(VAR_1, VAR_0, 0);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_5, 0, sizeof(VAR_4), &VAR_4);
 if (VAR_6)
  FUNC_1(VAR_3, "Failed to send DQA enabling command: %d\n", VAR_6);
 else
  FUNC_0(VAR_3, "Working in DQA mode\n");

 return VAR_6;
}
