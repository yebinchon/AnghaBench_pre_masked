
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct rtw_tx_pkt_info {int use_rate; int rate_id; int dis_rate_fallback; int bmc; int ls; int qsel; int offset; int tx_pkt_size; } ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int tx_pkt_desc_sz; } ;
struct ieee80211_hdr {int addr1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct rtw_dev *VAR_1,
       struct rtw_tx_pkt_info *VAR_2,
       struct sk_buff *VAR_3)
{
 struct rtw_chip_info *VAR_4 = VAR_1->chip;
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_3->data;
 bool VAR_6;

 VAR_6 = FUNC_0(VAR_5->addr1) ||
       FUNC_1(VAR_5->addr1);
 VAR_2->use_rate = 1;
 VAR_2->rate_id = 6;
 VAR_2->dis_rate_fallback = 1;
 VAR_2->bmc = VAR_6;
 VAR_2->tx_pkt_size = VAR_3->len;
 VAR_2->offset = VAR_4->tx_pkt_desc_sz;
 VAR_2->qsel = VAR_0;
 VAR_2->ls = 1;
}
