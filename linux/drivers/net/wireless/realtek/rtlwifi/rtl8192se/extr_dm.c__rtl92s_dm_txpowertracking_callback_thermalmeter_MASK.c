
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int txpower_trackinginit; int thermalvalue; scalar_t__ txpowercount; } ;
struct TYPE_3__ {int* thermalmeter; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ efuse; } ;
struct rtl_efuse {int eeprom_thermalmeter; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 struct rtl_efuse* FUNC_4 (struct rtl_priv*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int ,int ,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_8(
     struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_6(VAR_7);
 struct rtl_efuse *VAR_9 = FUNC_4(FUNC_6(VAR_7));
 u8 VAR_10 = 0;
 u32 VAR_11 = 0;

 VAR_8->dm.txpower_trackinginit = 1;

 VAR_10 = (u8)FUNC_5(VAR_7, VAR_4, VAR_5, 0x1f);

 FUNC_0(VAR_8, VAR_0, VAR_1,
   "Readback Thermal Meter = 0x%x pre thermal meter 0x%x eeprom_thermal meter 0x%x\n",
   VAR_10,
   VAR_8->dm.thermalvalue, VAR_9->eeprom_thermalmeter);

 if (VAR_10) {
  VAR_8->dm.thermalvalue = VAR_10;
  if (FUNC_1(VAR_8) >= 0x35) {
   FUNC_3(VAR_7, VAR_2);
  } else {
   VAR_11 = (VAR_3 |
     (VAR_8->efuse.thermalmeter[0] << 8) |
     (VAR_10 << 16));

   FUNC_0(VAR_8, VAR_0, VAR_1,
     "Write to FW Thermal Val = 0x%x\n", VAR_11);

   FUNC_7(VAR_8, VAR_6, VAR_11);
   FUNC_2(VAR_7);
  }
 }

 VAR_8->dm.txpowercount = 0;
}
