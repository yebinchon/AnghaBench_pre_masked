
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*) ;

int FUNC_6(struct iwl_mvm *VAR_4,
     struct ieee80211_vif *VAR_5,
     struct sk_buff *VAR_6)
{
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 if (VAR_1)
  return 0;

 if (!FUNC_2(&VAR_4->fw->ucode_capa,
    VAR_3))
  return FUNC_3(VAR_4, VAR_5, VAR_6);

 if (FUNC_1(&VAR_4->fw->ucode_capa,
         VAR_2))
  return FUNC_5(VAR_4, VAR_5, VAR_6);

 return FUNC_4(VAR_4, VAR_5, VAR_6);
}
