
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_phy {scalar_t__ num_total_rfpath; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,scalar_t__,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_1);
 struct rtl_phy *VAR_4 = &VAR_3->phy;
 u8 VAR_5 = 0;

 for (VAR_5 = VAR_0; VAR_5 < VAR_4->num_total_rfpath; ++VAR_5)
  FUNC_0(VAR_1, VAR_2, VAR_5);
}
