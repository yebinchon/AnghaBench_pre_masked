
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_rx_pkt_stat {int phy_status; scalar_t__ icv_err; scalar_t__ crc_err; } ;
struct rtw_rx_addr_match_data {int bssid; struct rtw_rx_pkt_stat* pkt_stat; struct ieee80211_hdr* hdr; struct rtw_dev* rtwdev; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rtw_dev*,int ,struct rtw_rx_addr_match_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_1,
         struct rtw_rx_pkt_stat *VAR_2,
         struct ieee80211_hdr *VAR_3)
{
 struct rtw_rx_addr_match_data VAR_4 = {};

 if (VAR_2->crc_err || VAR_2->icv_err || !VAR_2->phy_status ||
     FUNC_1(VAR_3->frame_control))
  return;

 VAR_4.rtwdev = VAR_1;
 VAR_4.hdr = VAR_3;
 VAR_4.pkt_stat = VAR_2;
 VAR_4.bssid = FUNC_0(VAR_3);

 FUNC_2(VAR_1, VAR_0, &VAR_4);
}
