
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int btcoexist; } ;
struct TYPE_4__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_2__ btcoexist; } ;
struct rtl_hal {int board_type; scalar_t__ oem_id; } ;
struct rtl_efuse {int eeprom_oemid; int board_type; int crystalcap; int eeprom_did; int eeprom_svid; int eeprom_smid; scalar_t__ antenna_div_cfg; int antenna_div_type; int autoload_failflag; int eeprom_channelplan; int channel_plan; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;
 struct rtl_efuse* FUNC_6 (struct rtl_priv*) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,struct rtl_priv*,int ,int*,int*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_9(VAR_19);
 struct rtl_efuse *VAR_21 = FUNC_6(FUNC_9(VAR_19));
 struct rtl_hal *VAR_22 = FUNC_8(FUNC_9(VAR_19));
 int VAR_23[] = {VAR_16, VAR_11, VAR_5,
   VAR_9, VAR_8, VAR_6,
   VAR_3, VAR_10, VAR_4,
   VAR_1};
 u8 *VAR_24;

 VAR_24 = FUNC_4(VAR_14, VAR_13);
 if (!VAR_24)
  return;

 if (FUNC_7(VAR_19, VAR_20, VAR_14, VAR_24, VAR_23))
  goto exit;

 if (VAR_21->eeprom_oemid == 0xFF)
  VAR_21->eeprom_oemid = 0;

 FUNC_1(VAR_20, VAR_0, VAR_2,
   "EEPROM Customer ID: 0x%2x\n", VAR_21->eeprom_oemid);

 VAR_21->channel_plan = VAR_21->eeprom_channelplan;

 FUNC_2(VAR_19, VAR_21->autoload_failflag,
          VAR_24);

 FUNC_5(VAR_19, VAR_21->autoload_failflag,
            VAR_24);


 VAR_21->board_type = (((*(u8 *)&VAR_24[VAR_7])
    & 0xE0) >> 5);
 if ((*(u8 *)&VAR_24[VAR_7]) == 0xFF)
  VAR_21->board_type = 0;

 if (VAR_20->btcoexist.btc_info.btcoexist == 1)
  VAR_21->board_type |= FUNC_0(2);

 VAR_22->board_type = VAR_21->board_type;
 FUNC_1(VAR_20, VAR_0, VAR_2,
   "board_type = 0x%x\n", VAR_21->board_type);

 VAR_21->crystalcap = VAR_24[VAR_12];
 if (VAR_24[VAR_12] == 0xFF)
  VAR_21->crystalcap = 0x20;


 VAR_21->antenna_div_type = VAR_15;
 VAR_21->antenna_div_cfg = 0;

 if (VAR_22->oem_id == VAR_18) {
  switch (VAR_21->eeprom_oemid) {
  case 128:
   if (VAR_21->eeprom_did == 0x818B) {
    if ((VAR_21->eeprom_svid == 0x10EC) &&
        (VAR_21->eeprom_smid == 0x001B))
     VAR_22->oem_id = VAR_17;
   } else {
    VAR_22->oem_id = VAR_18;
   }
   break;
  default:
   VAR_22->oem_id = VAR_18;
   break;
  }
 }
exit:
 FUNC_3(VAR_24);
}
