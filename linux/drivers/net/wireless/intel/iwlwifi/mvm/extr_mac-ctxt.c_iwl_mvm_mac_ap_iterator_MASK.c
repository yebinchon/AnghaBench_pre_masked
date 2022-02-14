
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_mac_ap_iterator_data {int beacon_int; scalar_t__ beacon_device_ts; } ;
struct TYPE_2__ {int beacon_int; scalar_t__ sync_device_ts; int assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ p2p; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2,
        struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_mac_ap_iterator_data *VAR_4 = VAR_1;

 if (VAR_3->type != VAR_0 || !VAR_3->bss_conf.assoc)
  return;


 if (VAR_3->p2p && VAR_4->beacon_device_ts)
  return;

 VAR_4->beacon_device_ts = VAR_3->bss_conf.sync_device_ts;
 VAR_4->beacon_int = VAR_3->bss_conf.beacon_int;
}
