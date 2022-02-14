
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_stats {int* rx_mimo_signalstrength; } ;
struct TYPE_2__ {int* rx_rssi_percentage; } ;
struct rtl_phy {size_t num_total_rfpath; } ;
struct rtl_priv {TYPE_1__ stats; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2,
       struct rtl_stats *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_2);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);
 u8 VAR_6;

 for (VAR_6 = VAR_0; VAR_6 < VAR_5->num_total_rfpath;
      VAR_6++) {
  if (VAR_4->stats.rx_rssi_percentage[VAR_6] == 0) {
   VAR_4->stats.rx_rssi_percentage[VAR_6] =
       VAR_3->rx_mimo_signalstrength[VAR_6];

  }
  if (VAR_3->rx_mimo_signalstrength[VAR_6] >
      VAR_4->stats.rx_rssi_percentage[VAR_6]) {
   VAR_4->stats.rx_rssi_percentage[VAR_6] =
       ((VAR_4->stats.rx_rssi_percentage[VAR_6] *
         (VAR_1 - 1)) +
        (VAR_3->rx_mimo_signalstrength[VAR_6])) /
       (VAR_1);
   VAR_4->stats.rx_rssi_percentage[VAR_6] =
       VAR_4->stats.rx_rssi_percentage[VAR_6] + 1;
  } else {
   VAR_4->stats.rx_rssi_percentage[VAR_6] =
       ((VAR_4->stats.rx_rssi_percentage[VAR_6] *
         (VAR_1 - 1)) +
        (VAR_3->rx_mimo_signalstrength[VAR_6])) /
       (VAR_1);
  }
 }
}
