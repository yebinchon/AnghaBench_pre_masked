
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rtl_stats {int signalstrength; int* rx_mimo_signalstrength; int * cfo_tail; int * cfo_short; int * rx_mimo_evm_dbm; int * rx_snr; scalar_t__ is_cck; int rssi; scalar_t__ rx_pwdb_all; int packet_beacon; int packet_toself; } ;
struct TYPE_3__ {size_t total_num; int* elements; size_t index; int total_val; } ;
struct TYPE_4__ {int* rx_rssi_percentage; int * rx_cfo_tail; int * rx_cfo_short; int * rx_evm_dbm; int * rx_snr_db; int signal_strength; TYPE_1__ ui_rssi; int rssi_calculate_cnt; int pwdb_all_cnt; } ;
struct rtl_phy {size_t num_total_rfpath; } ;
struct rtl_priv {TYPE_2__ stats; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,size_t) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
    struct rtl_stats *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_0(VAR_3);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 u8 VAR_7;
 u32 VAR_8, VAR_9;

 if (!VAR_4->packet_toself && !VAR_4->packet_beacon)
  return;

 VAR_5->stats.pwdb_all_cnt += VAR_4->rx_pwdb_all;
 VAR_5->stats.rssi_calculate_cnt++;

 if (VAR_5->stats.ui_rssi.total_num++ >= VAR_0) {
  VAR_5->stats.ui_rssi.total_num = VAR_0;
  VAR_8 = VAR_5->stats.ui_rssi.elements[
   VAR_5->stats.ui_rssi.index];
  VAR_5->stats.ui_rssi.total_val -= VAR_8;
 }
 VAR_5->stats.ui_rssi.total_val += VAR_4->signalstrength;
 VAR_5->stats.ui_rssi.elements[VAR_5->stats.ui_rssi.index++] =
     VAR_4->signalstrength;
 if (VAR_5->stats.ui_rssi.index >= VAR_0)
  VAR_5->stats.ui_rssi.index = 0;
 VAR_9 = VAR_5->stats.ui_rssi.total_val /
  VAR_5->stats.ui_rssi.total_num;
 VAR_5->stats.signal_strength = FUNC_1(VAR_3,
  (u8) VAR_9);
 VAR_4->rssi = VAR_5->stats.signal_strength;

 if (VAR_4->is_cck)
  return;

 for (VAR_7 = VAR_1; VAR_7 < VAR_6->num_total_rfpath;
      VAR_7++) {
  if (VAR_5->stats.rx_rssi_percentage[VAR_7] == 0) {
   VAR_5->stats.rx_rssi_percentage[VAR_7] =
       VAR_4->rx_mimo_signalstrength[VAR_7];

  }
  if (VAR_4->rx_mimo_signalstrength[VAR_7] >
      VAR_5->stats.rx_rssi_percentage[VAR_7]) {
   VAR_5->stats.rx_rssi_percentage[VAR_7] =
       ((VAR_5->stats.rx_rssi_percentage[VAR_7] *
         (VAR_2 - 1)) +
        (VAR_4->rx_mimo_signalstrength[VAR_7])) /
       (VAR_2);
   VAR_5->stats.rx_rssi_percentage[VAR_7] =
       VAR_5->stats.rx_rssi_percentage[VAR_7] + 1;
  } else {
   VAR_5->stats.rx_rssi_percentage[VAR_7] =
       ((VAR_5->stats.rx_rssi_percentage[VAR_7] *
         (VAR_2 - 1)) +
        (VAR_4->rx_mimo_signalstrength[VAR_7])) /
       (VAR_2);
  }
  VAR_5->stats.rx_snr_db[VAR_7] = VAR_4->rx_snr[VAR_7];
  VAR_5->stats.rx_evm_dbm[VAR_7] =
     VAR_4->rx_mimo_evm_dbm[VAR_7];
  VAR_5->stats.rx_cfo_short[VAR_7] =
     VAR_4->cfo_short[VAR_7];
  VAR_5->stats.rx_cfo_tail[VAR_7] = VAR_4->cfo_tail[VAR_7];
 }
}
