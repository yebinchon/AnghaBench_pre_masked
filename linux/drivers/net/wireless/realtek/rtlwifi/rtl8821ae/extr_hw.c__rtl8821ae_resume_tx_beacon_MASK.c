
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);
 u8 VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0 + 2);
 FUNC_3(VAR_3, VAR_0 + 2, VAR_4 | FUNC_0(6));
 FUNC_3(VAR_3, VAR_1 + 1, 0xff);
 VAR_4 = FUNC_2(VAR_3, VAR_1 + 2);
 VAR_4 |= FUNC_0(0);
 FUNC_3(VAR_3, VAR_1 + 2, VAR_4);
}
