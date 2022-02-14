
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct wl18xx_event_mailbox {int number_of_scan_results; int number_of_sched_scan_results; size_t rx_ba_link_id; size_t rx_ba_win_size; int sc_pwd; int sc_pwd_len; int sc_ssid; int sc_ssid_len; int sc_sync_band; int sc_sync_channel; int inactive_sta_bitmap; int tx_retry_exceeded_bitmap; int channel_switch_role_id_bitmap; int bss_loss_bitmap; int rx_ba_allowed_bitmap; int rx_ba_role_id_bitmap; int rssi_snr_trigger_metric; int radar_type; int radar_channel; int time_sync_tsf_low_lsb; int time_sync_tsf_low_msb; int time_sync_tsf_high_lsb; int time_sync_tsf_high_msb; int events_vector; } ;
struct wl12xx_vif {scalar_t__ bss_type; } ;
struct wl1271 {TYPE_2__* links; int hw; int radar_debug_mode; scalar_t__ scan_wlvif; struct wl18xx_event_mailbox* mbox; } ;
struct TYPE_3__ {size_t* bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_sta {size_t max_rx_aggregation_subframes; } ;
struct TYPE_4__ {size_t* addr; int ba_bitmap; struct wl12xx_vif* wlvif; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct ieee80211_sta* FUNC_0 (struct ieee80211_vif*,size_t const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_vif*,int ,size_t const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int ,int ) ;
 struct ieee80211_vif* FUNC_7 (struct wl12xx_vif*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct wl1271*,scalar_t__) ;
 int FUNC_10 (struct wl1271*,int ,int ) ;
 int FUNC_11 (struct wl1271*,int ) ;
 int FUNC_12 (struct wl1271*,int ,int) ;
 int FUNC_13 (struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 int FUNC_15 (struct wl1271*,int ) ;
 int FUNC_16 (struct wl1271*,int ) ;
 int FUNC_17 (struct wl1271*) ;
 int FUNC_18 (struct wl1271*,int ) ;
 int FUNC_19 (struct wl1271*,int) ;
 int FUNC_20 (struct wl1271*,int ,int ,int ,int ) ;
 int FUNC_21 (struct wl1271*) ;
 int FUNC_22 (struct wl1271*,int ,int ,int ,int ) ;
 int FUNC_23 (struct wl1271*,int ,int ) ;

int FUNC_24(struct wl1271 *VAR_19)
{
 struct wl18xx_event_mailbox *VAR_20 = VAR_19->mbox;
 u32 VAR_21;

 VAR_21 = FUNC_4(VAR_20->events_vector);
 FUNC_5(VAR_4, "MBOX vector: 0x%x", VAR_21);

 if (VAR_21 & VAR_15) {
  FUNC_5(VAR_4, "scan results: %d",
        VAR_20->number_of_scan_results);

  if (VAR_19->scan_wlvif)
   FUNC_9(VAR_19, VAR_19->scan_wlvif);
 }

 if (VAR_21 & VAR_18)
  FUNC_20(VAR_19,
   VAR_20->time_sync_tsf_high_msb,
   VAR_20->time_sync_tsf_high_lsb,
   VAR_20->time_sync_tsf_low_msb,
   VAR_20->time_sync_tsf_low_lsb);

 if (VAR_21 & VAR_11) {
  FUNC_6("radar event: channel %d type %s",
       VAR_20->radar_channel,
       FUNC_8(VAR_20->radar_type));

  if (!VAR_19->radar_debug_mode)
   FUNC_1(VAR_19->hw);
 }

 if (VAR_21 & VAR_10) {
  FUNC_5(VAR_4,
        "PERIODIC_SCAN_REPORT_EVENT (results %d)",
        VAR_20->number_of_sched_scan_results);

  FUNC_21(VAR_19);
 }

 if (VAR_21 & VAR_9)
  FUNC_19(VAR_19, 1);

 if (VAR_21 & VAR_13)
  FUNC_18(VAR_19, VAR_20->rssi_snr_trigger_metric);

 if (VAR_21 & VAR_0)
  FUNC_10(VAR_19,
    FUNC_3(VAR_20->rx_ba_role_id_bitmap),
    FUNC_3(VAR_20->rx_ba_allowed_bitmap));

 if (VAR_21 & VAR_1)
  FUNC_11(VAR_19,
      FUNC_3(VAR_20->bss_loss_bitmap));

 if (VAR_21 & VAR_3)
  FUNC_12(VAR_19,
   FUNC_3(VAR_20->channel_switch_role_id_bitmap),
   1);

 if (VAR_21 & VAR_5)
  FUNC_13(VAR_19);





 if (VAR_21 & VAR_8)
  FUNC_16(VAR_19,
    FUNC_3(VAR_20->tx_retry_exceeded_bitmap));

 if (VAR_21 & VAR_7)
  FUNC_15(VAR_19,
    FUNC_3(VAR_20->inactive_sta_bitmap));

 if (VAR_21 & VAR_12)
  FUNC_17(VAR_19);

 if (VAR_21 & VAR_17)
  FUNC_23(VAR_19, VAR_20->sc_sync_channel,
            VAR_20->sc_sync_band);

 if (VAR_21 & VAR_16)
  FUNC_22(VAR_19,
       VAR_20->sc_ssid_len,
       VAR_20->sc_ssid,
       VAR_20->sc_pwd_len,
       VAR_20->sc_pwd);
 if (VAR_21 & VAR_6)
  FUNC_14(VAR_19);

 if (VAR_21 & VAR_14) {
  struct wl12xx_vif *VAR_22;
  struct ieee80211_vif *VAR_23;
  struct ieee80211_sta *VAR_24;
  u8 VAR_25 = VAR_20->rx_ba_link_id;
  u8 VAR_26 = VAR_20->rx_ba_win_size;
  const u8 *VAR_27;

  VAR_22 = VAR_19->links[VAR_25].wlvif;
  VAR_23 = FUNC_7(VAR_22);




  if (VAR_22->bss_type != VAR_2)
   VAR_27 = VAR_23->bss_conf.bssid;
  else
   VAR_27 = VAR_19->links[VAR_25].addr;

  VAR_24 = FUNC_0(VAR_23, VAR_27);
  if (VAR_24) {
   VAR_24->max_rx_aggregation_subframes = VAR_26;
   FUNC_2(VAR_23,
      VAR_19->links[VAR_25].ba_bitmap,
      VAR_27);
  }
 }

 return 0;
}
