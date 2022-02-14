
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int priority; int len; scalar_t__ data; } ;
struct rtw_tx_pkt_info {int bmc; int sec_type; int ls; int qsel; int offset; int tx_pkt_size; } ;
struct rtw_sta_info {struct ieee80211_vif* vif; } ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int tx_pkt_desc_sz; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_tx_control {TYPE_1__* sta; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int __le16 ;
struct TYPE_3__ {scalar_t__ drv_priv; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;




 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct ieee80211_tx_control*,struct sk_buff*) ;
 int FUNC_7 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct ieee80211_tx_control*,struct sk_buff*) ;
 int FUNC_8 (struct rtw_dev*,struct rtw_tx_pkt_info*) ;
 int FUNC_9 (struct rtw_dev*,struct ieee80211_vif*,struct sk_buff*) ;

void FUNC_10(struct rtw_dev *VAR_1,
       struct rtw_tx_pkt_info *VAR_2,
       struct ieee80211_tx_control *VAR_3,
       struct sk_buff *VAR_4)
{
 struct rtw_chip_info *VAR_5 = VAR_1->chip;
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_4);
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_4->data;
 struct rtw_sta_info *VAR_8;
 struct ieee80211_vif *VAR_9 = ((void*)0);
 __le16 VAR_10 = VAR_7->frame_control;
 u8 VAR_11 = 0;
 bool VAR_12;

 if (VAR_3->sta) {
  VAR_8 = (struct rtw_sta_info *)VAR_3->sta->drv_priv;
  VAR_9 = VAR_8->vif;
 }

 if (FUNC_2(VAR_10) || FUNC_3(VAR_10))
  FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_1(VAR_10))
  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_6->control.hw_key) {
  struct ieee80211_key_conf *VAR_13 = VAR_6->control.hw_key;

  switch (VAR_13->cipher) {
  case 128:
  case 129:
  case 130:
   VAR_11 = 0x01;
   break;
  case 131:
   VAR_11 = 0x03;
   break;
  default:
   break;
  }
 }

 VAR_12 = FUNC_4(VAR_7->addr1) ||
       FUNC_5(VAR_7->addr1);

 if (VAR_6->flags & VAR_0)
  FUNC_8(VAR_1, VAR_2);

 VAR_2->bmc = VAR_12;
 VAR_2->sec_type = VAR_11;
 VAR_2->tx_pkt_size = VAR_4->len;
 VAR_2->offset = VAR_5->tx_pkt_desc_sz;
 VAR_2->qsel = VAR_4->priority;
 VAR_2->ls = 1;


 FUNC_9(VAR_1, VAR_9, VAR_4);
}
