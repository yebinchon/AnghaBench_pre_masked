
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_int_sta {int sta_id; } ;
struct iwl_mvm_add_sta_cmd {int mac_id_n_color; int station_flags_msk; int station_flags; int sta_id; int add_modify; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int ,struct iwl_mvm_add_sta_cmd*) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3,
           struct iwl_mvm_vif *VAR_4,
           struct iwl_mvm_int_sta *VAR_5,
           bool VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_4->id, VAR_4->color);
 struct iwl_mvm_add_sta_cmd VAR_8 = {
  .add_modify = VAR_2,
  .sta_id = VAR_5->sta_id,
  .station_flags = VAR_6 ? FUNC_2(VAR_1) : 0,
  .station_flags_msk = FUNC_2(VAR_1),
  .mac_id_n_color = FUNC_2(VAR_7),
 };
 int VAR_9;

 VAR_9 = FUNC_4(VAR_3, VAR_0, 0,
       FUNC_3(VAR_3), &VAR_8);
 if (VAR_9)
  FUNC_1(VAR_3, "Failed to send ADD_STA command (%d)\n", VAR_9);
}
