
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ tx_cnt; int tx_unicast; } ;
struct rtw_vif {TYPE_2__ stats; } ;
struct TYPE_3__ {int tx_cnt; int tx_unicast; } ;
struct rtw_dev {TYPE_1__ stats; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_vif*) ;

__attribute__((used)) static
void FUNC_4(struct rtw_dev *VAR_1, struct ieee80211_vif *VAR_2,
    struct sk_buff *VAR_3)
{
 struct ieee80211_hdr *VAR_4;
 struct rtw_vif *VAR_5;

 VAR_4 = (struct ieee80211_hdr *)VAR_3->data;

 if (!FUNC_0(VAR_4->frame_control))
  return;

 if (!FUNC_1(VAR_4->addr1) &&
     !FUNC_2(VAR_4->addr1)) {
  VAR_1->stats.tx_unicast += VAR_3->len;
  VAR_1->stats.tx_cnt++;
  if (VAR_2) {
   VAR_5 = (struct rtw_vif *)VAR_2->drv_priv;
   VAR_5->stats.tx_unicast += VAR_3->len;
   VAR_5->stats.tx_cnt++;
   if (VAR_5->stats.tx_cnt > VAR_0)
    FUNC_3(VAR_1, VAR_5);
  }
 }
}
