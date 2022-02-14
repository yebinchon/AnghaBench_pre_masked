
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ bf_enabled; } ;
struct iwl_mvm_vif {TYPE_1__ bf_data; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_4__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct ieee80211_channel_switch {int count; scalar_t__ block_tx; scalar_t__ device_timestamp; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int,scalar_t__) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_1,
           struct ieee80211_vif *VAR_2,
           struct ieee80211_channel_switch *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5;







 if (VAR_3->count <= 1)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->device_timestamp +
   ((VAR_2->bss_conf.beacon_int * (VAR_3->count - 1) -
     VAR_0) * 1024);

 if (VAR_3->block_tx)
  FUNC_0(VAR_1, VAR_2);

 if (VAR_4->bf_data.bf_enabled) {
  int VAR_6 = FUNC_1(VAR_1, VAR_2, 0);

  if (VAR_6)
   return VAR_6;
 }

 FUNC_2(VAR_1, VAR_2, VAR_2->bss_conf.beacon_int,
        VAR_5);

 return 0;
}
