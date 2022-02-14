
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_sta_info {int avg_rssi; } ;
struct rtw_rx_pkt_stat {int rssi; } ;
struct rtw_rx_addr_match_data {int * bssid; struct rtw_rx_pkt_stat* pkt_stat; struct rtw_dev* rtwdev; struct ieee80211_hdr* hdr; } ;
struct rtw_dev {int hw; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {int addr; TYPE_1__ bss_conf; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int addr2; int frame_control; int * addr1; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 struct ieee80211_sta* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, u8 *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct rtw_rx_addr_match_data *VAR_3 = VAR_0;
 struct ieee80211_sta *VAR_4;
 struct ieee80211_hdr *VAR_5 = VAR_3->hdr;
 struct rtw_dev *VAR_6 = VAR_3->rtwdev;
 struct rtw_sta_info *VAR_7;
 struct rtw_rx_pkt_stat *VAR_8 = VAR_3->pkt_stat;
 u8 *VAR_9 = VAR_3->bssid;

 if (FUNC_0(VAR_2->bss_conf.bssid, VAR_9) &&
     (FUNC_0(VAR_2->addr, VAR_5->addr1) ||
      FUNC_3(VAR_5->frame_control)))
  VAR_4 = FUNC_2(VAR_6->hw, VAR_5->addr2,
         VAR_2->addr);
 else
  return;

 if (!VAR_4)
  return;

 VAR_7 = (struct rtw_sta_info *)VAR_4->drv_priv;
 FUNC_1(&VAR_7->avg_rssi, VAR_8->rssi);
}
