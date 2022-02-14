
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm_vif {int he_ru_2mhz_block; } ;
struct iwl_mvm_he_obss_narrow_bw_ru_data {int tolerated; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_5__ {TYPE_3__ chandef; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int ,struct iwl_mvm_he_obss_narrow_bw_ru_data*) ;
 int VAR_1 ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2,
            struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_1(VAR_3);
 struct iwl_mvm_he_obss_narrow_bw_ru_data VAR_5 = {
  .tolerated = 1,
 };

 if (!(VAR_3->bss_conf.chandef.chan->flags & VAR_0)) {
  VAR_4->he_ru_2mhz_block = 0;
  return;
 }

 FUNC_0(VAR_2->wiphy, &VAR_3->bss_conf.chandef,
     VAR_1,
     &VAR_5);





 VAR_4->he_ru_2mhz_block = !VAR_5.tolerated;
}
