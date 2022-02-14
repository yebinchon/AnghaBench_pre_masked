
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_rx_pkt_stat {int decrypted; int drv_info_sz; int shift; int phy_status; scalar_t__ is_c2h; int tsf_low; int ppdu_cnt; int cam_id; int rate; int pkt_len; int crc_err; int icv_err; } ;
struct rtw_dev {TYPE_1__* chip; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_2__ {int rx_pkt_desc_sz; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rtw_rx_pkt_stat*,int ,int) ;
 int FUNC_13 (struct rtw_dev*,int *,struct rtw_rx_pkt_stat*) ;
 int FUNC_14 (struct rtw_dev*,struct rtw_rx_pkt_stat*,struct ieee80211_hdr*,struct ieee80211_rx_status*,int *) ;

__attribute__((used)) static void FUNC_15(struct rtw_dev *VAR_0, u8 *VAR_1,
       struct rtw_rx_pkt_stat *VAR_2,
       struct ieee80211_rx_status *VAR_3)
{
 struct ieee80211_hdr *VAR_4;
 u32 VAR_5 = VAR_0->chip->rx_pkt_desc_sz;
 u8 *VAR_6 = ((void*)0);

 FUNC_12(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->phy_status = FUNC_5(VAR_1);
 VAR_2->icv_err = FUNC_3(VAR_1);
 VAR_2->crc_err = FUNC_1(VAR_1);
 VAR_2->decrypted = !FUNC_10(VAR_1);
 VAR_2->is_c2h = FUNC_0(VAR_1);
 VAR_2->pkt_len = FUNC_6(VAR_1);
 VAR_2->drv_info_sz = FUNC_2(VAR_1);
 VAR_2->shift = FUNC_9(VAR_1);
 VAR_2->rate = FUNC_8(VAR_1);
 VAR_2->cam_id = FUNC_4(VAR_1);
 VAR_2->ppdu_cnt = FUNC_7(VAR_1);
 VAR_2->tsf_low = FUNC_11(VAR_1);


 VAR_2->drv_info_sz *= 8;


 if (VAR_2->is_c2h)
  return;

 VAR_4 = (struct ieee80211_hdr *)(VAR_1 + VAR_5 + VAR_2->shift +
           VAR_2->drv_info_sz);
 if (VAR_2->phy_status) {
  VAR_6 = VAR_1 + VAR_5 + VAR_2->shift;
  FUNC_13(VAR_0, VAR_6, VAR_2);
 }

 FUNC_14(VAR_0, VAR_2, VAR_4, VAR_3, VAR_6);
}
