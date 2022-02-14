
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_mvm_vif {size_t id; int uapsd_nonagg_detected_wk; TYPE_2__* queue_params; } ;
struct TYPE_10__ {TYPE_4__* data; } ;
struct iwl_mvm {TYPE_5__ tcm; } ;
struct TYPE_6__ {int assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
struct TYPE_8__ {int detected; } ;
struct TYPE_9__ {TYPE_3__ uapsd_nonagg_detect; } ;
struct TYPE_7__ {int uapsd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_5 ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_6,
      struct ieee80211_vif *VAR_7)
{
 struct iwl_mvm_vif *VAR_8 = FUNC_1(VAR_7);

 if (VAR_7->type != VAR_5)
  return;

 if (!VAR_7->bss_conf.assoc)
  return;

 if (!VAR_8->queue_params[VAR_4].uapsd &&
     !VAR_8->queue_params[VAR_3].uapsd &&
     !VAR_8->queue_params[VAR_1].uapsd &&
     !VAR_8->queue_params[VAR_2].uapsd)
  return;

 if (VAR_6->tcm.data[VAR_8->id].uapsd_nonagg_detect.detected)
  return;

 VAR_6->tcm.data[VAR_8->id].uapsd_nonagg_detect.detected = 1;
 FUNC_0(VAR_6,
   "detected AP should do aggregation but isn't, likely due to U-APSD\n");
 FUNC_2(&VAR_8->uapsd_nonagg_detected_wk, 15 * VAR_0);
}
