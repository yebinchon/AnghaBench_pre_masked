
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int autoload_failflag; int epromtype; } ;
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
 int FUNC_3 (char*) ;
 struct rtl_efuse* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int ) ;

void FUNC_7(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_6);
 struct rtl_efuse *VAR_8 = FUNC_4(FUNC_5(VAR_6));
 u8 VAR_9 = 0;

 VAR_9 = FUNC_6(VAR_7, VAR_5);

 if (VAR_9 & FUNC_0(4)) {
  FUNC_1(VAR_7, VAR_0, VAR_1, "Boot from EEPROM\n");
  VAR_8->epromtype = VAR_3;
 } else {
  FUNC_1(VAR_7, VAR_0, VAR_1, "Boot from EFUSE\n");
  VAR_8->epromtype = VAR_4;
 }

 if (VAR_9 & FUNC_0(5)) {
  FUNC_1(VAR_7, VAR_0, VAR_2, "Autoload OK\n");
  VAR_8->autoload_failflag = 0;
  FUNC_2(VAR_6);
 } else {
  FUNC_3("Autoload ERR!!\n");
  VAR_8->autoload_failflag = 1;
 }
}
