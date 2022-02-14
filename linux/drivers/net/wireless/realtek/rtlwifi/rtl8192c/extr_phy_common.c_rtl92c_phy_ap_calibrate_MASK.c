
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_phy {scalar_t__ apk_done; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0, s8 VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_3(VAR_0);
 struct rtl_phy *VAR_3 = &(VAR_2->phy);
 struct rtl_hal *VAR_4 = FUNC_2(FUNC_3(VAR_0));

 if (VAR_3->apk_done)
  return;
 if (FUNC_0(VAR_4->version))
  FUNC_1(VAR_0, VAR_1, 1);
 else
  FUNC_1(VAR_0, VAR_1, 0);
}
