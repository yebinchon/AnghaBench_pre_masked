
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ dynamic_txhighpower_lvl; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_mac {scalar_t__ act_scanning; } ;
struct rtl_efuse {int eeprom_version; int txpwr_safetyflag; scalar_t__ eeprom_regulatory; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rtl_efuse* FUNC_0 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_5);
 struct rtl_mac *VAR_8 = FUNC_1(FUNC_2(VAR_5));
 struct rtl_efuse *VAR_9 = FUNC_0(FUNC_2(VAR_5));
 u32 VAR_10 = 0;
 bool VAR_11 = 0;

 if (((VAR_9->eeprom_version >= 2) &&
       (VAR_9->txpwr_safetyflag == 1)) ||
       ((VAR_9->eeprom_version >= 2) &&
       (VAR_9->eeprom_regulatory != 0)))
  VAR_11 = 1;

 if (VAR_8->act_scanning) {
  VAR_10 = 0x3f;
  if (VAR_11)
   VAR_10 = VAR_6;
 } else {
  VAR_10 = VAR_6;

  if (VAR_7->dm.dynamic_txhighpower_lvl ==
      VAR_3)
   VAR_10 = 0x10;
  else if (VAR_7->dm.dynamic_txhighpower_lvl ==
   VAR_4)
   VAR_10 = 0x0;
 }

 if (VAR_10 > VAR_1)
  VAR_10 = VAR_1;

 FUNC_3(VAR_5, VAR_2, VAR_0, VAR_10);

}
