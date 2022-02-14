
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; } ;
struct rf_channel {int channel; int rf1; int rf3; } ;
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
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;
 int FUNC_6 (struct rt2x00_dev*,char*,int,int,int,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_10,
      struct ieee80211_conf *VAR_11,
      struct rf_channel *VAR_12,
      struct channel_info *VAR_13)
{
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16, VAR_17, VAR_18;

 const bool VAR_19 = 0;



 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 6, 0x40);
 else if (VAR_12->channel < 132)
  FUNC_5(VAR_10, 6, 0x80);
 else
  FUNC_5(VAR_10, 6, 0x40);

 FUNC_5(VAR_10, 8, VAR_12->rf1);
 FUNC_5(VAR_10, 9, VAR_12->rf3);

 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 11, 0x46);
 else
  FUNC_5(VAR_10, 11, 0x48);

 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 12, 0x1a);
 else
  FUNC_5(VAR_10, 12, 0x52);

 FUNC_5(VAR_10, 13, 0x12);

 VAR_14 = FUNC_4(VAR_10, 1);
 FUNC_7(&VAR_14, VAR_2, 0);
 FUNC_7(&VAR_14, VAR_5, 0);
 FUNC_7(&VAR_14, VAR_3, 0);
 FUNC_7(&VAR_14, VAR_6, 0);
 FUNC_7(&VAR_14, VAR_4, 0);
 FUNC_7(&VAR_14, VAR_7, 0);
 FUNC_7(&VAR_14, VAR_1, 1);
 FUNC_7(&VAR_14, VAR_0, 1);

 switch (VAR_10->default_ant.tx_chain_num) {
 case 3:
  FUNC_7(&VAR_14, VAR_7, 1);

 case 2:
  FUNC_7(&VAR_14, VAR_6, 1);

 case 1:
  FUNC_7(&VAR_14, VAR_5, 1);
  break;
 }

 switch (VAR_10->default_ant.rx_chain_num) {
 case 3:
  FUNC_7(&VAR_14, VAR_4, 1);

 case 2:
  FUNC_7(&VAR_14, VAR_3, 1);

 case 1:
  FUNC_7(&VAR_14, VAR_2, 1);
  break;
 }
 FUNC_5(VAR_10, 1, VAR_14);

 FUNC_3(VAR_10);

 VAR_14 = FUNC_4(VAR_10, 30);
 if (!FUNC_0(VAR_11))
  VAR_14 &= ~(0x06);
 else
  VAR_14 |= 0x06;
 FUNC_5(VAR_10, 30, VAR_14);

 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 31, 0xa0);
 else
  FUNC_5(VAR_10, 31, 0x80);

 if (FUNC_0(VAR_11))
  FUNC_5(VAR_10, 32, 0x80);
 else
  FUNC_5(VAR_10, 32, 0xd8);

 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 34, 0x3c);
 else
  FUNC_5(VAR_10, 34, 0x20);


 VAR_14 = FUNC_4(VAR_10, 36);
 if (VAR_12->channel <= 14)
  FUNC_7(&VAR_14, VAR_8, 1);
 else
  FUNC_7(&VAR_14, VAR_8, 0);
 FUNC_5(VAR_10, 36, VAR_14);

 if (VAR_12->channel <= 14)
  VAR_14 = 0x23;
 else if (VAR_12->channel < 100)
  VAR_14 = 0x36;
 else if (VAR_12->channel < 132)
  VAR_14 = 0x32;
 else
  VAR_14 = 0x30;

 if (VAR_19)
  VAR_14 |= 0x40;

 FUNC_5(VAR_10, 39, VAR_14);

 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 44, 0x93);
 else
  FUNC_5(VAR_10, 44, 0x9b);

 if (VAR_12->channel <= 14)
  VAR_14 = 0xbb;
 else if (VAR_12->channel < 100)
  VAR_14 = 0xeb;
 else if (VAR_12->channel < 132)
  VAR_14 = 0xb3;
 else
  VAR_14 = 0x9b;
 FUNC_5(VAR_10, 45, VAR_14);

 if (VAR_12->channel <= 14)
  VAR_14 = 0x8e;
 else
  VAR_14 = 0x8a;

 if (VAR_19)
  VAR_14 |= 0x20;

 FUNC_5(VAR_10, 49, VAR_14);

 FUNC_5(VAR_10, 50, 0x86);

 VAR_14 = FUNC_4(VAR_10, 51);
 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 51, 0x75);
 else
  FUNC_5(VAR_10, 51, 0x51);

 VAR_14 = FUNC_4(VAR_10, 52);
 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 52, 0x45);
 else
  FUNC_5(VAR_10, 52, 0x05);

 if (VAR_12->channel <= 14) {
  VAR_16 = VAR_13->default_power1 & 0x1f;
  VAR_17 = VAR_13->default_power2 & 0x1f;
  VAR_18 = VAR_13->default_power3 & 0x1f;
 } else {
  VAR_16 = 0x48 | ((VAR_13->default_power1 & 0x18) << 1) |
   (VAR_13->default_power1 & 0x7);
  VAR_17 = 0x48 | ((VAR_13->default_power2 & 0x18) << 1) |
   (VAR_13->default_power2 & 0x7);
  VAR_18 = 0x48 | ((VAR_13->default_power3 & 0x18) << 1) |
   (VAR_13->default_power3 & 0x7);
 }

 FUNC_5(VAR_10, 53, VAR_16);
 FUNC_5(VAR_10, 54, VAR_17);
 FUNC_5(VAR_10, 55, VAR_18);

 FUNC_6(VAR_10, "Channel:%d, pwr1:%02x, pwr2:%02x, pwr3:%02x\n",
     VAR_12->channel, VAR_16, VAR_17, VAR_18);

 VAR_15 = (VAR_13->default_power1 >> 5) |
       ((VAR_13->default_power2 & 0xe0) >> 1);
 FUNC_2(VAR_10, 109, VAR_15);

 VAR_15 = FUNC_1(VAR_10, 110);
 VAR_15 &= 0x0f;
 VAR_15 |= (VAR_13->default_power3 & 0xe0) >> 1;
 FUNC_2(VAR_10, 110, VAR_15);

 VAR_14 = FUNC_4(VAR_10, 57);
 if (VAR_12->channel <= 14)
  FUNC_5(VAR_10, 57, 0x6e);
 else
  FUNC_5(VAR_10, 57, 0x3e);


 VAR_14 = FUNC_4(VAR_10, 3);
 FUNC_7(&VAR_14, VAR_9, 1);
 FUNC_5(VAR_10, 3, VAR_14);

 FUNC_8(2000);

 VAR_15 = FUNC_1(VAR_10, 49);

 FUNC_2(VAR_10, 49, VAR_15 & 0xfe);
 FUNC_2(VAR_10, 49, VAR_15);


}
