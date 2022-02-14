
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
 int FUNC_1 (int,char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct ieee80211_hw *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4 = 100;
 struct rtl_priv *VAR_5 = FUNC_2(VAR_2);

 FUNC_4(VAR_5, VAR_0 + 3, 0x20);
 VAR_3 = FUNC_3(VAR_5, VAR_1 + 1);

 while (VAR_3 & FUNC_0(2)) {
  VAR_4--;
  if (VAR_4 == 0) {
   FUNC_1(1, "rtl8192c-common: 8051 reset fail.\n");
   break;
  }
  FUNC_5(50);
  VAR_3 = FUNC_3(VAR_5, VAR_1 + 1);
 }
}
