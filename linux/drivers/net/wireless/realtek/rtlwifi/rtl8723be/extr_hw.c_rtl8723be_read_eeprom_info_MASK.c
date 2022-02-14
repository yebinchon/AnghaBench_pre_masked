
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* rfpath_rxenable; } ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct rtl_efuse {int autoload_failflag; int epromtype; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_5 (struct rtl_phy*) ;
 int FUNC_6 (char*) ;
 struct rtl_efuse* FUNC_7 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct rtl_priv*,int ) ;

void FUNC_11(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_9(VAR_7);
 struct rtl_efuse *VAR_9 = FUNC_7(FUNC_9(VAR_7));
 struct rtl_phy *VAR_10 = &(VAR_8->phy);
 struct rtl_hal *VAR_11 = FUNC_8(FUNC_9(VAR_7));
 u8 VAR_12;

 VAR_11->version = FUNC_4(VAR_7);
 if (FUNC_5(VAR_10) == VAR_6)
  VAR_8->dm.rfpath_rxenable[0] = 1;
 else
  VAR_8->dm.rfpath_rxenable[0] =
      VAR_8->dm.rfpath_rxenable[1] = 1;
 FUNC_1(VAR_8, VAR_0, VAR_2, "VersionID = 0x%4x\n",
   VAR_11->version);
 VAR_12 = FUNC_10(VAR_8, VAR_5);
 if (VAR_12 & FUNC_0(4)) {
  FUNC_1(VAR_8, VAR_0, VAR_1, "Boot from EEPROM\n");
  VAR_9->epromtype = VAR_3;
 } else {
  FUNC_1(VAR_8, VAR_0, VAR_1, "Boot from EFUSE\n");
  VAR_9->epromtype = VAR_4;
 }
 if (VAR_12 & FUNC_0(5)) {
  FUNC_1(VAR_8, VAR_0, VAR_2, "Autoload OK\n");
  VAR_9->autoload_failflag = 0;
  FUNC_3(VAR_7, 0);
 } else {
  FUNC_6("Autoload ERR!!\n");
 }
 FUNC_2(VAR_7);
}
