
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {size_t num_total_rfpath; scalar_t__ rf_type; void** rfreg_chnlval; void** reg_rf3c; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ current_bandtype; scalar_t__ macphymode; scalar_t__ interfaceindex; } ;
struct rtl_efuse {int eeprom_c9; int eeprom_cc; scalar_t__* internal_pa_5g; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int,int) ;
 struct rtl_efuse* FUNC_6 (struct rtl_priv*) ;
 void* FUNC_7 (struct ieee80211_hw*,size_t,int,int ) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_11 (struct ieee80211_hw*,size_t,int,int,int) ;

void FUNC_12(struct ieee80211_hw *VAR_28)
{
 struct rtl_priv *VAR_29 = FUNC_9(VAR_28);
 struct rtl_hal *VAR_30 = FUNC_8(FUNC_9(VAR_28));
 struct rtl_phy *VAR_31 = &(VAR_29->phy);
 struct rtl_efuse *VAR_32 = FUNC_6(FUNC_9(VAR_28));
 u8 VAR_33, VAR_34;

 FUNC_1(VAR_29, VAR_2, VAR_4, "==>\n");

 if (VAR_30->current_bandtype == VAR_0) {

  FUNC_10(VAR_28, VAR_11, FUNC_0(0), 0x0);
  FUNC_10(VAR_28, VAR_11, FUNC_0(15), 0x0);
  if (VAR_30->macphymode != VAR_5) {
   FUNC_10(VAR_28, VAR_11, FUNC_0(16), 0x0);
   FUNC_10(VAR_28, VAR_11, FUNC_0(31), 0x0);
  }

  FUNC_10(VAR_28, VAR_17, FUNC_0(6) | FUNC_0(7), 0x0);

  FUNC_10(VAR_28, VAR_26, FUNC_0(14) | FUNC_0(13), 0x0);

  FUNC_10(VAR_28, 0xB30, 0x00F00000, 0xa);

  FUNC_10(VAR_28, VAR_21, VAR_7,
         0x40000100);
  FUNC_10(VAR_28, VAR_23, VAR_7,
         0x40000100);
  if (VAR_30->macphymode == VAR_5) {
   FUNC_10(VAR_28, VAR_10,
          FUNC_0(10) | FUNC_0(6) | FUNC_0(5),
          ((VAR_32->eeprom_c9 & FUNC_0(3)) >> 3) |
          (VAR_32->eeprom_c9 & FUNC_0(1)) |
          ((VAR_32->eeprom_cc & FUNC_0(1)) << 4));
   FUNC_10(VAR_28, VAR_12,
          FUNC_0(10) | FUNC_0(6) | FUNC_0(5),
          ((VAR_32->eeprom_c9 & FUNC_0(2)) >> 2) |
          ((VAR_32->eeprom_c9 & FUNC_0(0)) << 1) |
          ((VAR_32->eeprom_cc & FUNC_0(0)) << 5));
   FUNC_10(VAR_28, VAR_11, FUNC_0(15), 0);
  } else {
   FUNC_10(VAR_28, VAR_10,
          FUNC_0(26) | FUNC_0(22) | FUNC_0(21) | FUNC_0(10) |
          FUNC_0(6) | FUNC_0(5),
          ((VAR_32->eeprom_c9 & FUNC_0(3)) >> 3) |
          (VAR_32->eeprom_c9 & FUNC_0(1)) |
          ((VAR_32->eeprom_cc & FUNC_0(1)) << 4) |
          ((VAR_32->eeprom_c9 & FUNC_0(7)) << 9) |
          ((VAR_32->eeprom_c9 & FUNC_0(5)) << 12) |
          ((VAR_32->eeprom_cc & FUNC_0(3)) << 18));
   FUNC_10(VAR_28, VAR_12,
          FUNC_0(10) | FUNC_0(6) | FUNC_0(5),
          ((VAR_32->eeprom_c9 & FUNC_0(2)) >> 2) |
          ((VAR_32->eeprom_c9 & FUNC_0(0)) << 1) |
          ((VAR_32->eeprom_cc & FUNC_0(0)) << 5));
   FUNC_10(VAR_28, VAR_13,
          FUNC_0(10) | FUNC_0(6) | FUNC_0(5),
          ((VAR_32->eeprom_c9 & FUNC_0(6)) >> 6) |
          ((VAR_32->eeprom_c9 & FUNC_0(4)) >> 3) |
          ((VAR_32->eeprom_cc & FUNC_0(2)) << 3));
   FUNC_10(VAR_28, VAR_11,
          FUNC_0(31) | FUNC_0(15), 0);
  }

 } else {

  FUNC_10(VAR_28, VAR_11, FUNC_0(0), 0x1);
  FUNC_10(VAR_28, VAR_11, FUNC_0(15), 0x1);
  if (VAR_30->macphymode != VAR_5) {
   FUNC_10(VAR_28, VAR_11, FUNC_0(16), 0x1);
   FUNC_10(VAR_28, VAR_11, FUNC_0(31), 0x1);
  }

  FUNC_10(VAR_28, VAR_17, FUNC_0(6) | FUNC_0(7), 0x1);

  FUNC_10(VAR_28, VAR_26, FUNC_0(14) | FUNC_0(13), 0x1);

  FUNC_10(VAR_28, 0xB30, 0x00F00000, 0x0);

  if (VAR_32->internal_pa_5g[0])
   FUNC_10(VAR_28, VAR_21, VAR_7,
          0x2d4000b5);
  else
   FUNC_10(VAR_28, VAR_21, VAR_7,
          0x20000080);
  if (VAR_32->internal_pa_5g[1])
   FUNC_10(VAR_28, VAR_23, VAR_7,
          0x2d4000b5);
  else
   FUNC_10(VAR_28, VAR_23, VAR_7,
          0x20000080);
  if (VAR_30->macphymode == VAR_5) {
   FUNC_10(VAR_28, VAR_10,
          FUNC_0(10) | FUNC_0(6) | FUNC_0(5),
          (VAR_32->eeprom_cc & FUNC_0(5)));
   FUNC_10(VAR_28, VAR_12, FUNC_0(10),
          ((VAR_32->eeprom_cc & FUNC_0(4)) >> 4));
   FUNC_10(VAR_28, VAR_11, FUNC_0(15),
          (VAR_32->eeprom_cc & FUNC_0(4)) >> 4);
  } else {
   FUNC_10(VAR_28, VAR_10,
          FUNC_0(26) | FUNC_0(22) | FUNC_0(21) | FUNC_0(10) |
          FUNC_0(6) | FUNC_0(5),
          (VAR_32->eeprom_cc & FUNC_0(5)) |
          ((VAR_32->eeprom_cc & FUNC_0(7)) << 14));
   FUNC_10(VAR_28, VAR_12, FUNC_0(10),
          ((VAR_32->eeprom_cc & FUNC_0(4)) >> 4));
   FUNC_10(VAR_28, VAR_13, FUNC_0(10),
          ((VAR_32->eeprom_cc & FUNC_0(6)) >> 6));
   FUNC_10(VAR_28, VAR_11,
          FUNC_0(31) | FUNC_0(15),
          ((VAR_32->eeprom_cc & FUNC_0(4)) >> 4) |
          ((VAR_32->eeprom_cc & FUNC_0(6)) << 10));
  }
 }

 FUNC_10(VAR_28, VAR_20, VAR_7, 0x40000100);
 FUNC_10(VAR_28, VAR_22, VAR_7, 0x40000100);
 FUNC_10(VAR_28, VAR_24, 0xF0000000, 0x00);
 FUNC_10(VAR_28, VAR_18, FUNC_0(30) | FUNC_0(28) |
        FUNC_0(26) | FUNC_0(24), 0x00);
 FUNC_10(VAR_28, VAR_25, 0xF0000000, 0x00);
 FUNC_10(VAR_28, 0xca0, 0xF0000000, 0x00);
 FUNC_10(VAR_28, VAR_17, 0x0000F000, 0x00);


 for (VAR_33 = VAR_8; VAR_33 < VAR_31->num_total_rfpath;
      VAR_33++) {
  if (VAR_30->current_bandtype == VAR_0) {

   FUNC_11(VAR_28, VAR_33, VAR_16, FUNC_0(8) | FUNC_0(16) |
          FUNC_0(18), 0);

   FUNC_11(VAR_28, (enum radio_path)VAR_33, 0x0B,
          0x1c000, 0x07);
  } else {

   FUNC_11(VAR_28, VAR_33, VAR_16, FUNC_0(8) |
          FUNC_0(16) | FUNC_0(18),
          (FUNC_0(16) | FUNC_0(8)) >> 8);
  }
 }


 if (VAR_31->rf_type == VAR_15) {

  FUNC_10(VAR_28, VAR_19, VAR_6, 0x11);
  FUNC_10(VAR_28, VAR_27, VAR_1, 0x1);


  if (VAR_30->interfaceindex == 0) {
   FUNC_10(VAR_28, VAR_9, FUNC_0(12) |
          FUNC_0(13), 0x3);
  } else {
   FUNC_2(VAR_28, 0);
   FUNC_1(VAR_29, VAR_2, VAR_4,
     "MAC1 use DBI to update 0x888\n");

   FUNC_5(VAR_28, VAR_9,
      FUNC_4(VAR_28,
      VAR_9,
      FUNC_0(3)) | FUNC_0(12) | FUNC_0(13),
      FUNC_0(3));
   FUNC_3(VAR_28, 0);
  }
 } else {


  FUNC_10(VAR_28, VAR_19, VAR_6, 0x33);
  FUNC_10(VAR_28, VAR_27, VAR_1, 0x3);

  FUNC_10(VAR_28, VAR_9, FUNC_0(12) | FUNC_0(13), 0);
 }
 for (VAR_33 = VAR_8; VAR_33 < VAR_31->num_total_rfpath;
      VAR_33++) {
  VAR_31->rfreg_chnlval[VAR_33] = FUNC_7(VAR_28, VAR_33,
      VAR_16, VAR_14);
  VAR_31->reg_rf3c[VAR_33] = FUNC_7(VAR_28, VAR_33, 0x3C,
   VAR_14);
 }
 for (VAR_34 = 0; VAR_34 < 2; VAR_34++)
  FUNC_1(VAR_29, VAR_3, VAR_4, "RF 0x18 = 0x%x\n",
    VAR_31->rfreg_chnlval[VAR_34]);
 FUNC_1(VAR_29, VAR_2, VAR_4, "<==\n");

}
