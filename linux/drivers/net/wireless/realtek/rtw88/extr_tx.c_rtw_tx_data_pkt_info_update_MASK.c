
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rtw_tx_pkt_info {int seq; int ampdu_en; int stbc; int ldpc; void* bw; void* rate_id; void* rate; void* ampdu_density; void* ampdu_factor; } ;
struct rtw_sta_info {int stbc_en; int ldpc_en; void* rate_id; void* bw_mode; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_control {struct ieee80211_sta* sta; } ;
struct TYPE_4__ {scalar_t__ ht_supported; } ;
struct TYPE_3__ {scalar_t__ vht_supported; } ;
struct ieee80211_sta {int* supp_rates; scalar_t__ drv_priv; TYPE_2__ ht_cap; TYPE_1__ vht_cap; } ;
struct ieee80211_hdr {int seq_ctrl; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* FUNC_1 (struct rtw_dev*,struct ieee80211_sta*) ;
 void* FUNC_2 (struct rtw_dev*,struct ieee80211_sta*) ;
 void* FUNC_3 (struct ieee80211_sta*) ;
 void* FUNC_4 (struct ieee80211_sta*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_6,
     struct rtw_tx_pkt_info *VAR_7,
     struct ieee80211_tx_control *VAR_8,
     struct sk_buff *VAR_9)
{
 struct ieee80211_sta *VAR_10 = VAR_8->sta;
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->data;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 struct rtw_sta_info *VAR_13;
 u16 VAR_14;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0;
 bool VAR_17 = 0;
 u8 VAR_18 = VAR_2;
 u8 VAR_19 = 6;
 u8 VAR_20 = VAR_5;
 bool VAR_21 = 0;
 bool VAR_22 = 0;

 VAR_14 = (FUNC_5(VAR_11->seq_ctrl) & VAR_3) >> 4;


 if (!VAR_10)
  goto out;

 if (VAR_12->flags & VAR_4) {
  VAR_17 = 1;
  VAR_15 = FUNC_4(VAR_10);
  VAR_16 = FUNC_3(VAR_10);
 }

 if (VAR_10->vht_cap.vht_supported)
  VAR_18 = FUNC_2(VAR_6, VAR_10);
 else if (VAR_10->ht_cap.ht_supported)
  VAR_18 = FUNC_1(VAR_6, VAR_10);
 else if (VAR_10->supp_rates[0] <= 0xf)
  VAR_18 = VAR_0;
 else
  VAR_18 = VAR_1;

 VAR_13 = (struct rtw_sta_info *)VAR_10->drv_priv;

 VAR_20 = VAR_13->bw_mode;
 VAR_19 = VAR_13->rate_id;
 VAR_21 = VAR_13->stbc_en;
 VAR_22 = VAR_13->ldpc_en;

out:
 VAR_7->seq = VAR_14;
 VAR_7->ampdu_factor = VAR_15;
 VAR_7->ampdu_density = VAR_16;
 VAR_7->ampdu_en = VAR_17;
 VAR_7->rate = VAR_18;
 VAR_7->rate_id = VAR_19;
 VAR_7->bw = VAR_20;
 VAR_7->stbc = VAR_21;
 VAR_7->ldpc = VAR_22;
}
