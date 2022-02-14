
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct rtl_mac {scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rt_media_status { ____Placeholder_rt_media_status } rt_media_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

enum rt_media_status FUNC_2(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct rtl_mac *VAR_6 = FUNC_0(FUNC_1(VAR_4));
 enum rt_media_status VAR_7 = VAR_3;

 u8 VAR_8 = (VAR_6->opmode == VAR_1) ? 1 : 0;

 if (VAR_8 || VAR_5->mac80211.link_state >= VAR_0)
  VAR_7 = VAR_2;

 return VAR_7;
}
