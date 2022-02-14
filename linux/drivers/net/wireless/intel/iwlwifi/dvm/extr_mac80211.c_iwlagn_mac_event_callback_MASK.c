
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_priv {int bt_enable_pspoll; int bt_runtime_config; int workqueue; TYPE_2__* lib; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__ rssi; } ;
struct ieee80211_event {scalar_t__ type; TYPE_4__ u; } ;
struct TYPE_6__ {TYPE_1__* bt_params; } ;
struct TYPE_5__ {scalar_t__ advanced_bt_coexist; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4,
          const struct ieee80211_event *VAR_5)
{
 struct iwl_priv *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->type != VAR_0)
  return;

 FUNC_0(VAR_6, "enter\n");

 if (VAR_6->lib->bt_params &&
     VAR_6->lib->bt_params->advanced_bt_coexist) {
  if (VAR_5->u.rssi.data == VAR_2)
   VAR_6->bt_enable_pspoll = 1;
  else if (VAR_5->u.rssi.data == VAR_1)
   VAR_6->bt_enable_pspoll = 0;

  FUNC_2(VAR_6->workqueue, &VAR_6->bt_runtime_config);
 } else {
  FUNC_0(VAR_6, "Advanced BT coex disabled,"
    "ignoring RSSI callback\n");
 }

 FUNC_0(VAR_6, "leave\n");
}
