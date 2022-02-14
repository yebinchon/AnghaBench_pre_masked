
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_tx_path_flush_cmd {int tid_mask; int sta_id; } ;
struct iwl_mvm {int dummy; } ;
typedef int flush_cmd ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_tx_path_flush_cmd*) ;

int FUNC_6(struct iwl_mvm *VAR_1, u32 VAR_2,
      u16 VAR_3, u32 VAR_4)
{
 int VAR_5;
 struct iwl_tx_path_flush_cmd VAR_6 = {
  .sta_id = FUNC_3(VAR_2),
  .tid_mask = FUNC_2(VAR_3),
 };

 FUNC_1(!FUNC_4(VAR_1));

 VAR_5 = FUNC_5(VAR_1, VAR_0, VAR_4,
       sizeof(VAR_6), &VAR_6);
 if (VAR_5)
  FUNC_0(VAR_1, "Failed to send flush command (%d)\n", VAR_5);
 return VAR_5;
}
