
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
 scalar_t__ VAR_2 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 u8 VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_1 + 2);
 FUNC_3(VAR_4, VAR_1 + 2, VAR_5 | FUNC_0(6));
 FUNC_3(VAR_4, VAR_0, 0x0a);
 FUNC_3(VAR_4, VAR_2 + 1, 0xff);
 VAR_5 = FUNC_2(VAR_4, VAR_2 + 2);
 VAR_5 |= FUNC_0(0);
 FUNC_3(VAR_4, VAR_2 + 2, VAR_5);
}
