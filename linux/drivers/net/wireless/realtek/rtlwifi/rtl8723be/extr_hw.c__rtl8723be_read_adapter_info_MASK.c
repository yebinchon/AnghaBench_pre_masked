
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int btcoexist; } ;
struct TYPE_4__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_2__ btcoexist; } ;
struct rtl_hal {scalar_t__ oem_id; int package_type; int board_type; } ;
struct rtl_efuse {int crystalcap; int eeprom_smid; int eeprom_oemid; int eeprom_did; int eeprom_svid; int eeprom_channelplan; int channel_plan; int board_type; int autoload_failflag; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
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
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 void* VAR_26 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int*) ;
 struct rtl_efuse* FUNC_8 (struct rtl_priv*) ;
 scalar_t__ FUNC_9 (struct ieee80211_hw*,struct rtl_priv*,int ,int*,int*) ;
 struct rtl_hal* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_27,
      bool VAR_28)
{
 struct rtl_priv *VAR_29 = FUNC_11(VAR_27);
 struct rtl_efuse *VAR_30 = FUNC_8(FUNC_11(VAR_27));
 struct rtl_hal *VAR_31 = FUNC_10(FUNC_11(VAR_27));
 int VAR_32[] = {VAR_14, VAR_10, VAR_5,
   VAR_8, VAR_7, VAR_6,
   VAR_3, VAR_9, VAR_4,
   VAR_1};
 u8 *VAR_33;
 int VAR_34;
 bool VAR_35 = 0;
 bool VAR_36 = 0;
 bool VAR_37 = 0;
 bool VAR_38 = 0;
 u16 VAR_39[] = {
  0x6151, 0x6152, 0x6154, 0x6155, 0x6177, 0x6178, 0x6179, 0x6180,
  0x7151, 0x7152, 0x7154, 0x7155, 0x7177, 0x7178, 0x7179, 0x7180,
  0x8151, 0x8152, 0x8154, 0x8155, 0x8181, 0x8182, 0x8184, 0x8185,
  0x9151, 0x9152, 0x9154, 0x9155, 0x9181, 0x9182, 0x9184, 0x9185
 };
 u16 VAR_40[] = {
  0x6181, 0x6184, 0x6185, 0x7181, 0x7182, 0x7184, 0x7185, 0x8181,
  0x8182, 0x8184, 0x8185, 0x9181, 0x9182, 0x9184, 0x9185
 };
 u16 VAR_41[] = {
  0x6191, 0x6192, 0x6193, 0x7191, 0x7192, 0x7193, 0x8191, 0x8192,
  0x8193, 0x9191, 0x9192, 0x9193
 };
 u16 VAR_42[] = {
  0x8195, 0x9195, 0x7194, 0x8200, 0x8201, 0x8202, 0x9199, 0x9200
 };

 if (VAR_28) {

  return;
 }

 VAR_33 = FUNC_6(VAR_13, VAR_12);
 if (!VAR_33)
  return;

 if (FUNC_9(VAR_27, VAR_29, VAR_13, VAR_33, VAR_32))
  goto exit;


 VAR_30->crystalcap = VAR_33[VAR_11];
 if (VAR_30->crystalcap == 0xFF)
  VAR_30->crystalcap = 0x20;

 FUNC_4(VAR_27, VAR_30->autoload_failflag,
            VAR_33);

 FUNC_7(VAR_27,
       VAR_30->autoload_failflag,
       VAR_33);

 if (VAR_29->btcoexist.btc_info.btcoexist == 1)
  VAR_30->board_type |= FUNC_1(2);

 VAR_31->board_type = VAR_30->board_type;
 FUNC_2(VAR_29, VAR_0, VAR_2,
   "board_type = 0x%x\n", VAR_30->board_type);

 VAR_31->package_type = FUNC_3(VAR_27);


 VAR_30->channel_plan = VAR_30->eeprom_channelplan;

 if (VAR_31->oem_id == VAR_25) {

  for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_39); VAR_34++) {
   if (VAR_30->eeprom_smid == VAR_39[VAR_34]) {
    VAR_35 = 1;
    break;
   }
  }

  for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_40); VAR_34++) {
   if (VAR_30->eeprom_smid == VAR_40[VAR_34]) {
    VAR_36 = 1;
    break;
   }
  }

  for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_41); VAR_34++) {
   if (VAR_30->eeprom_smid == VAR_41[VAR_34]) {
    VAR_37 = 1;
    break;
   }
  }

  for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_42); VAR_34++) {
   if (VAR_30->eeprom_smid == VAR_42[VAR_34]) {
    VAR_38 = 1;
    break;
   }
  }
  switch (VAR_30->eeprom_oemid) {
  case 131:
   if (VAR_30->eeprom_did == 0x8176) {
    if (VAR_30->eeprom_svid == 0x10EC &&
        VAR_35) {
     VAR_31->oem_id = VAR_26;
    } else if (VAR_30->eeprom_svid == 0x1025) {
     VAR_31->oem_id = VAR_15;
    } else if (VAR_30->eeprom_svid == 0x10EC &&
        VAR_37) {
     VAR_31->oem_id = VAR_23;
    } else if (VAR_30->eeprom_svid == 0x10EC &&
        VAR_38) {
     VAR_31->oem_id = VAR_20;
    } else if ((VAR_30->eeprom_svid == 0x10EC &&
         VAR_30->eeprom_smid == 0x8197) ||
        (VAR_30->eeprom_svid == 0x10EC &&
         VAR_30->eeprom_smid == 0x9196)) {
     VAR_31->oem_id = VAR_16;
    } else if ((VAR_30->eeprom_svid == 0x1028 &&
         VAR_30->eeprom_smid == 0x8194) ||
        (VAR_30->eeprom_svid == 0x1028 &&
         VAR_30->eeprom_smid == 0x8198) ||
        (VAR_30->eeprom_svid == 0x1028 &&
         VAR_30->eeprom_smid == 0x9197) ||
        (VAR_30->eeprom_svid == 0x1028 &&
         VAR_30->eeprom_smid == 0x9198)) {
     VAR_31->oem_id = VAR_17;
    } else if ((VAR_30->eeprom_svid == 0x103C &&
         VAR_30->eeprom_smid == 0x1629)) {
     VAR_31->oem_id = VAR_19;
    } else if ((VAR_30->eeprom_svid == 0x1A32 &&
        VAR_30->eeprom_smid == 0x2315)) {
     VAR_31->oem_id = VAR_22;
    } else if ((VAR_30->eeprom_svid == 0x10EC &&
        VAR_30->eeprom_smid == 0x8203)) {
     VAR_31->oem_id = VAR_21;
    } else if ((VAR_30->eeprom_svid == 0x1043 &&
        VAR_30->eeprom_smid == 0x84B5)) {
     VAR_31->oem_id = VAR_18;
    } else {
     VAR_31->oem_id = VAR_25;
    }
   } else if (VAR_30->eeprom_did == 0x8178) {
    if (VAR_30->eeprom_svid == 0x10EC &&
        VAR_36)
     VAR_31->oem_id = VAR_26;
    else if (VAR_30->eeprom_svid == 0x1025)
     VAR_31->oem_id = VAR_15;
    else if ((VAR_30->eeprom_svid == 0x10EC &&
       VAR_30->eeprom_smid == 0x8186))
     VAR_31->oem_id = VAR_21;
    else if ((VAR_30->eeprom_svid == 0x1043 &&
       VAR_30->eeprom_smid == 0x84B6))
     VAR_31->oem_id =
       VAR_18;
    else
     VAR_31->oem_id = VAR_25;
   } else {
     VAR_31->oem_id = VAR_25;
   }
   break;
  case 129:
   VAR_31->oem_id = VAR_26;
   break;
  case 132:
   VAR_31->oem_id = VAR_24;
   break;
  case 130:
   VAR_31->oem_id = VAR_22;
   break;
  case 128:
   break;
  default:
   VAR_31->oem_id = VAR_25;
   break;
  }
 }
exit:
 FUNC_5(VAR_33);
}
