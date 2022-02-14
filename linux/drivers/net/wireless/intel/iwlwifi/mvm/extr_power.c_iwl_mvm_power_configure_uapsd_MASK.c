
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ use_ps_poll; } ;
struct iwl_mvm_vif {TYPE_2__* queue_params; TYPE_1__ dbgfs_pm; } ;
struct TYPE_8__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {TYPE_4__ fwrt; TYPE_3__* hw; } ;
struct iwl_mac_power_cmd {int flags; int uapsd_ac_flags; int qndp_tid; int snooze_interval; int snooze_window; int heavy_rx_thld_percentage; int heavy_tx_thld_percentage; int heavy_rx_thld_packets; int heavy_tx_thld_packets; void* tx_data_timeout_uapsd; void* rx_data_timeout_uapsd; int uapsd_max_sp; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum ieee80211_ac_numbers { ____Placeholder_ieee80211_ac_numbers } ieee80211_ac_numbers ;
struct TYPE_7__ {int uapsd_max_sp_len; } ;
struct TYPE_6__ {int acm; int uapsd; } ;


 int FUNC_0 (int const) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_17,
       struct ieee80211_vif *VAR_18,
       struct iwl_mac_power_cmd *VAR_19)
{
 struct iwl_mvm_vif *VAR_20 = FUNC_3(VAR_18);
 enum ieee80211_ac_numbers VAR_21;
 bool VAR_22 = 0;
 for (VAR_21 = 128; VAR_21 <= 130; VAR_21++) {
  if (!VAR_20->queue_params[VAR_21].uapsd)
   continue;

  if (VAR_17->fwrt.cur_fw_img != VAR_13)
   VAR_19->flags |=
    FUNC_1(VAR_14);

  VAR_19->uapsd_ac_flags |= FUNC_0(VAR_21);


  if (!VAR_22 && !VAR_20->queue_params[VAR_21].acm) {
   VAR_22 = 1;
   switch (VAR_21) {
   case 128:
    VAR_19->qndp_tid = 6;
    break;
   case 129:
    VAR_19->qndp_tid = 5;
    break;
   case 131:
    VAR_19->qndp_tid = 0;
    break;
   case 130:
    VAR_19->qndp_tid = 1;
    break;
   }
  }
 }

 VAR_19->flags |= FUNC_1(VAR_16);

 if (VAR_19->uapsd_ac_flags == (FUNC_0(128) |
        FUNC_0(129) |
        FUNC_0(131) |
        FUNC_0(130))) {
  VAR_19->flags |= FUNC_1(VAR_15);
  VAR_19->snooze_interval = FUNC_1(VAR_6);
  VAR_19->snooze_window =
   (VAR_17->fwrt.cur_fw_img == VAR_13) ?
    FUNC_1(VAR_11) :
    FUNC_1(VAR_7);
 }

 VAR_19->uapsd_max_sp = VAR_17->hw->uapsd_max_sp_len;

 if (VAR_17->fwrt.cur_fw_img == VAR_13 || VAR_19->flags &
     FUNC_1(VAR_15)) {
  VAR_19->rx_data_timeout_uapsd =
   FUNC_2(VAR_10);
  VAR_19->tx_data_timeout_uapsd =
   FUNC_2(VAR_12);
 } else {
  VAR_19->rx_data_timeout_uapsd =
   FUNC_2(VAR_8);
  VAR_19->tx_data_timeout_uapsd =
   FUNC_2(VAR_9);
 }

 if (VAR_19->flags & FUNC_1(VAR_15)) {
  VAR_19->heavy_tx_thld_packets =
   VAR_5;
  VAR_19->heavy_rx_thld_packets =
   VAR_4;
 } else {
  VAR_19->heavy_tx_thld_packets =
   VAR_2;
  VAR_19->heavy_rx_thld_packets =
   VAR_0;
 }
 VAR_19->heavy_tx_thld_percentage =
  VAR_3;
 VAR_19->heavy_rx_thld_percentage =
  VAR_1;
}
