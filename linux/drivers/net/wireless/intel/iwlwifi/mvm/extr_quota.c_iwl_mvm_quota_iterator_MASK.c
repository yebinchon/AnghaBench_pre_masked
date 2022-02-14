
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct iwl_mvm_vif {scalar_t__ dbgfs_quota_min; TYPE_2__* phy_ctxt; int monitor_active; int ap_ibss_active; } ;
struct iwl_mvm_quota_iterator_data {scalar_t__* colors; int* low_latency; int n_low_latency_bindings; int * dbgfs_min; int * n_interfaces; struct ieee80211_vif* disabled_vif; } ;
struct TYPE_3__ {int assoc; } ;
struct ieee80211_vif {int type; TYPE_1__ bss_conf; } ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ color; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm_vif*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_quota_iterator_data *VAR_5 = VAR_2;
 struct iwl_mvm_vif *VAR_6 = FUNC_2(VAR_4);
 u16 VAR_7;


 if (VAR_4 == VAR_5->disabled_vif)
  return;

 if (!VAR_6->phy_ctxt)
  return;


 VAR_7 = VAR_6->phy_ctxt->id;


 FUNC_0(VAR_1 > VAR_0);

 if (FUNC_1(VAR_7 >= VAR_0))
  return;

 switch (VAR_4->type) {
 case 128:
  if (VAR_4->bss_conf.assoc)
   break;
  return;
 case 131:
 case 132:
  if (VAR_6->ap_ibss_active)
   break;
  return;
 case 130:
  if (VAR_6->monitor_active)
   break;
  return;
 case 129:
  return;
 default:
  FUNC_1(1);
  return;
 }

 if (VAR_5->colors[VAR_7] < 0)
  VAR_5->colors[VAR_7] = VAR_6->phy_ctxt->color;
 else
  FUNC_1(VAR_5->colors[VAR_7] != VAR_6->phy_ctxt->color);

 VAR_5->n_interfaces[VAR_7]++;







 if (FUNC_3(VAR_6) && !VAR_5->low_latency[VAR_7]) {
  VAR_5->n_low_latency_bindings++;
  VAR_5->low_latency[VAR_7] = 1;
 }
}
