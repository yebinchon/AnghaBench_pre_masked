
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int uploaded; int color; int id; } ;
struct iwl_mvm {TYPE_1__* hw; } ;
struct iwl_mac_ctx_cmd {void* action; void* id_and_color; } ;
struct ieee80211_vif {scalar_t__ type; int addr; } ;
typedef int cmd ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int ,int,struct iwl_mac_ctx_cmd*) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mac_ctx_cmd*,int ,int) ;

int FUNC_10(struct iwl_mvm *VAR_5, struct ieee80211_vif *VAR_6)
{
 struct iwl_mvm_vif *VAR_7 = FUNC_8(VAR_6);
 struct iwl_mac_ctx_cmd VAR_8;
 int VAR_9;

 if (FUNC_2(!VAR_7->uploaded, "Removing inactive MAC %pM/%d\n",
        VAR_6->addr, FUNC_5(VAR_6)))
  return -VAR_0;

 FUNC_9(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.id_and_color = FUNC_4(FUNC_0(VAR_7->id,
          VAR_7->color));
 VAR_8.action = FUNC_4(VAR_1);

 VAR_9 = FUNC_7(VAR_5, VAR_3, 0,
       sizeof(VAR_8), &VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_5, "Failed to remove MAC context: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_7->uploaded = 0;

 if (VAR_6->type == VAR_4) {
  FUNC_3(VAR_2, VAR_5->hw->flags);
  FUNC_6(VAR_5);
 }

 return 0;
}
