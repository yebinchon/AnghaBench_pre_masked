
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int led_opendrain; } ;
struct TYPE_4__ {int btcoexist; scalar_t__ ant_num; } ;
struct TYPE_5__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_3__ ledctl; TYPE_2__ btcoexist; } ;
struct rtl_hal {scalar_t__ hw_type; scalar_t__ external_lna_2g; scalar_t__ external_lna_5g; scalar_t__ external_pa_2g; scalar_t__ external_pa_5g; scalar_t__ oem_id; int board_type; } ;
struct rtl_efuse {int eeprom_channelplan; int channel_plan; int crystalcap; int eeprom_thermalmeter; int apk_thermalmeterignore; int* thermalmeter; int antenna_div_cfg; int antenna_div_type; int eeprom_oemid; scalar_t__ autoload_failflag; int board_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;

 scalar_t__ VAR_29 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct ieee80211_hw*,int*,scalar_t__) ;
 int FUNC_2 (struct ieee80211_hw*,scalar_t__,int*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int*,scalar_t__) ;
 int FUNC_5 (struct ieee80211_hw*,int*,scalar_t__) ;
 int FUNC_6 (struct ieee80211_hw*,scalar_t__,int*) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int ,int ) ;
 struct rtl_efuse* FUNC_9 (struct rtl_priv*) ;
 scalar_t__ FUNC_10 (struct ieee80211_hw*,struct rtl_priv*,int ,int*,int*) ;
 struct rtl_hal* FUNC_11 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_12 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_30, bool VAR_31)
{
 struct rtl_priv *VAR_32 = FUNC_12(VAR_30);
 struct rtl_efuse *VAR_33 = FUNC_9(FUNC_12(VAR_30));
 struct rtl_hal *VAR_34 = FUNC_11(FUNC_12(VAR_30));
 int VAR_35[] = {VAR_26, VAR_14, VAR_6,
   VAR_11, VAR_10, VAR_7,
   VAR_4, VAR_13, VAR_5,
   VAR_2};
 u8 *VAR_36;

 if (VAR_31) {
  ;
 }

 VAR_36 = FUNC_8(VAR_19, VAR_17);
 if (!VAR_36)
  return;

 if (FUNC_10(VAR_30, VAR_32, VAR_19, VAR_36, VAR_35))
  goto exit;

 FUNC_6(VAR_30, VAR_33->autoload_failflag,
            VAR_36);

 if (VAR_34->hw_type == VAR_18) {
  FUNC_1(VAR_30, VAR_36,
            VAR_33->autoload_failflag);
  FUNC_2(VAR_30,
    VAR_33->autoload_failflag, VAR_36);
 } else {
  FUNC_4(VAR_30, VAR_36, VAR_33->autoload_failflag);
  FUNC_3(VAR_30,
    VAR_33->autoload_failflag, VAR_36);
 }

 FUNC_5(VAR_30, VAR_36, VAR_33->autoload_failflag);

 VAR_33->board_type = VAR_21;
 if (VAR_34->external_lna_2g != 0)
  VAR_33->board_type |= VAR_22;
 if (VAR_34->external_lna_5g != 0)
  VAR_33->board_type |= VAR_23;
 if (VAR_34->external_pa_2g != 0)
  VAR_33->board_type |= VAR_24;
 if (VAR_34->external_pa_5g != 0)
  VAR_33->board_type |= VAR_25;

 if (VAR_32->btcoexist.btc_info.btcoexist == 1)
  VAR_33->board_type |= VAR_20;

 VAR_34->board_type = VAR_33->board_type;
 FUNC_0(VAR_32, VAR_1, VAR_3,
   "board_type = 0x%x\n", VAR_33->board_type);

 VAR_33->eeprom_channelplan = *(u8 *)&VAR_36[VAR_4];
 if (VAR_33->eeprom_channelplan == 0xff)
  VAR_33->eeprom_channelplan = 0x7F;


 VAR_33->channel_plan = VAR_33->eeprom_channelplan;


 VAR_33->crystalcap = VAR_36[VAR_15];
 if (VAR_33->crystalcap == 0xFF)
  VAR_33->crystalcap = 0x20;

 VAR_33->eeprom_thermalmeter = *(u8 *)&VAR_36[VAR_12];
 if ((VAR_33->eeprom_thermalmeter == 0xff) ||
     VAR_33->autoload_failflag) {
  VAR_33->apk_thermalmeterignore = 1;
  VAR_33->eeprom_thermalmeter = 0xff;
 }

 VAR_33->thermalmeter[0] = VAR_33->eeprom_thermalmeter;
 FUNC_0(VAR_32, VAR_1, VAR_3,
   "thermalmeter = 0x%x\n", VAR_33->eeprom_thermalmeter);

 if (!VAR_33->autoload_failflag) {
  VAR_33->antenna_div_cfg =
    (VAR_36[VAR_9] & 0x18) >> 3;
  if (VAR_36[VAR_9] == 0xff)
   VAR_33->antenna_div_cfg = 0;

  if (VAR_32->btcoexist.btc_info.btcoexist == 1 &&
      VAR_32->btcoexist.btc_info.ant_num == VAR_0)
   VAR_33->antenna_div_cfg = 0;

  VAR_33->antenna_div_type = VAR_36[VAR_8];
  if (VAR_33->antenna_div_type == 0xff)
   VAR_33->antenna_div_type = VAR_16;
 } else {
  VAR_33->antenna_div_cfg = 0;
  VAR_33->antenna_div_type = 0;
 }

 FUNC_0(VAR_32, VAR_1, VAR_3,
  "SWAS: bHwAntDiv = %x, TRxAntDivType = %x\n",
  VAR_33->antenna_div_cfg, VAR_33->antenna_div_type);

 VAR_32->ledctl.led_opendrain = 1;

 if (VAR_34->oem_id == 128) {
  switch (VAR_33->eeprom_oemid) {
  case 128:
   break;
  case 130:
   VAR_34->oem_id = VAR_29;
   break;
  case 132:
   VAR_34->oem_id = VAR_28;
   break;
  case 131:
   VAR_34->oem_id = VAR_27;
   break;
  case 129:
   break;
  default:
   break;
  }
 }
exit:
 FUNC_7(VAR_36);
}
