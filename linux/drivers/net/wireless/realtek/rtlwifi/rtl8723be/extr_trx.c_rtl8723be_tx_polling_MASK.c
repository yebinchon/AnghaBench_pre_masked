
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 == VAR_0) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(4));
 } else {
  FUNC_2(VAR_4, VAR_1,
          FUNC_0(0) << (VAR_3));
 }
}
