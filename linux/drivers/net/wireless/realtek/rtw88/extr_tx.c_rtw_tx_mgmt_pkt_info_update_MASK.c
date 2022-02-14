
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtw_tx_pkt_info {int use_rate; int rate_id; int dis_rate_fallback; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_0,
     struct rtw_tx_pkt_info *VAR_1,
     struct ieee80211_tx_control *VAR_2,
     struct sk_buff *VAR_3)
{
 VAR_1->use_rate = 1;
 VAR_1->rate_id = 6;
 VAR_1->dis_rate_fallback = 1;
}
