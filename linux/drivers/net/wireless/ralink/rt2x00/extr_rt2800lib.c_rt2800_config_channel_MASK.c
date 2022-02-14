
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int tx_chain_num; int rx_chain_num; } ;
struct TYPE_3__ {int rt; int rf; } ;
struct rt2x00_dev {int lna_gain; TYPE_2__ default_ant; TYPE_1__ chip; } ;
struct rf_channel {int channel; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {void* default_power3; void* default_power2; void* default_power1; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int const VAR_22 ;

 int const VAR_23 ;
 int const VAR_24 ;
 int const VAR_25 ;
 int const VAR_26 ;
 int const VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (struct ieee80211_conf*) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 int FUNC_5 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_6 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_7 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_8 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_9 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_10 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_11 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_12 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_13 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_14 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_15 (struct rt2x00_dev*,int) ;
 int FUNC_16 (struct rt2x00_dev*,int ) ;
 int FUNC_17 (struct rt2x00_dev*,int ,int) ;
 int FUNC_18 (struct rt2x00_dev*,int) ;
 int FUNC_19 (struct rt2x00_dev*,int,int) ;
 void* FUNC_20 (struct rt2x00_dev*,int,void*) ;
 int FUNC_21 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_22 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_23 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_24 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_25 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_26 (struct rt2x00_dev*,int const) ;
 scalar_t__ FUNC_27 (struct rt2x00_dev*,int const) ;
 scalar_t__ FUNC_28 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_29 (int*,int ,int) ;
 int FUNC_30 (int*,int ,int) ;
 int FUNC_31 (struct rt2x00_dev*,struct rf_channel*) ;
 int FUNC_32 (int,int) ;

__attribute__((used)) static void FUNC_33(struct rt2x00_dev *VAR_48,
      struct ieee80211_conf *VAR_49,
      struct rf_channel *VAR_50,
      struct channel_info *VAR_51)
{
 u32 VAR_52;
 u32 VAR_53;
 u8 VAR_54, VAR_55;

 VAR_51->default_power1 = FUNC_20(VAR_48, VAR_50->channel,
           VAR_51->default_power1);
 VAR_51->default_power2 = FUNC_20(VAR_48, VAR_50->channel,
           VAR_51->default_power2);
 if (VAR_48->default_ant.tx_chain_num > 2)
  VAR_51->default_power3 =
   FUNC_20(VAR_48, VAR_50->channel,
           VAR_51->default_power3);

 switch (VAR_48->chip.rt) {
 case 128:
  FUNC_31(VAR_48, VAR_50);
  break;
 }

