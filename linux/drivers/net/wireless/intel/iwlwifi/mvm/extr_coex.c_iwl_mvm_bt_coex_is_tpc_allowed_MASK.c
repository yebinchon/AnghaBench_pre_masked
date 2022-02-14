
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int bt_activity_grading; } ;
struct iwl_mvm {TYPE_1__ last_bt_notif; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(struct iwl_mvm *VAR_2,
        enum nl80211_band VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->last_bt_notif.bt_activity_grading);

 if (VAR_3 != VAR_1)
  return 0;

 return VAR_4 >= VAR_0;
}
