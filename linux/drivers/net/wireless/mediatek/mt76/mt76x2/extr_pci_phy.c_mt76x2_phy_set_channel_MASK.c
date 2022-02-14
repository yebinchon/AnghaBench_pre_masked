
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int mcu_gain; } ;
struct TYPE_6__ {int channel_cal_done; int init_cal_done; TYPE_2__ rx; } ;
struct TYPE_4__ {int state; } ;
struct mt76x02_dev {int cal_work; TYPE_3__ cal; TYPE_1__ mt76; } ;
struct ieee80211_channel {int band; int center_freq; int hw_value; } ;
struct cfg80211_chan_def {int center_freq1; int width; struct ieee80211_channel* chan; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int) ;
 int FUNC_10 (struct mt76x02_dev*,int ) ;
 int FUNC_11 (struct mt76x02_dev*) ;
 int FUNC_12 (struct mt76x02_dev*,int ,int) ;
 int FUNC_13 (struct mt76x02_dev*,int,int) ;
 int FUNC_14 (struct mt76x02_dev*,int ,int) ;
 int FUNC_15 (struct mt76x02_dev*,int,int) ;
 int FUNC_16 (struct mt76x02_dev*,int,int ,int) ;
 int FUNC_17 (struct mt76x02_dev*,int,int,int,int) ;
 int FUNC_18 (struct mt76x02_dev*,int) ;
 int FUNC_19 (struct mt76x02_dev*) ;
 int FUNC_20 (struct mt76x02_dev*) ;
 int FUNC_21 (struct mt76x02_dev*,int) ;
 int FUNC_22 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_23 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_24 (struct mt76x02_dev*) ;
 int FUNC_25 (int ,int *) ;

int FUNC_26(struct mt76x02_dev *VAR_20,
      struct cfg80211_chan_def *VAR_21)
{
 struct ieee80211_channel *VAR_22 = VAR_21->chan;
 bool VAR_23 = FUNC_25(VAR_5, &VAR_20->mt76.state);
 enum nl80211_band VAR_24 = VAR_22->band;
 u8 VAR_25;

 u32 VAR_26[4] = {
  [0] = FUNC_1(VAR_9, 0) |
        FUNC_1(VAR_10, 1) |
        FUNC_1(VAR_11, 2) |
        FUNC_1(VAR_12, 3) |
        FUNC_1(VAR_13, FUNC_0(0)),
  [1] = FUNC_1(VAR_9, 1) |
        FUNC_1(VAR_10, 0) |
        FUNC_1(VAR_11, 2) |
        FUNC_1(VAR_12, 3) |
        FUNC_1(VAR_13, FUNC_0(1)),
  [2] = FUNC_1(VAR_9, 2) |
        FUNC_1(VAR_10, 3) |
        FUNC_1(VAR_11, 1) |
        FUNC_1(VAR_12, 0) |
        FUNC_1(VAR_13, FUNC_0(2)),
  [3] = FUNC_1(VAR_9, 3) |
        FUNC_1(VAR_10, 2) |
        FUNC_1(VAR_11, 1) |
        FUNC_1(VAR_12, 0) |
        FUNC_1(VAR_13, FUNC_0(3)),
 };
 int VAR_27;
 u8 VAR_28, VAR_29;
 int VAR_30, VAR_31;
 int VAR_32;

 VAR_20->cal.channel_cal_done = 0;
 VAR_30 = VAR_21->chan->center_freq;
 VAR_31 = VAR_21->center_freq1;
 VAR_25 = VAR_22->hw_value;

 switch (VAR_21->width) {
 case 129:
  VAR_28 = 1;
  if (VAR_31 > VAR_30) {
   VAR_29 = 1;
   VAR_27 = 0;
  } else {
   VAR_29 = 3;
   VAR_27 = 1;
  }
  VAR_25 += 2 - VAR_27 * 4;
  break;
 case 128:
  VAR_27 = (VAR_30 - VAR_31 + 30) / 20;
  if (FUNC_3(VAR_27 < 0 || VAR_27 > 3))
   VAR_27 = 0;
  VAR_28 = 2;
  VAR_29 = VAR_27;
  VAR_25 += 6 - VAR_27 * 4;
  break;
 default:
  VAR_28 = 0;
  VAR_29 = 0;
  VAR_27 = 0;
  break;
 }

 FUNC_22(VAR_20);
 FUNC_21(VAR_20, VAR_24);
 FUNC_15(VAR_20, VAR_24, VAR_28);
 FUNC_20(VAR_20);

 FUNC_13(VAR_20, VAR_22->band, VAR_27 & 1);
 FUNC_14(VAR_20, VAR_21->width, VAR_27);

 FUNC_6(VAR_20, VAR_8,
   (VAR_9 |
    VAR_10 |
    VAR_11 |
    VAR_12 |
    VAR_13),
   VAR_26[VAR_27]);

 VAR_32 = FUNC_17(VAR_20, VAR_25, VAR_28, VAR_29, VAR_23);
 if (VAR_32)
  return VAR_32;

 FUNC_16(VAR_20, VAR_25, VAR_20->cal.rx.mcu_gain, 1);

 FUNC_19(VAR_20);


 if (FUNC_24(VAR_20) >= VAR_4)
  FUNC_8(VAR_20, FUNC_2(VAR_19, 13), FUNC_0(10));

 if (!VAR_20->cal.init_cal_done) {
  u8 VAR_33 = FUNC_10(VAR_20, VAR_7);

  if (VAR_33 != 0xff)
   FUNC_12(VAR_20, VAR_1, 0);
 }

 FUNC_12(VAR_20, VAR_3, VAR_25);


 if (!VAR_20->cal.init_cal_done)
  FUNC_12(VAR_20, VAR_2, 0);

 VAR_20->cal.init_cal_done = 1;

 FUNC_9(VAR_20, FUNC_2(VAR_0, 61), 0xFF64A4E2);
 FUNC_9(VAR_20, FUNC_2(VAR_0, 7), 0x08081010);
 FUNC_9(VAR_20, FUNC_2(VAR_0, 11), 0x00000404);
 FUNC_9(VAR_20, FUNC_2(VAR_0, 2), 0x00007070);
 FUNC_9(VAR_20, VAR_14, 0x04101B3F);

 if (VAR_23)
  return 0;

 FUNC_18(VAR_20, 1);
 FUNC_11(VAR_20);


 if (FUNC_23(VAR_20)) {
  FUNC_7(VAR_20, VAR_15, VAR_16,
          0x38);
  FUNC_7(VAR_20, VAR_17, VAR_18,
          0x38);
 }

 FUNC_4(FUNC_5(VAR_20), &VAR_20->cal_work,
         VAR_6);

 return 0;
}
