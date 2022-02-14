
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int hw; int state; } ;
struct mt76x02_dev {int cal_work; TYPE_2__ mt76; } ;
struct cfg80211_chan_def {int center_freq1; int const width; TYPE_1__* chan; } ;
struct TYPE_3__ {int center_freq; int hw_value; int band; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int) ;
 scalar_t__ FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int,int) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int) ;
 int FUNC_10 (struct mt76x02_dev*,int ,int) ;
 int FUNC_11 (struct mt76x02_dev*) ;
 int FUNC_12 (struct mt76x02_dev*,int ,int) ;
 int FUNC_13 (struct mt76x02_dev*,int const,int) ;
 int FUNC_14 (struct mt76x02_dev*,int const) ;
 int FUNC_15 (struct mt76x02_dev*,int) ;
 int FUNC_16 (struct mt76x02_dev*,int ) ;
 int FUNC_17 (struct mt76x02_dev*,int ) ;
 int FUNC_18 (struct mt76x02_dev*,int,int ) ;
 int FUNC_19 (struct mt76x02_dev*) ;
 int FUNC_20 (struct mt76x02_dev*) ;
 int FUNC_21 (struct mt76x02_dev*,int ,int) ;
 int FUNC_22 (int ,int *) ;

void FUNC_23(struct mt76x02_dev *VAR_15,
       struct cfg80211_chan_def *VAR_16)
{
 u32 VAR_17[4] = {
  [0] = FUNC_1(VAR_4, 0) |
        FUNC_1(VAR_5, 1) |
        FUNC_1(VAR_6, 2) |
        FUNC_1(VAR_7, 3) |
        FUNC_1(VAR_8, FUNC_0(0)),
  [1] = FUNC_1(VAR_4, 1) |
        FUNC_1(VAR_5, 0) |
        FUNC_1(VAR_6, 2) |
        FUNC_1(VAR_7, 3) |
        FUNC_1(VAR_8, FUNC_0(1)),
  [2] = FUNC_1(VAR_4, 2) |
        FUNC_1(VAR_5, 3) |
        FUNC_1(VAR_6, 1) |
        FUNC_1(VAR_7, 0) |
        FUNC_1(VAR_8, FUNC_0(2)),
  [3] = FUNC_1(VAR_4, 3) |
        FUNC_1(VAR_5, 2) |
        FUNC_1(VAR_6, 1) |
        FUNC_1(VAR_7, 0) |
        FUNC_1(VAR_8, FUNC_0(3)),
 };
 bool VAR_18 = FUNC_22(VAR_1, &VAR_15->mt76.state);
 int VAR_19, VAR_20, VAR_21;
 u8 VAR_22;
 u32 VAR_23;
 u16 VAR_24;

 VAR_20 = VAR_16->chan->center_freq;
 VAR_21 = VAR_16->center_freq1;
 VAR_22 = VAR_16->chan->hw_value;
 VAR_24 = (VAR_22 <= 14) ? VAR_14 : VAR_10;

 switch (VAR_16->width) {
 case 129:
  if (VAR_21 > VAR_20)
   VAR_19 = 0;
  else
   VAR_19 = 1;
  VAR_22 += 2 - VAR_19 * 4;
  VAR_24 |= VAR_12;
  break;
 case 128:
  VAR_19 = (VAR_20 - VAR_21 + 30) / 20;
  if (FUNC_4(VAR_19 < 0 || VAR_19 > 3))
   VAR_19 = 0;
  VAR_22 += 6 - VAR_19 * 4;
  VAR_24 |= VAR_13;
  break;
 default:
  VAR_19 = 0;
  VAR_24 |= VAR_11;
  break;
 }

 if (FUNC_7(VAR_15)) {
  FUNC_14(VAR_15, VAR_16->width);
 } else {
  if (VAR_16->width == 128 ||
      VAR_16->width == 129)
   VAR_23 = 0x201;
  else
   VAR_23 = 0x601;
  FUNC_10(VAR_15, VAR_9, VAR_23);
 }
 FUNC_13(VAR_15, VAR_16->width, VAR_19);
 FUNC_12(VAR_15, VAR_16->chan->band,
        VAR_19 & 1);

 FUNC_8(VAR_15, VAR_3,
   (VAR_4 |
    VAR_5 |
    VAR_6 |
    VAR_7 |
    VAR_8),
   VAR_17[VAR_19]);

 FUNC_16(VAR_15, VAR_16->chan->band);
 FUNC_18(VAR_15, VAR_22, VAR_24);


 if (VAR_22 == 14)
  FUNC_9(VAR_15, FUNC_2(VAR_0, 1), 0x20);
 else
  FUNC_6(VAR_15, FUNC_2(VAR_0, 1), 0x20);

 FUNC_20(VAR_15);
 FUNC_17(VAR_15, VAR_24);


 FUNC_21(VAR_15, FUNC_3(0, 4), FUNC_0(7));
 if (VAR_18)
  return;

 FUNC_11(VAR_15);
 FUNC_15(VAR_15, 0);
 FUNC_19(VAR_15);

 FUNC_5(VAR_15->mt76.hw, &VAR_15->cal_work,
         VAR_2);
}
