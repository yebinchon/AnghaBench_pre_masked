
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ dynamic_smps; } ;
struct iwl_mvm {TYPE_1__ thermal_throttle; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_4, u8 *VAR_5,
         struct ieee80211_vif *VAR_6)
{
 struct iwl_mvm *VAR_7 = VAR_4;
 enum ieee80211_smps_mode VAR_8;

 FUNC_1(&VAR_7->mutex);

 if (VAR_7->thermal_throttle.dynamic_smps)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;

 if (VAR_6->type != VAR_3)
  return;

 FUNC_0(VAR_7, VAR_6, VAR_2, VAR_8);
}
