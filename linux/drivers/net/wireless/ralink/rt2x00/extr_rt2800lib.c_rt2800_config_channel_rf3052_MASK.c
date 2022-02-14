
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {int freq_offset; TYPE_1__ default_ant; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int bbp25; int bbp26; int calibration_bw40; int calibration_bw20; int txmixer_gain_24g; int txmixer_gain_5g; } ;
struct rf_channel {int channel; int rf1; int rf3; int rf2; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {int default_power1; int default_power2; } ;


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
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_23,
      struct ieee80211_conf *VAR_24,
      struct rf_channel *VAR_25,
      struct channel_info *VAR_26)
{
 struct rt2800_drv_data *VAR_27 = VAR_23->drv_data;
 u8 VAR_28;
 u32 VAR_29;

 if (VAR_25->channel <= 14) {
  FUNC_1(VAR_23, 25, VAR_27->bbp25);
  FUNC_1(VAR_23, 26, VAR_27->bbp26);
 } else {
  FUNC_1(VAR_23, 25, 0x09);
  FUNC_1(VAR_23, 26, 0xff);
 }

 FUNC_5(VAR_23, 2, VAR_25->rf1);
 FUNC_5(VAR_23, 3, VAR_25->rf3);

 VAR_28 = FUNC_4(VAR_23, 6);
 FUNC_8(&VAR_28, VAR_16, VAR_25->rf2);
 if (VAR_25->channel <= 14)
  FUNC_8(&VAR_28, VAR_17, 2);
 else
  FUNC_8(&VAR_28, VAR_17, 1);
 FUNC_5(VAR_23, 6, VAR_28);

 VAR_28 = FUNC_4(VAR_23, 5);
 if (VAR_25->channel <= 14)
  FUNC_8(&VAR_28, VAR_15, 1);
 else
  FUNC_8(&VAR_28, VAR_15, 2);
 FUNC_5(VAR_23, 5, VAR_28);

 VAR_28 = FUNC_4(VAR_23, 12);
 if (VAR_25->channel <= 14) {
  FUNC_8(&VAR_28, VAR_3, 3);
  FUNC_8(&VAR_28, VAR_4,
      VAR_26->default_power1);
 } else {
  FUNC_8(&VAR_28, VAR_3, 7);
  FUNC_8(&VAR_28, VAR_4,
    (VAR_26->default_power1 & 0x3) |
    ((VAR_26->default_power1 & 0xC) << 1));
 }
 FUNC_5(VAR_23, 12, VAR_28);

 VAR_28 = FUNC_4(VAR_23, 13);
 if (VAR_25->channel <= 14) {
  FUNC_8(&VAR_28, VAR_5, 3);
  FUNC_8(&VAR_28, VAR_6,
      VAR_26->default_power2);
 } else {
  FUNC_8(&VAR_28, VAR_5, 7);
  FUNC_8(&VAR_28, VAR_6,
    (VAR_26->default_power2 & 0x3) |
    ((VAR_26->default_power2 & 0xC) << 1));
 }
 FUNC_5(VAR_23, 13, VAR_28);

 VAR_28 = FUNC_4(VAR_23, 1);
 FUNC_8(&VAR_28, VAR_8, 0);
 FUNC_8(&VAR_28, VAR_11, 0);
 FUNC_8(&VAR_28, VAR_9, 0);
 FUNC_8(&VAR_28, VAR_12, 0);
 FUNC_8(&VAR_28, VAR_10, 0);
 FUNC_8(&VAR_28, VAR_13, 0);
 if (FUNC_6(VAR_23)) {
  if (VAR_25->channel <= 14) {
   FUNC_8(&VAR_28, VAR_8, 1);
   FUNC_8(&VAR_28, VAR_11, 1);
  }
  FUNC_8(&VAR_28, VAR_10, 1);
  FUNC_8(&VAR_28, VAR_13, 1);
 } else {
  switch (VAR_23->default_ant.tx_chain_num) {
  case 1:
   FUNC_8(&VAR_28, VAR_12, 1);

  case 2:
   FUNC_8(&VAR_28, VAR_13, 1);
   break;
  }

  switch (VAR_23->default_ant.rx_chain_num) {
  case 1:
   FUNC_8(&VAR_28, VAR_9, 1);

  case 2:
   FUNC_8(&VAR_28, VAR_10, 1);
   break;
  }
 }
 FUNC_5(VAR_23, 1, VAR_28);

