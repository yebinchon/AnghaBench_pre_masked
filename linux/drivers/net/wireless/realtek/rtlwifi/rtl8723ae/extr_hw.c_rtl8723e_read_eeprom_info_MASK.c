
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* rfpath_rxenable; } ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__* cfg; struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct rtl_efuse {int autoload_failflag; int epromtype; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int * maps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_6 (struct rtl_phy*) ;
 int FUNC_7 (char*) ;
 struct rtl_efuse* FUNC_8 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct rtl_priv*,int ) ;
 int FUNC_12 (struct rtl_priv*,int ) ;
 int FUNC_13 (struct rtl_priv*,int ,int) ;

void FUNC_14(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_10(VAR_10);
 struct rtl_efuse *VAR_12 = FUNC_8(FUNC_10(VAR_10));
 struct rtl_phy *VAR_13 = &(VAR_11->phy);
 struct rtl_hal *VAR_14 = FUNC_9(FUNC_10(VAR_10));
 u8 VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_12(VAR_11, VAR_11->cfg->maps[VAR_6]);
 VAR_16 = (VAR_16 & ~VAR_5) | FUNC_1(VAR_7);
 FUNC_13(VAR_11, VAR_11->cfg->maps[VAR_6], VAR_16);

 VAR_14->version = FUNC_5(VAR_10);

 if (FUNC_6(VAR_13) == VAR_9)
  VAR_11->dm.rfpath_rxenable[0] = 1;
 else
  VAR_11->dm.rfpath_rxenable[0] =
      VAR_11->dm.rfpath_rxenable[1] = 1;
 FUNC_2(VAR_11, VAR_0, VAR_2, "VersionID = 0x%4x\n",
      VAR_14->version);

 VAR_15 = FUNC_11(VAR_11, VAR_8);
 if (VAR_15 & FUNC_0(4)) {
  FUNC_2(VAR_11, VAR_0, VAR_1, "Boot from EEPROM\n");
  VAR_12->epromtype = VAR_3;
 } else {
  FUNC_2(VAR_11, VAR_0, VAR_1, "Boot from EFUSE\n");
  VAR_12->epromtype = VAR_4;
 }
 if (VAR_15 & FUNC_0(5)) {
  FUNC_2(VAR_11, VAR_0, VAR_2, "Autoload OK\n");
  VAR_12->autoload_failflag = 0;
  FUNC_4(VAR_10, 0);
 } else {
  VAR_12->autoload_failflag = 1;
  FUNC_4(VAR_10, 0);
  FUNC_7("Autoload ERR!!\n");
 }
 FUNC_3(VAR_10);
}
