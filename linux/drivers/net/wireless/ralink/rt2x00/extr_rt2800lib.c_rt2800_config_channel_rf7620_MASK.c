
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {int flags; TYPE_1__ default_ant; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int rx_calibration_bw40; int tx_calibration_bw40; int rx_calibration_bw20; int tx_calibration_bw20; } ;
struct rf_channel {int rf1; int rf2; int rf3; int rf4; int channel; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int,int) ;
 int FUNC_6 (struct rt2x00_dev*,int,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_13,
      struct ieee80211_conf *VAR_14,
      struct rf_channel *VAR_15,
      struct channel_info *VAR_16)
{
 struct rt2800_drv_data *VAR_17 = VAR_13->drv_data;
 u8 VAR_18, VAR_19;
 u8 VAR_20;





 VAR_20 = FUNC_2(VAR_13, 13);
 FUNC_7(&VAR_20, VAR_1,
     FUNC_1(VAR_13) ? 3 : 0);
 FUNC_4(VAR_13, 13, VAR_20);





 VAR_20 = FUNC_2(VAR_13, 20);
 VAR_20 = (VAR_15->rf1 & 0x00ff);
 FUNC_4(VAR_13, 20, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 21);
 FUNC_7(&VAR_20, VAR_6, 0);
 FUNC_4(VAR_13, 21, VAR_20);




 VAR_20 = FUNC_2(VAR_13, 16);
 FUNC_7(&VAR_20, VAR_2, 0);
 FUNC_4(VAR_13, 16, VAR_20);




 VAR_20 = FUNC_2(VAR_13, 22);
 FUNC_7(&VAR_20, VAR_8, 0);
 FUNC_4(VAR_13, 22, VAR_20);






 VAR_20 = FUNC_2(VAR_13, 17);
 VAR_20 = VAR_15->rf2;
 FUNC_4(VAR_13, 17, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 18);
 VAR_20 = VAR_15->rf3;
 FUNC_4(VAR_13, 18, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 19);
 FUNC_7(&VAR_20, VAR_4, VAR_15->rf4);
 FUNC_4(VAR_13, 19, VAR_20);


 VAR_20 = FUNC_2(VAR_13, 16);
 FUNC_7(&VAR_20, VAR_3, 0x80);
 FUNC_4(VAR_13, 16, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 21);
 FUNC_7(&VAR_20, VAR_7, 1);
 FUNC_4(VAR_13, 21, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 1);
 FUNC_7(&VAR_20, VAR_5,
     VAR_13->default_ant.tx_chain_num != 1);
 FUNC_4(VAR_13, 1, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 2);
 FUNC_7(&VAR_20, VAR_11,
     VAR_13->default_ant.tx_chain_num != 1);
 FUNC_7(&VAR_20, VAR_10,
     VAR_13->default_ant.rx_chain_num != 1);
 FUNC_4(VAR_13, 2, VAR_20);

 VAR_20 = FUNC_2(VAR_13, 42);
 FUNC_7(&VAR_20, VAR_12,
     VAR_13->default_ant.tx_chain_num != 1);
 FUNC_4(VAR_13, 42, VAR_20);


 if (FUNC_0(VAR_14)) {
  FUNC_6(VAR_13, 6, 0x10);
  FUNC_6(VAR_13, 7, 0x10);
  FUNC_6(VAR_13, 8, 0x04);
  FUNC_6(VAR_13, 58, 0x10);
  FUNC_6(VAR_13, 59, 0x10);
 } else {
  FUNC_6(VAR_13, 6, 0x20);
  FUNC_6(VAR_13, 7, 0x20);
  FUNC_6(VAR_13, 8, 0x00);
  FUNC_6(VAR_13, 58, 0x20);
  FUNC_6(VAR_13, 59, 0x20);
 }

 if (FUNC_0(VAR_14)) {
  FUNC_6(VAR_13, 58, 0x08);
  FUNC_6(VAR_13, 59, 0x08);
 } else {
  FUNC_6(VAR_13, 58, 0x28);
  FUNC_6(VAR_13, 59, 0x28);
 }

 VAR_20 = FUNC_2(VAR_13, 28);
 FUNC_7(&VAR_20, VAR_9,
     FUNC_0(VAR_14) && (VAR_15->channel == 11));
 FUNC_4(VAR_13, 28, VAR_20);

 if (!FUNC_8(VAR_0, &VAR_13->flags)) {
  if (FUNC_0(VAR_14)) {
   VAR_18 = VAR_17->rx_calibration_bw40;
   VAR_19 = VAR_17->tx_calibration_bw40;
  } else {
   VAR_18 = VAR_17->rx_calibration_bw20;
   VAR_19 = VAR_17->tx_calibration_bw20;
  }
  VAR_20 = FUNC_3(VAR_13, 5, 6);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_18;
  FUNC_5(VAR_13, 5, 6, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 5, 7);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_18;
  FUNC_5(VAR_13, 5, 7, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 7, 6);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_18;
  FUNC_5(VAR_13, 7, 6, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 7, 7);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_18;
  FUNC_5(VAR_13, 7, 7, VAR_20);

  VAR_20 = FUNC_3(VAR_13, 5, 58);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_19;
  FUNC_5(VAR_13, 5, 58, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 5, 59);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_19;
  FUNC_5(VAR_13, 5, 59, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 7, 58);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_19;
  FUNC_5(VAR_13, 7, 58, VAR_20);
  VAR_20 = FUNC_3(VAR_13, 7, 59);
  VAR_20 &= (~0x3F);
  VAR_20 |= VAR_19;
  FUNC_5(VAR_13, 7, 59, VAR_20);
 }
}
