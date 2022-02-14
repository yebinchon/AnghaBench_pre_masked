
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int bbp25; int bbp26; int calibration_bw20; int calibration_bw40; } ;
struct rf_channel {int channel; int rf1; int rf3; int rf2; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {int default_power1; int default_power2; int default_power3; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
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
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (int*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_39,
      struct ieee80211_conf *VAR_40,
      struct rf_channel *VAR_41,
      struct channel_info *VAR_42)
{
 struct rt2800_drv_data *VAR_43 = VAR_39->drv_data;
 u8 VAR_44;
 u8 VAR_45;
 u8 VAR_46;
 u8 VAR_47;
 const bool VAR_48 = 0;


 VAR_47 = FUNC_1(VAR_39, 109);
 FUNC_8(&VAR_47, VAR_0, 0);
 FUNC_8(&VAR_47, VAR_1, 0);
 FUNC_2(VAR_39, 109, VAR_47);

 VAR_47 = FUNC_1(VAR_39, 110);
 FUNC_8(&VAR_47, VAR_2, 0);
 FUNC_2(VAR_39, 110, VAR_47);

 if (VAR_41->channel <= 14) {

  FUNC_2(VAR_39, 25, VAR_43->bbp25);
  FUNC_2(VAR_39, 26, VAR_43->bbp26);
 } else {



  FUNC_2(VAR_39, 25, 0x09);

  FUNC_2(VAR_39, 26, 0xff);
 }

 FUNC_5(VAR_39, 8, VAR_41->rf1);
 FUNC_5(VAR_39, 9, VAR_41->rf3 & 0xf);

 VAR_46 = FUNC_4(VAR_39, 11);
 FUNC_8(&VAR_46, VAR_5, (VAR_41->rf2 & 0x3));
 FUNC_5(VAR_39, 11, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 11);
 FUNC_8(&VAR_46, VAR_3, 1);
 if (VAR_41->channel <= 14)
  FUNC_8(&VAR_46, VAR_4, 1);
 else
  FUNC_8(&VAR_46, VAR_4, 2);
 FUNC_5(VAR_39, 11, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 53);
 if (VAR_41->channel <= 14) {
  VAR_46 = 0;
  FUNC_8(&VAR_46, VAR_34,
      VAR_42->default_power1 & 0x1f);
 } else {
  if (FUNC_7(VAR_39))
   VAR_46 = 0x40;

  FUNC_8(&VAR_46, VAR_34,
      ((VAR_42->default_power1 & 0x18) << 1) |
      (VAR_42->default_power1 & 7));
 }
 FUNC_5(VAR_39, 53, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 55);
 if (VAR_41->channel <= 14) {
  VAR_46 = 0;
  FUNC_8(&VAR_46, VAR_36,
      VAR_42->default_power2 & 0x1f);
 } else {
  if (FUNC_7(VAR_39))
   VAR_46 = 0x40;

  FUNC_8(&VAR_46, VAR_36,
      ((VAR_42->default_power2 & 0x18) << 1) |
      (VAR_42->default_power2 & 7));
 }
 FUNC_5(VAR_39, 55, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 54);
 if (VAR_41->channel <= 14) {
  VAR_46 = 0;
  FUNC_8(&VAR_46, VAR_35,
      VAR_42->default_power3 & 0x1f);
 } else {
  if (FUNC_7(VAR_39))
   VAR_46 = 0x40;

  FUNC_8(&VAR_46, VAR_35,
      ((VAR_42->default_power3 & 0x18) << 1) |
      (VAR_42->default_power3 & 7));
 }
 FUNC_5(VAR_39, 54, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 1);
 FUNC_8(&VAR_46, VAR_8, 0);
 FUNC_8(&VAR_46, VAR_11, 0);
 FUNC_8(&VAR_46, VAR_9, 0);
 FUNC_8(&VAR_46, VAR_12, 0);
 FUNC_8(&VAR_46, VAR_10, 0);
 FUNC_8(&VAR_46, VAR_13, 0);
 FUNC_8(&VAR_46, VAR_7, 1);
 FUNC_8(&VAR_46, VAR_6, 1);

 switch (VAR_39->default_ant.tx_chain_num) {
 case 3:
  FUNC_8(&VAR_46, VAR_13, 1);

 case 2:
  FUNC_8(&VAR_46, VAR_12, 1);

 case 1:
  FUNC_8(&VAR_46, VAR_11, 1);
  break;
 }

 switch (VAR_39->default_ant.rx_chain_num) {
 case 3:
  FUNC_8(&VAR_46, VAR_10, 1);

 case 2:
  FUNC_8(&VAR_46, VAR_9, 1);

 case 1:
  FUNC_8(&VAR_46, VAR_8, 1);
  break;
 }
 FUNC_5(VAR_39, 1, VAR_46);

 FUNC_3(VAR_39);

 if (FUNC_0(VAR_40)) {
  VAR_44 = FUNC_6(VAR_43->calibration_bw40,
      VAR_14);
  VAR_45 = FUNC_6(VAR_43->calibration_bw40,
           VAR_15);
 } else {
  VAR_44 = FUNC_6(VAR_43->calibration_bw20,
      VAR_14);
  VAR_45 = FUNC_6(VAR_43->calibration_bw20,
           VAR_15);
 }




 VAR_46 = FUNC_4(VAR_39, 32);
 FUNC_8(&VAR_46, VAR_19, VAR_44);

