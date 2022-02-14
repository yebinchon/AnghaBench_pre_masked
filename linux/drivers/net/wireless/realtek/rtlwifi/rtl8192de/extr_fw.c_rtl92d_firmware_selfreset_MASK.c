
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (int,char*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_4);
 u8 VAR_6;
 u8 VAR_7 = 100;


 FUNC_5(VAR_5, VAR_2 + 3, 0x20);
 VAR_6 = FUNC_4(VAR_5, VAR_3 + 1);
 while (VAR_6 & FUNC_0(2)) {
  VAR_7--;
  if (VAR_7 == 0)
   break;
  FUNC_6(50);
  VAR_6 = FUNC_4(VAR_5, VAR_3 + 1);
 }
 FUNC_2((VAR_7 <= 0), "rtl8192de: 8051 reset failed!\n");
 FUNC_1(VAR_5, VAR_0, VAR_1,
   "=====> 8051 reset success (%d)\n", VAR_7);
}
