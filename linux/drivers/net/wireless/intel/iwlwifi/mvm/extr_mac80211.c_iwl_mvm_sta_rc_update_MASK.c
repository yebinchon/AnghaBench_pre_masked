
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_vif {TYPE_2__* phy_ctxt; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_sta*,int ,int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4,
      struct ieee80211_vif *VAR_5,
      struct ieee80211_sta *VAR_6, u32 VAR_7)
{
 struct iwl_mvm *VAR_8 = FUNC_0(VAR_4);
 struct iwl_mvm_vif *VAR_9 = FUNC_3(VAR_5);

 if (VAR_7 & (VAR_0 |
         VAR_2 |
         VAR_1))
  FUNC_1(VAR_8, VAR_6, VAR_9->phy_ctxt->channel->band,
         1);

 if (VAR_5->type == VAR_3 &&
     VAR_7 & VAR_1)
  FUNC_2(VAR_8, VAR_5, 0);
}
