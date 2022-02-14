
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ oem_id; } ;
struct rtl_efuse {int eeprom_oemid; int eeprom_did; int eeprom_svid; int eeprom_smid; int autoload_failflag; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;
 struct rtl_efuse* FUNC_4 (struct rtl_priv*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,struct rtl_priv*,int ,int *,int*) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_7(VAR_16);
 struct rtl_efuse *VAR_18 = FUNC_4(FUNC_7(VAR_16));
 struct rtl_hal *VAR_19 = FUNC_6(FUNC_7(VAR_16));
 int VAR_20[] = {VAR_11, VAR_8, VAR_3,
   VAR_6, VAR_5, VAR_4,
   VAR_1, VAR_7, VAR_2,
   VAR_0};
 u8 *VAR_21;

 VAR_21 = FUNC_2(VAR_10, VAR_9);
 if (!VAR_21)
  return;

 if (FUNC_5(VAR_16, VAR_17, VAR_10, VAR_21, VAR_20))
  goto exit;

 FUNC_0(VAR_16,
          VAR_18->autoload_failflag,
          VAR_21);

 FUNC_3(VAR_16,
       VAR_18->autoload_failflag,
       VAR_21);
 if (VAR_19->oem_id == VAR_14) {
  switch (VAR_18->eeprom_oemid) {
  case 131:
   if (VAR_18->eeprom_did == 0x8176) {
    if ((VAR_18->eeprom_svid == 0x103C &&
         VAR_18->eeprom_smid == 0x1629))
     VAR_19->oem_id = VAR_12;
    else
     VAR_19->oem_id = VAR_14;
   } else {
    VAR_19->oem_id = VAR_14;
   }
   break;
  case 129:
   VAR_19->oem_id = VAR_15;
   break;
  case 130:
   VAR_19->oem_id = VAR_13;
   break;
  case 128:
  default:
   VAR_19->oem_id = VAR_14;
   break;
  }
 }
exit:
 FUNC_1(VAR_21);
}
