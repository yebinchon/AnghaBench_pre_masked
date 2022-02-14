
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {scalar_t__**** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_0(VAR_4);
 struct rtl_phy *VAR_6 = &VAR_5->phy;

 u8 VAR_7 = VAR_0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 for (; VAR_7 <= VAR_1; ++VAR_7)
  for (; VAR_8 < VAR_2; ++VAR_8)
   for (; VAR_9 < VAR_2; ++VAR_9)
    for (; VAR_10 < VAR_3; ++VAR_10)
     VAR_6->tx_power_by_rate_offset
          [VAR_7][VAR_8][VAR_9][VAR_10] = 0;
}