 if (VAR_41->channel <= 14)
  VAR_46 = 0xa0;
 else
  VAR_46 = 0x80;
 FUNC_5(VAR_39, 31, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 30);
 FUNC_8(&VAR_46, VAR_18, VAR_45);
 FUNC_8(&VAR_46, VAR_16, VAR_45);
 FUNC_5(VAR_39, 30, VAR_46);


 VAR_46 = FUNC_4(VAR_39, 36);
 if (VAR_41->channel <= 14)
  FUNC_8(&VAR_46, VAR_20, 1);
 else
  FUNC_8(&VAR_46, VAR_20, 0);
 FUNC_5(VAR_39, 36, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 34);
 if (VAR_41->channel <= 14)
  VAR_46 = 0x3c;
 else
  VAR_46 = 0x20;
 FUNC_5(VAR_39, 34, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 12);
 if (VAR_41->channel <= 14)
  VAR_46 = 0x1a;
 else
  VAR_46 = 0x12;
 FUNC_5(VAR_39, 12, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 6);
 if (VAR_41->channel >= 1 && VAR_41->channel <= 14)
  FUNC_8(&VAR_46, VAR_38, 1);
 else if (VAR_41->channel >= 36 && VAR_41->channel <= 64)
  FUNC_8(&VAR_46, VAR_38, 2);
 else if (VAR_41->channel >= 100 && VAR_41->channel <= 128)
  FUNC_8(&VAR_46, VAR_38, 2);
 else
  FUNC_8(&VAR_46, VAR_38, 1);
 FUNC_5(VAR_39, 6, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 30);
 FUNC_8(&VAR_46, VAR_17, 2);
 FUNC_5(VAR_39, 30, VAR_46);

 FUNC_5(VAR_39, 46, 0x60);

 if (VAR_41->channel <= 14) {
  FUNC_5(VAR_39, 10, 0xd3);
  FUNC_5(VAR_39, 13, 0x12);
 } else {
  FUNC_5(VAR_39, 10, 0xd8);
  FUNC_5(VAR_39, 13, 0x23);
 }

 VAR_46 = FUNC_4(VAR_39, 51);
 FUNC_8(&VAR_46, VAR_31, 1);
 FUNC_5(VAR_39, 51, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 51);
 if (VAR_41->channel <= 14) {
  FUNC_8(&VAR_46, VAR_32, 5);
  FUNC_8(&VAR_46, VAR_33, 3);
 } else {
  FUNC_8(&VAR_46, VAR_32, 4);
  FUNC_8(&VAR_46, VAR_33, 2);
 }
 FUNC_5(VAR_39, 51, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 49);
 if (VAR_41->channel <= 14)
  FUNC_8(&VAR_46, VAR_29, 3);
 else
  FUNC_8(&VAR_46, VAR_29, 2);

 if (VAR_48)
  FUNC_8(&VAR_46, VAR_28, 1);

 FUNC_5(VAR_39, 49, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 50);
 FUNC_8(&VAR_46, VAR_30, 0);
 FUNC_5(VAR_39, 50, VAR_46);

 VAR_46 = FUNC_4(VAR_39, 57);
 if (VAR_41->channel <= 14)
  FUNC_8(&VAR_46, VAR_37, 0x1b);
 else
  FUNC_8(&VAR_46, VAR_37, 0x0f);
 FUNC_5(VAR_39, 57, VAR_46);

 if (VAR_41->channel <= 14) {
  FUNC_5(VAR_39, 44, 0x93);
  FUNC_5(VAR_39, 52, 0x45);
 } else {
  FUNC_5(VAR_39, 44, 0x9b);
  FUNC_5(VAR_39, 52, 0x05);
 }


 VAR_46 = FUNC_4(VAR_39, 3);
 if (VAR_41->channel <= 14) {
  FUNC_8(&VAR_46, VAR_27, 1);
 } else {
  FUNC_8(&VAR_46, VAR_22, 1);
  FUNC_8(&VAR_46, VAR_23, 1);
  FUNC_8(&VAR_46, VAR_24, 1);
  FUNC_8(&VAR_46, VAR_25, 1);
  FUNC_8(&VAR_46, VAR_26, 1);
  FUNC_8(&VAR_46, VAR_27, 1);
 }
 FUNC_5(VAR_39, 3, VAR_46);

 if (VAR_41->channel >= 1 && VAR_41->channel <= 14) {
  VAR_46 = 0x23;
  if (VAR_48)
   FUNC_8(&VAR_46, VAR_21, 1);
  FUNC_5(VAR_39, 39, VAR_46);

  FUNC_5(VAR_39, 45, 0xbb);
 } else if (VAR_41->channel >= 36 && VAR_41->channel <= 64) {
  VAR_46 = 0x36;
  if (VAR_48)
   FUNC_8(&VAR_46, VAR_21, 1);
  FUNC_5(VAR_39, 39, 0x36);

  FUNC_5(VAR_39, 45, 0xeb);
 } else if (VAR_41->channel >= 100 && VAR_41->channel <= 128) {
  VAR_46 = 0x32;
  if (VAR_48)
   FUNC_8(&VAR_46, VAR_21, 1);
  FUNC_5(VAR_39, 39, VAR_46);

  FUNC_5(VAR_39, 45, 0xb3);
 } else {
  VAR_46 = 0x30;
  if (VAR_48)
   FUNC_8(&VAR_46, VAR_21, 1);
  FUNC_5(VAR_39, 39, VAR_46);

  FUNC_5(VAR_39, 45, 0x9b);
 }
}
