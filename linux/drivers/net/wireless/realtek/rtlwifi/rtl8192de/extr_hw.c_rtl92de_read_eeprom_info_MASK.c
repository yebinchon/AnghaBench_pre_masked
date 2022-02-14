
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct rtl_efuse {int autoload_status; int autoload_failflag; int epromtype; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (char*) ;
 struct rtl_efuse* FUNC_5 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl_priv*,int ) ;

void FUNC_9(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_7(VAR_6);
 struct rtl_efuse *VAR_8 = FUNC_5(FUNC_7(VAR_6));
 struct rtl_hal *VAR_9 = FUNC_6(FUNC_7(VAR_6));
 u8 VAR_10;

 VAR_9->version = FUNC_3(VAR_6);
 VAR_10 = FUNC_8(VAR_7, VAR_5);
 VAR_8->autoload_status = VAR_10;
 if (VAR_10 & FUNC_0(4)) {
  FUNC_1(VAR_7, VAR_0, VAR_1, "Boot from EEPROM\n");
  VAR_8->epromtype = VAR_3;
 } else {
  FUNC_1(VAR_7, VAR_0, VAR_1, "Boot from EFUSE\n");
  VAR_8->epromtype = VAR_4;
 }
 if (VAR_10 & FUNC_0(5)) {
  FUNC_1(VAR_7, VAR_0, VAR_2, "Autoload OK\n");

  VAR_8->autoload_failflag = 0;
  FUNC_2(VAR_6);
 } else {
  FUNC_4("Autoload ERR!!\n");
 }
 return;
}