 VAR_28 = FUNC_4(VAR_23, 23);
 FUNC_8(&VAR_28, VAR_14, VAR_23->freq_offset);
 FUNC_5(VAR_23, 23, VAR_28);

 if (FUNC_0(VAR_24)) {
  FUNC_5(VAR_23, 24, VAR_27->calibration_bw40);
  FUNC_5(VAR_23, 31, VAR_27->calibration_bw40);
 } else {
  FUNC_5(VAR_23, 24, VAR_27->calibration_bw20);
  FUNC_5(VAR_23, 31, VAR_27->calibration_bw20);
 }

 if (VAR_25->channel <= 14) {
  FUNC_5(VAR_23, 7, 0xd8);
  FUNC_5(VAR_23, 9, 0xc3);
  FUNC_5(VAR_23, 10, 0xf1);
  FUNC_5(VAR_23, 11, 0xb9);
  FUNC_5(VAR_23, 15, 0x53);
  VAR_28 = 0x4c;
  FUNC_8(&VAR_28, VAR_7,
      VAR_27->txmixer_gain_24g);
  FUNC_5(VAR_23, 16, VAR_28);
  FUNC_5(VAR_23, 17, 0x23);
  FUNC_5(VAR_23, 19, 0x93);
  FUNC_5(VAR_23, 20, 0xb3);
  FUNC_5(VAR_23, 25, 0x15);
  FUNC_5(VAR_23, 26, 0x85);
  FUNC_5(VAR_23, 27, 0x00);
  FUNC_5(VAR_23, 29, 0x9b);
 } else {
  VAR_28 = FUNC_4(VAR_23, 7);
  FUNC_8(&VAR_28, VAR_18, 1);
  FUNC_8(&VAR_28, VAR_19, 0);
  FUNC_8(&VAR_28, VAR_20, 1);
  FUNC_8(&VAR_28, VAR_21, 0);
  FUNC_5(VAR_23, 7, VAR_28);
  FUNC_5(VAR_23, 9, 0xc0);
  FUNC_5(VAR_23, 10, 0xf1);
  FUNC_5(VAR_23, 11, 0x00);
  FUNC_5(VAR_23, 15, 0x43);
  VAR_28 = 0x7a;
  FUNC_8(&VAR_28, VAR_7,
      VAR_27->txmixer_gain_5g);
  FUNC_5(VAR_23, 16, VAR_28);
  FUNC_5(VAR_23, 17, 0x23);
  if (VAR_25->channel <= 64) {
   FUNC_5(VAR_23, 19, 0xb7);
   FUNC_5(VAR_23, 20, 0xf6);
   FUNC_5(VAR_23, 25, 0x3d);
  } else if (VAR_25->channel <= 128) {
   FUNC_5(VAR_23, 19, 0x74);
   FUNC_5(VAR_23, 20, 0xf4);
   FUNC_5(VAR_23, 25, 0x01);
  } else {
   FUNC_5(VAR_23, 19, 0x72);
   FUNC_5(VAR_23, 20, 0xf3);
   FUNC_5(VAR_23, 25, 0x01);
  }
  FUNC_5(VAR_23, 26, 0x87);
  FUNC_5(VAR_23, 27, 0x01);
  FUNC_5(VAR_23, 29, 0x9f);
 }

 VAR_29 = FUNC_2(VAR_23, VAR_0);
 FUNC_7(&VAR_29, VAR_1, 0);
 if (VAR_25->channel <= 14)
  FUNC_7(&VAR_29, VAR_2, 1);
 else
  FUNC_7(&VAR_29, VAR_2, 0);
 FUNC_3(VAR_23, VAR_0, VAR_29);

 VAR_28 = FUNC_4(VAR_23, 7);
 FUNC_8(&VAR_28, VAR_22, 1);
 FUNC_5(VAR_23, 7, VAR_28);
}
