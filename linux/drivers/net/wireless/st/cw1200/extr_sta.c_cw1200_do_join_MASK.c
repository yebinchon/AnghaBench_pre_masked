
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wsm_protected_mgmt_policy {int unprotectedMgmtFramesAllowed; int encryptionForAuthFrame; scalar_t__ protectedMgmtEnable; } ;
struct wsm_join {int probe_for_join; int basic_rate_set; int beacon_interval; int ssid_len; int flags; int ssid; scalar_t__ dtim_period; int bssid; int band; int channel_number; int atim_window; int preamble_type; int mode; } ;
struct ieee80211_bss_conf {int basic_rates; int* bssid; scalar_t__ ibss_joined; } ;
struct TYPE_6__ {int in_progress; } ;
struct cw1200_common {int join_pending; int beacon_int; int conf_listen_interval; int listen_interval; int listening; int disable_beacon_filter; TYPE_4__* hw; int conf_mutex; int unjoin_work; int workqueue; int join_timeout; scalar_t__ join_status; int ba_rx_tid_mask; int ba_tx_tid_mask; int pm_state; TYPE_3__* vif; TYPE_5__* channel; scalar_t__ join_dtim_period; scalar_t__ bt_present; TYPE_1__ scan; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_10__ {scalar_t__ band; int hw_value; } ;
struct TYPE_7__ {scalar_t__ ps_dtim_period; } ;
struct TYPE_9__ {int wiphy; TYPE_2__ conf; } ;
struct TYPE_8__ {scalar_t__ p2p; struct ieee80211_bss_conf bss_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cfg80211_bss* FUNC_2 (int ,TYPE_5__*,int const*,int *,int ,int ,int ) ;
 int FUNC_3 (int ,struct cfg80211_bss*) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct cw1200_common*,int) ;
 int FUNC_8 (struct cw1200_common*) ;
 int FUNC_9 (struct cw1200_common*,int) ;
 int FUNC_10 (struct cw1200_common*) ;
 scalar_t__ FUNC_11 (int *) ;
 int* FUNC_12 (struct cfg80211_bss*,int ) ;
 int FUNC_13 (int ,int const*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int ,scalar_t__,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct cw1200_common*) ;
 scalar_t__ FUNC_24 (struct cw1200_common*,struct wsm_join*) ;
 int FUNC_25 (struct cw1200_common*,int ,int ) ;
 int FUNC_26 (struct cw1200_common*,struct wsm_protected_mgmt_policy*) ;
 int FUNC_27 (struct cw1200_common*) ;

__attribute__((used)) static void FUNC_28(struct cw1200_common *VAR_15)
{
 const u8 *VAR_16;
 struct ieee80211_bss_conf *VAR_17 = &VAR_15->vif->bss_conf;
 struct cfg80211_bss *VAR_18 = ((void*)0);
 struct wsm_protected_mgmt_policy VAR_19;
 struct wsm_join VAR_20 = {
  .mode = VAR_17->ibss_joined ?
    VAR_11 : VAR_10,
  .preamble_type = VAR_12,
  .probe_for_join = 1,
  .atim_window = 0,
  .basic_rate_set = FUNC_7(VAR_15,
         VAR_17->basic_rates),
 };
 if (FUNC_11(&VAR_15->join_timeout)) {
  FUNC_18("[STA] - Join request already pending, skipping..\n");
  FUNC_27(VAR_15);
  return;
 }

 if (VAR_15->join_status)
  FUNC_4(VAR_15);

 VAR_16 = VAR_15->vif->bss_conf.bssid;

 VAR_18 = FUNC_2(VAR_15->hw->wiphy, VAR_15->channel, VAR_16, ((void*)0), 0,
          VAR_3, VAR_4);

 if (!VAR_18 && !VAR_17->ibss_joined) {
  FUNC_27(VAR_15);
  return;
 }

 FUNC_14(&VAR_15->conf_mutex);




 if (FUNC_0(&VAR_15->scan.in_progress)) {
  FUNC_27(VAR_15);
  goto done_put;
 }

 VAR_15->join_pending = 1;


 if (!VAR_20.basic_rate_set)
  VAR_20.basic_rate_set = 7;


 if (!VAR_15->beacon_int)
  VAR_15->beacon_int = 1;

 VAR_20.beacon_interval = VAR_15->beacon_int;


 if (VAR_15->bt_present) {
  if (((VAR_15->conf_listen_interval * 100) %
       VAR_15->beacon_int) == 0)
   VAR_15->listen_interval =
    ((VAR_15->conf_listen_interval * 100) /
     VAR_15->beacon_int);
  else
   VAR_15->listen_interval =
    ((VAR_15->conf_listen_interval * 100) /
     VAR_15->beacon_int + 1);
 }

 if (VAR_15->hw->conf.ps_dtim_period)
  VAR_15->join_dtim_period = VAR_15->hw->conf.ps_dtim_period;
 VAR_20.dtim_period = VAR_15->join_dtim_period;

 VAR_20.channel_number = VAR_15->channel->hw_value;
 VAR_20.band = (VAR_15->channel->band == VAR_5) ?
  VAR_14 : VAR_13;

 FUNC_13(VAR_20.bssid, VAR_16, sizeof(VAR_20.bssid));

 FUNC_16("[STA] Join BSSID: %pM DTIM: %d, interval: %d\n",
   VAR_20.bssid,
   VAR_20.dtim_period, VAR_15->beacon_int);

 if (!VAR_17->ibss_joined) {
  const u8 *VAR_21;
  FUNC_21();
  VAR_21 = FUNC_12(VAR_18, VAR_6);
  if (VAR_21) {
   VAR_20.ssid_len = VAR_21[1];
   FUNC_13(VAR_20.ssid, &VAR_21[2], VAR_20.ssid_len);
  }
  FUNC_22();
 }

 if (VAR_15->vif->p2p) {
  VAR_20.flags |= VAR_9;
  VAR_20.basic_rate_set =
   FUNC_7(VAR_15, 0xFF0);
 }


 if (!VAR_17->ibss_joined) {
  VAR_20.flags |= VAR_7;
  VAR_20.flags |= VAR_8;
 }

 FUNC_23(VAR_15);


 FUNC_6(&VAR_15->pm_state,
        VAR_2 + VAR_0);

 FUNC_9(VAR_15, 0);


 FUNC_25(VAR_15, VAR_15->ba_tx_tid_mask,
     VAR_15->ba_rx_tid_mask);


 if (VAR_20.flags & VAR_8) {
  VAR_15->join_status = VAR_1;
  FUNC_19(VAR_15->workqueue,
       &VAR_15->join_timeout,
       VAR_2);
 }


 VAR_19.protectedMgmtEnable = 0;
 VAR_19.unprotectedMgmtFramesAllowed = 1;
 VAR_19.encryptionForAuthFrame = 1;
 FUNC_26(VAR_15, &VAR_19);


 if (FUNC_24(VAR_15, &VAR_20)) {
  FUNC_17("[STA] cw1200_join_work: wsm_join failed!\n");
  FUNC_1(&VAR_15->join_timeout);
  FUNC_9(VAR_15, VAR_15->listening);

  if (FUNC_20(VAR_15->workqueue, &VAR_15->unjoin_work) <= 0)
   FUNC_27(VAR_15);
 } else {
  if (!(VAR_20.flags & VAR_8))
   FUNC_5(VAR_15);


  FUNC_10(VAR_15);






  VAR_15->disable_beacon_filter = 1;
 }
 FUNC_8(VAR_15);

done_put:
 FUNC_15(&VAR_15->conf_mutex);
 if (VAR_18)
  FUNC_3(VAR_15->hw->wiphy, VAR_18);
}
