
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mt76_reg_pair {int member_0; scalar_t__ value; int member_1; } ;
struct mt7601u_rate_power {TYPE_3__* cck; TYPE_2__* ofdm; } ;
struct cfg80211_chan_def {scalar_t__ width; struct ieee80211_channel* chan; } ;
struct mt7601u_dev {scalar_t__ bw; int chan_ext_below; struct cfg80211_chan_def chandef; int state; TYPE_1__* ee; int dev; } ;
struct ieee80211_channel {int hw_value; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_6__ {int bw20; } ;
struct TYPE_5__ {int bw20; } ;
struct TYPE_4__ {int* chan_pwr; struct mt7601u_rate_power power_rate_table; int lna_gain; } ;


 int FUNC_0 (struct mt76_reg_pair*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct cfg80211_chan_def*) ;
 int FUNC_2 (int ,char*,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mt7601u_dev*) ;
 int FUNC_6 (struct mt7601u_dev*,int) ;
 int FUNC_7 (struct mt7601u_dev*,scalar_t__) ;
 int FUNC_8 (struct mt7601u_dev*,int) ;
 int FUNC_9 (struct mt7601u_dev*,int) ;
 int FUNC_10 (struct mt7601u_dev*,int ,int,int) ;
 int FUNC_11 (struct mt7601u_dev*,int) ;
 int FUNC_12 (struct mt7601u_dev*) ;
 int FUNC_13 (struct mt7601u_dev*,int ,int) ;
 int FUNC_14 (struct mt7601u_dev*,int ,struct mt76_reg_pair*,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct mt7601u_dev *VAR_11,
         struct cfg80211_chan_def *VAR_12)
{

 static const u8 VAR_13[14][4] = {
  { 0x99, 0x99, 0x09, 0x50 },
  { 0x46, 0x44, 0x0a, 0x50 },
  { 0xec, 0xee, 0x0a, 0x50 },
  { 0x99, 0x99, 0x0b, 0x50 },
  { 0x46, 0x44, 0x08, 0x51 },
  { 0xec, 0xee, 0x08, 0x51 },
  { 0x99, 0x99, 0x09, 0x51 },
  { 0x46, 0x44, 0x0a, 0x51 },
  { 0xec, 0xee, 0x0a, 0x51 },
  { 0x99, 0x99, 0x0b, 0x51 },
  { 0x46, 0x44, 0x08, 0x52 },
  { 0xec, 0xee, 0x08, 0x52 },
  { 0x99, 0x99, 0x09, 0x52 },
  { 0x33, 0x33, 0x0b, 0x52 },
 };
 struct mt76_reg_pair VAR_14[4] = {
  { 17, 0 }, { 18, 0 }, { 19, 0 }, { 20, 0 },
 };
 struct mt76_reg_pair VAR_15[3] = {
  { 62, 0x37 - VAR_11->ee->lna_gain },
  { 63, 0x37 - VAR_11->ee->lna_gain },
  { 64, 0x37 - VAR_11->ee->lna_gain },
 };

 struct ieee80211_channel *VAR_16 = VAR_12->chan;
 enum nl80211_channel_type VAR_17 =
  FUNC_1(VAR_12);
 struct mt7601u_rate_power *VAR_18 = &VAR_11->ee->power_rate_table;
 int VAR_19;
 bool VAR_20;
 u8 VAR_21;
 int VAR_22, VAR_23;

 VAR_21 = VAR_2;
 VAR_20 = (VAR_17 == VAR_8);
 VAR_19 = VAR_16->hw_value - 1;

 if (VAR_12->width == VAR_10) {
  VAR_21 = VAR_3;

  if (VAR_19 > 1 && VAR_17 == VAR_8)
   VAR_19 -= 2;
  else if (VAR_19 < 12 && VAR_17 == VAR_9)
   VAR_19 += 2;
  else
   FUNC_3(VAR_11->dev, "Error: invalid 40MHz channel!!\n");
 }

 if (VAR_21 != VAR_11->bw || VAR_20 != VAR_11->chan_ext_below) {
  FUNC_2(VAR_11->dev, "Info: switching HT mode bw:%d below:%d\n",
   VAR_21, VAR_20);

  FUNC_7(VAR_11, VAR_21);

  FUNC_8(VAR_11, VAR_20);
  FUNC_9(VAR_11, VAR_20);
  VAR_11->chan_ext_below = VAR_20;
 }

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  VAR_14[VAR_22].value = VAR_13[VAR_19][VAR_22];

 VAR_23 = FUNC_14(VAR_11, VAR_5,
          VAR_14, 4);
 if (VAR_23)
  return VAR_23;

 FUNC_10(VAR_11, VAR_6, 0x3f3f,
      VAR_11->ee->chan_pwr[VAR_19] & 0x3f);

 VAR_23 = FUNC_14(VAR_11, VAR_4,
          VAR_15, FUNC_0(VAR_15));
 if (VAR_23)
  return VAR_23;

 FUNC_12(VAR_11);
 FUNC_7(VAR_11, VAR_21);
 VAR_23 = FUNC_11(VAR_11, 0);
 if (VAR_23)
  return VAR_23;

 FUNC_6(VAR_11, VAR_16->hw_value);
 FUNC_13(VAR_11, VAR_7, FUNC_4(VAR_18->ofdm[1].bw20) << 24 |
      FUNC_4(VAR_18->ofdm[0].bw20) << 16 |
      FUNC_4(VAR_18->cck[1].bw20) << 8 |
      FUNC_4(VAR_18->cck[0].bw20));

 if (FUNC_15(VAR_1, &VAR_11->state))
  FUNC_5(VAR_11);

 VAR_11->chandef = *VAR_12;

 return 0;
}
