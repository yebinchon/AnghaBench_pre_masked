
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_wowlan_config_cmd {int offloading_tid; } ;
struct iwl_mvm_vif {int dummy; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; int offload_tid; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct cfg80211_wowlan {int dummy; } ;
struct TYPE_4__ {int swcrypto; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_wowlan_config_cmd*) ;
 int FUNC_4 (struct iwl_mvm*,struct cfg80211_wowlan*) ;
 int FUNC_5 (struct iwl_mvm*,struct cfg80211_wowlan*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int,int,int ) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct iwl_mvm *VAR_5,
        struct cfg80211_wowlan *VAR_6,
        struct iwl_wowlan_config_cmd *VAR_7,
        struct ieee80211_vif *VAR_8, struct iwl_mvm_vif *VAR_9,
        struct ieee80211_sta *VAR_10)
{
 int VAR_11;
 bool VAR_12 = FUNC_1(&VAR_5->fw->ucode_capa,
      VAR_2);

 VAR_5->offload_tid = VAR_7->offloading_tid;

 if (!VAR_12) {
  VAR_11 = FUNC_7(VAR_5);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_2(VAR_5, VAR_8, VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 if (!VAR_4.swcrypto) {





  FUNC_10(&VAR_5->mutex);
  VAR_11 = FUNC_8(VAR_5, VAR_8, VAR_0);
  FUNC_9(&VAR_5->mutex);
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_5, VAR_3, 0,
       sizeof(*VAR_7),
       VAR_7);
 if (VAR_11)
  return VAR_11;

 if (FUNC_0(&VAR_5->fw->ucode_capa,
         VAR_1))
  VAR_11 = FUNC_4(VAR_5, VAR_6);
 else
  VAR_11 = FUNC_5(VAR_5, VAR_6);
 if (VAR_11)
  return VAR_11;

 return FUNC_6(VAR_5, VAR_8, 0, 1, 0);
}
