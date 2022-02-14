
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cstate; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {scalar_t__ rx_busy_traffic; scalar_t__ tx_busy_traffic; scalar_t__ busytraffic; } ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {TYPE_3__ btcoexist; TYPE_2__ mac80211; TYPE_1__ link_info; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_0(VAR_11);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);

 if (VAR_12->link_info.busytraffic) {
  VAR_12->btcoexist.cstate &=
   ~VAR_4;

  if (VAR_12->link_info.tx_busy_traffic)
   VAR_12->btcoexist.cstate |=
    VAR_6;
  else
   VAR_12->btcoexist.cstate &=
    ~VAR_6;

  if (VAR_12->link_info.rx_busy_traffic)
   VAR_12->btcoexist.cstate |=
    VAR_1;
  else
   VAR_12->btcoexist.cstate &=
    ~VAR_1;
 } else {
  VAR_12->btcoexist.cstate |= VAR_4;
  VAR_12->btcoexist.cstate &=
   ~VAR_6;
  VAR_12->btcoexist.cstate &=
   ~VAR_1;
 }

 if (VAR_12->mac80211.mode == VAR_9 ||
     VAR_12->mac80211.mode == VAR_8) {
  VAR_12->btcoexist.cstate |=
   VAR_5;
  VAR_12->btcoexist.cstate &=
   ~VAR_2;
  VAR_12->btcoexist.cstate &=
   ~VAR_3;
 } else {
  VAR_12->btcoexist.cstate &=
   ~VAR_5;
  if (VAR_13->current_chan_bw == VAR_7) {
   VAR_12->btcoexist.cstate |=
    VAR_3;
   VAR_12->btcoexist.cstate &=
    ~VAR_2;
  } else {
   VAR_12->btcoexist.cstate |=
    VAR_2;
   VAR_12->btcoexist.cstate &=
    ~VAR_3;
  }
 }

 if (VAR_10)
  VAR_12->btcoexist.cstate |= VAR_0;
 else
  VAR_12->btcoexist.cstate &= ~VAR_0;
}
