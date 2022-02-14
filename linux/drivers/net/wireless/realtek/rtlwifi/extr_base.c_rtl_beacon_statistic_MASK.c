
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_3__ {int bcn_rx_inperiod; } ;
struct TYPE_4__ {scalar_t__ opmode; scalar_t__ link_state; int bssid; } ;
struct rtl_priv {TYPE_1__ link_info; TYPE_2__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_3, struct sk_buff *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_3);
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *)VAR_4->data;

 if (VAR_5->mac80211.opmode != VAR_2)
  return;

 if (VAR_5->mac80211.link_state < VAR_1)
  return;


 if (!FUNC_1(VAR_6->frame_control) &&
     !FUNC_2(VAR_6->frame_control))
  return;


 if (VAR_4->len <= 40 + VAR_0)
  return;


 if (!FUNC_0(VAR_6->addr3, VAR_5->mac80211.bssid))
  return;

 VAR_5->link_info.bcn_rx_inperiod++;
}
