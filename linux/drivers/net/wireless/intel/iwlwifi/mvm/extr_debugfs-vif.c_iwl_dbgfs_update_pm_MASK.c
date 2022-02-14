
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_dbgfs_pm {int mask; int keep_alive_seconds; int skip_over_dtim; int skip_dtim_periods; int rx_data_timeout; int tx_data_timeout; int lprx_ena; int lprx_rssi_threshold; int snooze_ena; int uapsd_misbehaving; int use_ps_poll; } ;
struct iwl_mvm_vif {struct iwl_dbgfs_pm dbgfs_pm; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int beacon_int; int dtim_period; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
typedef enum iwl_dbgfs_pm_mask { ____Placeholder_iwl_dbgfs_pm_mask } iwl_dbgfs_pm_mask ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,int,int) ;
 int VAR_0 ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1,
     struct ieee80211_vif *VAR_2,
     enum iwl_dbgfs_pm_mask VAR_3, int VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_2);
 struct iwl_dbgfs_pm *VAR_6 = &VAR_5->dbgfs_pm;

 VAR_6->mask |= VAR_3;

 switch (VAR_3) {
 case 137: {
  int VAR_7 = VAR_2->bss_conf.dtim_period ?: 1;
  int VAR_8 = VAR_7 * VAR_2->bss_conf.beacon_int;

  FUNC_0(VAR_1, "debugfs: set keep_alive= %d sec\n", VAR_4);
  if (VAR_4 * VAR_0 < 3 * VAR_8)
   FUNC_1(VAR_1,
     "debugfs: keep alive period (%ld msec) is less than minimum required (%d msec)\n",
     VAR_4 * VAR_0, 3 * VAR_8);
  VAR_6->keep_alive_seconds = VAR_4;
  break;
 }
 case 132:
  FUNC_0(VAR_1, "skip_over_dtim %s\n",
    VAR_4 ? "enabled" : "disabled");
  VAR_6->skip_over_dtim = VAR_4;
  break;
 case 133:
  FUNC_0(VAR_1, "skip_dtim_periods=%d\n", VAR_4);
  VAR_6->skip_dtim_periods = VAR_4;
  break;
 case 134:
  FUNC_0(VAR_1, "rx_data_timeout=%d\n", VAR_4);
  VAR_6->rx_data_timeout = VAR_4;
  break;
 case 130:
  FUNC_0(VAR_1, "tx_data_timeout=%d\n", VAR_4);
  VAR_6->tx_data_timeout = VAR_4;
  break;
 case 136:
  FUNC_0(VAR_1, "lprx %s\n", VAR_4 ? "enabled" : "disabled");
  VAR_6->lprx_ena = VAR_4;
  break;
 case 135:
  FUNC_0(VAR_1, "lprx_rssi_threshold=%d\n", VAR_4);
  VAR_6->lprx_rssi_threshold = VAR_4;
  break;
 case 131:
  FUNC_0(VAR_1, "snooze_enable=%d\n", VAR_4);
  VAR_6->snooze_ena = VAR_4;
  break;
 case 129:
  FUNC_0(VAR_1, "uapsd_misbehaving_enable=%d\n", VAR_4);
  VAR_6->uapsd_misbehaving = VAR_4;
  break;
 case 128:
  FUNC_0(VAR_1, "use_ps_poll=%d\n", VAR_4);
  VAR_6->use_ps_poll = VAR_4;
  break;
 }
}
