
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bssid; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct rtl_mac {scalar_t__ link_state; int p2p; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int addr3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (struct ieee80211_hw*,void*,unsigned int) ;
 int FUNC_6 (struct ieee80211_hw*,void*,unsigned int) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

void FUNC_8(struct ieee80211_hw *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_7(VAR_2);
 struct rtl_mac *VAR_6 = FUNC_4(FUNC_7(VAR_2));
 struct ieee80211_hdr *VAR_7 = VAR_3;

 if (!VAR_6->p2p)
  return;
 if (VAR_6->link_state != VAR_1)
  return;

 if (VAR_4 <= 40 + VAR_0)
  return;


 if (!FUNC_0(VAR_7->addr3, VAR_5->mac80211.bssid))
  return;


 if (!(FUNC_2(VAR_7->frame_control) ||
       FUNC_3(VAR_7->frame_control) ||
       FUNC_1(VAR_7->frame_control)))
  return;

 if (FUNC_1(VAR_7->frame_control))
  FUNC_5(VAR_2 , VAR_3 , VAR_4 - VAR_0);
 else
  FUNC_6(VAR_2 , VAR_3 , VAR_4 - VAR_0);
}