 switch (VAR_48->chip.rf) {
 case 148:
 case 147:
 case 146:
 case 145:
 case 140:
  FUNC_11(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 144:
  FUNC_6(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 143:
  FUNC_7(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 141:
  FUNC_8(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 139:
  FUNC_9(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 138:
  FUNC_10(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 142:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
  FUNC_12(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 130:
  FUNC_13(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 case 129:
  FUNC_14(VAR_48, VAR_49, VAR_50, VAR_51);
  break;
 default:
  FUNC_5(VAR_48, VAR_49, VAR_50, VAR_51);
 }

 if (FUNC_26(VAR_48, 142) ||
     FUNC_26(VAR_48, 141) ||
     FUNC_26(VAR_48, 139) ||
     FUNC_26(VAR_48, 137) ||
     FUNC_26(VAR_48, 136) ||
     FUNC_26(VAR_48, 135) ||
     FUNC_26(VAR_48, 134) ||
     FUNC_26(VAR_48, 133) ||
     FUNC_26(VAR_48, 132) ||
     FUNC_26(VAR_48, 131)) {
  VAR_55 = FUNC_18(VAR_48, 30);
  if (FUNC_26(VAR_48, 139)) {
   FUNC_30(&VAR_55, VAR_15,
       FUNC_0(VAR_49));
   FUNC_30(&VAR_55, VAR_14,
       FUNC_0(VAR_49));
  } else {
   FUNC_30(&VAR_55, VAR_17,
       FUNC_0(VAR_49));
   FUNC_30(&VAR_55, VAR_16,
       FUNC_0(VAR_49));
  }
  FUNC_19(VAR_48, 30, VAR_55);

  VAR_55 = FUNC_18(VAR_48, 3);
  FUNC_30(&VAR_55, VAR_18, 1);
  FUNC_19(VAR_48, 3, VAR_55);
 }





 if (FUNC_27(VAR_48, VAR_20)) {
  FUNC_3(VAR_48, 62, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 63, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 64, 0x37 - VAR_48->lna_gain);

  FUNC_3(VAR_48, 27, 0x0);
  FUNC_3(VAR_48, 66, 0x26 + VAR_48->lna_gain);
  FUNC_3(VAR_48, 27, 0x20);
  FUNC_3(VAR_48, 66, 0x26 + VAR_48->lna_gain);
  FUNC_3(VAR_48, 86, 0x38);
  FUNC_3(VAR_48, 83, 0x6a);
 } else if (FUNC_27(VAR_48, VAR_22)) {
  if (VAR_50->channel > 14) {

   FUNC_3(VAR_48, 70, 0x00);
  } else {
   FUNC_3(VAR_48, 70, 0x0a);
  }

  if (FUNC_0(VAR_49))
   FUNC_3(VAR_48, 105, 0x04);
  else
   FUNC_3(VAR_48, 105, 0x34);

  FUNC_3(VAR_48, 62, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 63, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 64, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 77, 0x98);
 } else if (FUNC_27(VAR_48, 128)) {
  FUNC_3(VAR_48, 62, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 63, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 64, 0x37 - VAR_48->lna_gain);

  if (VAR_48->default_ant.rx_chain_num > 1)
   FUNC_3(VAR_48, 86, 0x46);
  else
   FUNC_3(VAR_48, 86, 0);
 } else {
  FUNC_3(VAR_48, 62, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 63, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 64, 0x37 - VAR_48->lna_gain);
  FUNC_3(VAR_48, 86, 0);
 }

 if (VAR_50->channel <= 14) {
  if (!FUNC_27(VAR_48, VAR_24) &&
      !FUNC_27(VAR_48, VAR_25) &&
      !FUNC_27(VAR_48, VAR_27)) {
   if (FUNC_23(VAR_48)) {
    FUNC_3(VAR_48, 82, 0x62);
    FUNC_3(VAR_48, 82, 0x62);
    FUNC_3(VAR_48, 75, 0x46);
   } else {
    if (FUNC_27(VAR_48, VAR_22))
     FUNC_3(VAR_48, 82, 0x62);
    else
     FUNC_3(VAR_48, 82, 0x84);
    FUNC_3(VAR_48, 75, 0x50);
   }
   if (FUNC_27(VAR_48, VAR_22) ||
       FUNC_27(VAR_48, 128))
    FUNC_3(VAR_48, 83, 0x8a);
  }

 } else {
  if (FUNC_27(VAR_48, VAR_21))
   FUNC_3(VAR_48, 82, 0x94);
  else if (FUNC_27(VAR_48, VAR_22) ||
    FUNC_27(VAR_48, 128))
   FUNC_3(VAR_48, 82, 0x82);
  else if (!FUNC_27(VAR_48, VAR_27))
   FUNC_3(VAR_48, 82, 0xf2);

  if (FUNC_27(VAR_48, VAR_22) ||
      FUNC_27(VAR_48, 128))
   FUNC_3(VAR_48, 83, 0x9a);

  if (FUNC_22(VAR_48))
   FUNC_3(VAR_48, 75, 0x46);
  else
   FUNC_3(VAR_48, 75, 0x50);
 }

 VAR_52 = FUNC_16(VAR_48, VAR_28);
 FUNC_29(&VAR_52, VAR_31, FUNC_1(VAR_49));
 FUNC_29(&VAR_52, VAR_29, VAR_50->channel > 14);
 FUNC_29(&VAR_52, VAR_30, VAR_50->channel <= 14);
 FUNC_17(VAR_48, VAR_28, VAR_52);

 if (FUNC_27(VAR_48, VAR_21))
  FUNC_19(VAR_48, 8, 0);

 if (FUNC_27(VAR_48, VAR_27)) {
  VAR_53 = FUNC_16(VAR_48, VAR_32);
  FUNC_29(&VAR_53, VAR_45, 1);
 } else {
  VAR_53 = 0;
 }

 switch (VAR_48->default_ant.tx_chain_num) {
 case 3:

  FUNC_29(&VAR_53, VAR_41,
       VAR_50->channel > 14);
  FUNC_29(&VAR_53, VAR_44,
       VAR_50->channel <= 14);

 case 2:

  FUNC_29(&VAR_53, VAR_40,
       VAR_50->channel > 14);
  FUNC_29(&VAR_53, VAR_43,
       VAR_50->channel <= 14);

 case 1:

  FUNC_29(&VAR_53, VAR_39,
       VAR_50->channel > 14);
  if (FUNC_21(VAR_48))
   FUNC_29(&VAR_53, VAR_42, 1);
  else
   FUNC_29(&VAR_53, VAR_42,
        VAR_50->channel <= 14);
  break;
 }

 switch (VAR_48->default_ant.rx_chain_num) {
 case 3:

  FUNC_29(&VAR_53, VAR_35, 1);
  FUNC_29(&VAR_53, VAR_38, 1);

 case 2:

  FUNC_29(&VAR_53, VAR_34, 1);
  FUNC_29(&VAR_53, VAR_37, 1);

 case 1:

  FUNC_29(&VAR_53, VAR_33, 1);
  FUNC_29(&VAR_53, VAR_36, 1);
  break;
 }

 FUNC_29(&VAR_53, VAR_46, 1);
 FUNC_29(&VAR_53, VAR_47, 1);

 FUNC_17(VAR_48, VAR_32, VAR_53);

 if (FUNC_27(VAR_48, VAR_21)) {
  FUNC_19(VAR_48, 8, 0x80);


  if (VAR_50->channel <= 14)
   VAR_52 = 0x1c + (2 * VAR_48->lna_gain);
  else
   VAR_52 = 0x22 + ((VAR_48->lna_gain * 5) / 3);

  FUNC_4(VAR_48, 66, VAR_52);
 }

 if (FUNC_27(VAR_48, VAR_22)) {
  VAR_52 = FUNC_16(VAR_48, VAR_6);


  if (FUNC_25(VAR_48) ||
      FUNC_24(VAR_48)) {

   FUNC_29(&VAR_52, VAR_9, 0);
   if (VAR_50->channel <= 14)
    FUNC_29(&VAR_52, VAR_12, 1);
   else
    FUNC_29(&VAR_52, VAR_12, 0);
  }


  if (FUNC_25(VAR_48)) {



   FUNC_29(&VAR_52, VAR_7, 0);
   FUNC_29(&VAR_52, VAR_8, 0);

   FUNC_29(&VAR_52, VAR_10, 1);
   FUNC_29(&VAR_52, VAR_11, 1);
  } else if (FUNC_24(VAR_48)) {

   FUNC_29(&VAR_52, VAR_7, 0);
   FUNC_29(&VAR_52, VAR_10, 1);
  }

  FUNC_17(VAR_48, VAR_6, VAR_52);


  if (VAR_50->channel <= 14)
   VAR_52 = 0x1c + 2 * VAR_48->lna_gain;
  else
   VAR_52 = 0x22 + ((VAR_48->lna_gain * 5) / 3);

  FUNC_4(VAR_48, 66, VAR_52);

  FUNC_32(1000, 1500);
 }

 if (FUNC_27(VAR_48, 128)) {
  if (!FUNC_0(VAR_49))
   FUNC_3(VAR_48, 105, 0x34);
  else
   FUNC_3(VAR_48, 105, 0x04);


  if (VAR_50->channel <= 14)
   VAR_52 = 0x2e + VAR_48->lna_gain;
  else
   VAR_52 = 0x20 + ((VAR_48->lna_gain * 5) / 3);

  FUNC_4(VAR_48, 66, VAR_52);

  FUNC_32(1000, 1500);
 }

 if (FUNC_27(VAR_48, VAR_26) || FUNC_27(VAR_48, VAR_27)) {
  VAR_52 = 0x10;
  if (!FUNC_0(VAR_49)) {
   if (FUNC_27(VAR_48, VAR_27) &&
       FUNC_23(VAR_48)) {
    VAR_52 |= 0x5;
   } else {
    VAR_52 |= 0xa;
   }
  }
  FUNC_3(VAR_48, 195, 141);
  FUNC_3(VAR_48, 196, VAR_52);






  VAR_52 = (VAR_50->channel <= 14 ? 0x1c : 0x24) + 2*VAR_48->lna_gain;
  FUNC_4(VAR_48, 66, VAR_52);

  FUNC_15(VAR_48, VAR_50->channel);
 }

 VAR_54 = FUNC_2(VAR_48, 4);
 FUNC_30(&VAR_54, VAR_2, 2 * FUNC_0(VAR_49));
 FUNC_3(VAR_48, 4, VAR_54);

 VAR_54 = FUNC_2(VAR_48, 3);
 FUNC_30(&VAR_54, VAR_0, FUNC_1(VAR_49));
 FUNC_3(VAR_48, 3, VAR_54);

 if (FUNC_28(VAR_48, VAR_19, VAR_13)) {
  if (FUNC_0(VAR_49)) {
   FUNC_3(VAR_48, 69, 0x1a);
   FUNC_3(VAR_48, 70, 0x0a);
   FUNC_3(VAR_48, 73, 0x16);
  } else {
   FUNC_3(VAR_48, 69, 0x16);
   FUNC_3(VAR_48, 70, 0x08);
   FUNC_3(VAR_48, 73, 0x11);
  }
 }

 FUNC_32(1000, 1500);




 VAR_52 = FUNC_16(VAR_48, VAR_5);
 VAR_52 = FUNC_16(VAR_48, VAR_3);
 VAR_52 = FUNC_16(VAR_48, VAR_4);




 if (FUNC_27(VAR_48, VAR_20) ||
     FUNC_27(VAR_48, VAR_23)) {
  VAR_54 = FUNC_2(VAR_48, 49);
  FUNC_30(&VAR_54, VAR_1, 0);
  FUNC_3(VAR_48, 49, VAR_54);
 }
}
