
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_rx_phy_info {int frame_time; } ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; TYPE_3__* queue_params; } ;
struct TYPE_8__ {int rate; int rx_bytes; scalar_t__ detected; } ;
struct TYPE_6__ {scalar_t__ last_ampdu_ref; int airtime; int * pkts; } ;
struct iwl_mvm_tcm_mac {TYPE_4__ uapsd_nonagg_detect; scalar_t__ opened_rx_ba_sessions; TYPE_2__ rx; } ;
struct iwl_mvm_sta {int mac_id_n_color; scalar_t__ sta_id; int vif; } ;
struct TYPE_5__ {struct iwl_mvm_tcm_mac* data; int work; scalar_t__ ts; } ;
struct iwl_mvm {scalar_t__ ampdu_ref; TYPE_1__ tcm; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_7__ {int uapsd; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 size_t FUNC_3 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_6 (int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int* VAR_17 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_18,
      struct ieee80211_sta *VAR_19,
      struct ieee80211_hdr *VAR_20, u32 VAR_21,
      struct iwl_rx_phy_info *VAR_22,
      u32 VAR_23)
{
 struct iwl_mvm_sta *VAR_24;
 struct iwl_mvm_tcm_mac *VAR_25;
 int VAR_26;
 int VAR_27 = VAR_1;
 struct iwl_mvm_vif *VAR_28;

 static const u8 VAR_29[] = {
  9, 18, 30, 42, 60, 78, 90, 96, 120, 135,
 };
 u16 VAR_30;

 if (FUNC_4(VAR_20->frame_control))
  VAR_27 = VAR_17[FUNC_3(VAR_20)];

 VAR_24 = FUNC_5(VAR_19);
 VAR_26 = VAR_24->mac_id_n_color & VAR_0;

 if (FUNC_9(VAR_16, VAR_18->tcm.ts + VAR_5))
  FUNC_8(&VAR_18->tcm.work, 0);
 VAR_25 = &VAR_18->tcm.data[VAR_26];
 VAR_25->rx.pkts[VAR_27]++;


 if (VAR_25->rx.last_ampdu_ref != VAR_18->ampdu_ref) {
  VAR_25->rx.last_ampdu_ref = VAR_18->ampdu_ref;
  VAR_25->rx.airtime += FUNC_7(VAR_22->frame_time);
 }

 if (!(VAR_23 & (VAR_11 | VAR_12)))
  return;

 VAR_28 = FUNC_6(VAR_24->vif);

 if (VAR_25->opened_rx_ba_sessions ||
     VAR_25->uapsd_nonagg_detect.detected ||
     (!VAR_28->queue_params[VAR_4].uapsd &&
      !VAR_28->queue_params[VAR_3].uapsd &&
      !VAR_28->queue_params[VAR_1].uapsd &&
      !VAR_28->queue_params[VAR_2].uapsd) ||
     VAR_24->sta_id != VAR_28->ap_sta_id)
  return;

 if (VAR_23 & VAR_11) {
  VAR_30 = VAR_29[VAR_23 & VAR_8];
  VAR_30 *= 1 + ((VAR_23 & VAR_6) >>
     VAR_7);
 } else {
  if (FUNC_1((VAR_23 & VAR_15) >=
    FUNC_0(VAR_29)))
   return;
  VAR_30 = VAR_29[VAR_23 & VAR_15];
  VAR_30 *= 1 + ((VAR_23 & VAR_13) >>
     VAR_14);
 }

 VAR_30 <<= ((VAR_23 & VAR_9) >>
    VAR_10);

 VAR_25->uapsd_nonagg_detect.rx_bytes += VAR_21;
 FUNC_2(&VAR_25->uapsd_nonagg_detect.rate, VAR_30);
}
