
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_sta*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
  struct ieee80211_sta *VAR_1, u8 VAR_2, bool VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_0);
 if (VAR_4->dm.useramask)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 else


  FUNC_1(VAR_0, VAR_1);
}
