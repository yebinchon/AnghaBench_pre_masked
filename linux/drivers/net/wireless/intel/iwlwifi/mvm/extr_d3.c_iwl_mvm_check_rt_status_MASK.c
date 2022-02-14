
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct error_table_start TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_mvm {TYPE_2__* trans; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_wowlan_wakeup {int rfkill_release; } ;
typedef int err_info ;
struct error_table_start {scalar_t__ valid; scalar_t__ error_id; } ;
struct TYPE_4__ {scalar_t__* lmac_error_event_table; } ;
struct TYPE_5__ {TYPE_1__ dbg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_vif*,struct cfg80211_wowlan_wakeup*,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 u32 VAR_4 = VAR_2->trans->dbg.lmac_error_event_table[0];
 struct error_table_start {

  u32 valid;
  u32 error_id;
 } VAR_5;

 FUNC_1(VAR_2->trans, VAR_4,
     &VAR_5, sizeof(VAR_5));

 if (VAR_5.valid &&
     VAR_5.error_id == VAR_1) {
  struct cfg80211_wowlan_wakeup VAR_6 = {
   .rfkill_release = 1,
  };
  FUNC_0(VAR_3, &VAR_6, VAR_0);
 }
 return VAR_5.valid;
}
