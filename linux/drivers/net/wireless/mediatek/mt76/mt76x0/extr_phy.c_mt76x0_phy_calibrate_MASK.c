
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct ieee80211_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct ieee80211_channel {scalar_t__ band; int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (int,int) ;

void FUNC_9(struct mt76x02_dev *VAR_11, bool VAR_12)
{
 struct ieee80211_channel *VAR_13 = VAR_11->mt76.chandef.chan;
 int VAR_14 = (VAR_13->band == VAR_10) ? 1 : 0;
 u32 VAR_15, VAR_16, VAR_17;

 if (FUNC_1(VAR_11))
  return;

 if (VAR_12) {
  FUNC_5(VAR_11, VAR_3, 0);
  FUNC_5(VAR_11, VAR_5, VAR_13->hw_value);
  FUNC_8(10, 20);

  if (FUNC_7(VAR_11)) {
   FUNC_4(VAR_11, VAR_6,
    VAR_7);
   FUNC_6(VAR_11);
   FUNC_4(VAR_11, VAR_6,
    VAR_8 |
    VAR_7);
  }
 }

 VAR_16 = FUNC_3(VAR_11, VAR_9);
 FUNC_4(VAR_11, VAR_9, 0);
 FUNC_8(500, 700);

 VAR_17 = FUNC_3(VAR_11, FUNC_0(VAR_0, 9));
 FUNC_4(VAR_11, FUNC_0(VAR_0, 9), 0xffffff7e);

 if (VAR_14) {
  if (VAR_13->hw_value < 100)
   VAR_15 = 0x701;
  else if (VAR_13->hw_value < 140)
   VAR_15 = 0x801;
  else
   VAR_15 = 0x901;
 } else {
  VAR_15 = 0x600;
 }

 FUNC_5(VAR_11, VAR_1, VAR_15);
 FUNC_2(350);
 FUNC_5(VAR_11, VAR_2, VAR_14);
 FUNC_8(15000, 20000);

 FUNC_4(VAR_11, FUNC_0(VAR_0, 9), VAR_17);
 FUNC_4(VAR_11, VAR_9, VAR_16);
 FUNC_5(VAR_11, VAR_4, 1);
}
