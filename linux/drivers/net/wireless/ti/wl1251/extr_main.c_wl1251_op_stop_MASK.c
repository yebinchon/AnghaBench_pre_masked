
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {scalar_t__ state; int scanning; int listen_int; int elp; int tx_queue_stopped; int monitor_present; int joined; int mutex; int channel; scalar_t__ rssi_thold; int power_level; scalar_t__ psm_entry_retry; int station_mode; scalar_t__ next_tx_complete; scalar_t__ rx_last_id; scalar_t__ rx_current_buffer; scalar_t__ rx_handled; scalar_t__ rx_counter; scalar_t__ data_in_count; int bss_type; int bssid; int elp_work; int tx_work; int irq_work; int hw; } ;
struct ieee80211_hw {struct wl1251* priv; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct cfg80211_scan_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wl1251*) ;
 int FUNC_9 (struct wl1251*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct wl1251*) ;
 int FUNC_12 (struct wl1251*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_7)
{
 struct wl1251 *VAR_8 = VAR_7->priv;

 FUNC_10("down");

 FUNC_7(VAR_0, "mac80211 stop");

 FUNC_5(&VAR_8->mutex);

 FUNC_0(VAR_8->state != VAR_6);

 if (VAR_8->scanning) {
  struct cfg80211_scan_info VAR_9 = {
   .aborted = 1,
  };

  FUNC_4(VAR_8->hw, &VAR_9);
  VAR_8->scanning = 0;
 }

 VAR_8->state = VAR_5;

 FUNC_9(VAR_8);

 FUNC_6(&VAR_8->mutex);

 FUNC_2(&VAR_8->irq_work);
 FUNC_2(&VAR_8->tx_work);
 FUNC_1(&VAR_8->elp_work);

 FUNC_5(&VAR_8->mutex);


 FUNC_12(VAR_8);
 FUNC_11(VAR_8);

 FUNC_3(VAR_8->bssid);
 VAR_8->listen_int = 1;
 VAR_8->bss_type = VAR_1;

 VAR_8->data_in_count = 0;
 VAR_8->rx_counter = 0;
 VAR_8->rx_handled = 0;
 VAR_8->rx_current_buffer = 0;
 VAR_8->rx_last_id = 0;
 VAR_8->next_tx_complete = 0;
 VAR_8->elp = 0;
 VAR_8->station_mode = VAR_2;
 VAR_8->psm_entry_retry = 0;
 VAR_8->tx_queue_stopped = 0;
 VAR_8->power_level = VAR_4;
 VAR_8->rssi_thold = 0;
 VAR_8->channel = VAR_3;
 VAR_8->monitor_present = 0;
 VAR_8->joined = 0;

 FUNC_8(VAR_8);

 FUNC_6(&VAR_8->mutex);
}
