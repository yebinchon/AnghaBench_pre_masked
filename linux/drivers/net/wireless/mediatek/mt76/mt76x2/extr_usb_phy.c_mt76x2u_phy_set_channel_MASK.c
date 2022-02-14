
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int mcu_gain; } ;
struct TYPE_8__ {int channel_cal_done; int init_cal_done; int tssi_cal_done; TYPE_1__ rx; } ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct TYPE_7__ {TYPE_2__ chandef; int state; } ;
struct mt76x02_dev {int cal_work; TYPE_4__ cal; TYPE_3__ mt76; } ;
struct ieee80211_channel {int hw_value; int center_freq; scalar_t__ band; } ;
struct cfg80211_chan_def {int center_freq1; int width; struct ieee80211_channel* chan; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
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
 scalar_t__ VAR_20 ;


 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int) ;
 int FUNC_10 (struct mt76x02_dev*,int ) ;
 scalar_t__ FUNC_11 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_12 (struct mt76x02_dev*) ;
 int FUNC_13 (struct mt76x02_dev*,int ,int) ;
 int FUNC_14 (struct mt76x02_dev*,scalar_t__,int) ;
 int FUNC_15 (struct mt76x02_dev*,int ,int) ;
 int FUNC_16 (struct mt76x02_dev*) ;
 int FUNC_17 (struct mt76x02_dev*,scalar_t__,int) ;
 int FUNC_18 (struct mt76x02_dev*,int,int ,int) ;
 int FUNC_19 (struct mt76x02_dev*,int,int,int,int) ;
 int FUNC_20 (struct mt76x02_dev*) ;
 int FUNC_21 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_22 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_23 (struct mt76x02_dev*) ;
 int FUNC_24 (struct mt76x02_dev*,int) ;
 scalar_t__ FUNC_25 (struct mt76x02_dev*) ;
 int FUNC_26 (int ,int *) ;

int FUNC_27(struct mt76x02_dev *VAR_23,
       struct cfg80211_chan_def *VAR_24)
{
 u32 VAR_25[4] = {
  [0] = FUNC_1(VAR_10, 0) |
        FUNC_1(VAR_11, 1) |
        FUNC_1(VAR_12, 2) |
        FUNC_1(VAR_13, 3) |
        FUNC_1(VAR_14, FUNC_0(0)),
  [1] = FUNC_1(VAR_10, 1) |
        FUNC_1(VAR_11, 0) |
        FUNC_1(VAR_12, 2) |
        FUNC_1(VAR_13, 3) |
        FUNC_1(VAR_14, FUNC_0(1)),
  [2] = FUNC_1(VAR_10, 2) |
        FUNC_1(VAR_11, 3) |
        FUNC_1(VAR_12, 1) |
        FUNC_1(VAR_13, 0) |
        FUNC_1(VAR_14, FUNC_0(2)),
  [3] = FUNC_1(VAR_10, 3) |
        FUNC_1(VAR_11, 2) |
        FUNC_1(VAR_12, 1) |
        FUNC_1(VAR_13, 0) |
        FUNC_1(VAR_14, FUNC_0(3)),
 };
 bool VAR_26 = FUNC_26(VAR_6, &VAR_23->mt76.state);
 struct ieee80211_channel *VAR_27 = VAR_24->chan;
 u8 VAR_28 = VAR_27->hw_value, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34;

 VAR_23->cal.channel_cal_done = 0;
 VAR_32 = VAR_24->chan->center_freq;
 VAR_33 = VAR_24->center_freq1;

 switch (VAR_24->width) {
 case 129:
  VAR_29 = 1;
  if (VAR_33 > VAR_32) {
   VAR_30 = 1;
   VAR_31 = 0;
  } else {
   VAR_30 = 3;
   VAR_31 = 1;
  }
  VAR_28 += 2 - VAR_31 * 4;
  break;
 case 128:
  VAR_31 = (VAR_32 - VAR_33 + 30) / 20;
  if (FUNC_3(VAR_31 < 0 || VAR_31 > 3))
   VAR_31 = 0;
  VAR_29 = 2;
  VAR_30 = VAR_31;
  VAR_28 += 6 - VAR_31 * 4;
  break;
 default:
  VAR_29 = 0;
  VAR_30 = 0;
  VAR_31 = 0;
  break;
 }

 FUNC_22(VAR_23);
 FUNC_21(VAR_23, VAR_27->band);
 FUNC_17(VAR_23, VAR_27->band, VAR_29);
 FUNC_20(VAR_23);

 FUNC_14(VAR_23, VAR_27->band, VAR_31 & 1);
 FUNC_15(VAR_23, VAR_24->width, VAR_31);

 FUNC_6(VAR_23, VAR_9,
   (VAR_10 |
    VAR_11 |
    VAR_12 |
    VAR_13 |
    VAR_14),
   VAR_25[VAR_31]);

 VAR_34 = FUNC_19(VAR_23, VAR_28, VAR_29, VAR_30, VAR_26);
 if (VAR_34)
  return VAR_34;

 FUNC_18(VAR_23, VAR_28, VAR_23->cal.rx.mcu_gain, 1);


 if (FUNC_25(VAR_23) >= VAR_5)
  FUNC_8(VAR_23, FUNC_2(VAR_21, 13), FUNC_0(10));

 if (!VAR_23->cal.init_cal_done) {
  u8 VAR_35 = FUNC_10(VAR_23, VAR_8);

  if (VAR_35 != 0xff)
   FUNC_13(VAR_23, VAR_1, 0);
 }

 FUNC_13(VAR_23, VAR_3, VAR_28);


 if (!VAR_23->cal.init_cal_done)
  FUNC_13(VAR_23, VAR_2, 0);
 VAR_23->cal.init_cal_done = 1;

 FUNC_9(VAR_23, FUNC_2(VAR_0, 61), 0xff64a4e2);
 FUNC_9(VAR_23, FUNC_2(VAR_0, 7), 0x08081010);
 FUNC_9(VAR_23, FUNC_2(VAR_0, 11), 0x00000404);
 FUNC_9(VAR_23, FUNC_2(VAR_0, 2), 0x00007070);
 FUNC_9(VAR_23, VAR_15, 0X04101b3f);

 FUNC_8(VAR_23, FUNC_2(VAR_22, 4), FUNC_0(25));
 FUNC_8(VAR_23, FUNC_2(VAR_21, 13), FUNC_0(8));

 if (VAR_26)
  return 0;

 FUNC_24(VAR_23, 1);
 FUNC_12(VAR_23);

 if (FUNC_23(VAR_23)) {

  FUNC_7(VAR_23, VAR_16, VAR_17,
          0x38);
  FUNC_7(VAR_23, VAR_18, VAR_19,
          0x38);


  if (!FUNC_16(VAR_23)) {
   struct ieee80211_channel *VAR_36;
   u32 VAR_37 = 0;

   VAR_36 = VAR_23->mt76.chandef.chan;
   if (VAR_36->band == VAR_20)
    VAR_37 |= FUNC_0(0);
   if (FUNC_11(VAR_23, VAR_36->band))
    VAR_37 |= FUNC_0(8);
   FUNC_13(VAR_23, VAR_4, VAR_37);
   VAR_23->cal.tssi_cal_done = 1;
  }
 }

 FUNC_4(FUNC_5(VAR_23), &VAR_23->cal_work,
         VAR_7);
 return 0;
}
