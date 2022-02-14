
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {int mcu_gain; int lna_gain; } ;
struct TYPE_8__ {TYPE_3__ rx; } ;
struct TYPE_5__ {struct ieee80211_channel* chan; } ;
struct TYPE_6__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_4__ cal; TYPE_2__ mt76; } ;
struct ieee80211_channel {int hw_value; scalar_t__ band; } ;
typedef int s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int*,int*,struct ieee80211_channel*) ;
 int FUNC_2 (struct mt76x02_dev*,scalar_t__,int*,int*,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int) ;
 int FUNC_5 (struct mt76x02_dev*,int,int) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;

void FUNC_7(struct mt76x02_dev *VAR_2)
{
 struct ieee80211_channel *VAR_3 = VAR_2->mt76.chandef.chan;
 int VAR_4 = VAR_3->hw_value;
 s8 VAR_5[3], VAR_6;
 u8 VAR_7;
 u16 VAR_8;

 if (VAR_3->band == VAR_1)
  VAR_8 = FUNC_0(VAR_2, VAR_0) >> 8;
 else
  VAR_8 = FUNC_4(VAR_2, VAR_4);

 FUNC_6(VAR_2, VAR_8);

 FUNC_2(VAR_2, VAR_3->band, &VAR_8, &VAR_6, VAR_5);
 FUNC_5(VAR_2, 0, VAR_8);
 FUNC_5(VAR_2, 1, VAR_8 >> 8);

 VAR_2->cal.rx.mcu_gain = (VAR_6 & 0xff);
 VAR_2->cal.rx.mcu_gain |= (VAR_5[0] & 0xff) << 8;
 VAR_2->cal.rx.mcu_gain |= (VAR_5[1] & 0xff) << 16;
 VAR_2->cal.rx.mcu_gain |= (VAR_5[2] & 0xff) << 24;

 VAR_7 = FUNC_1(VAR_2, &VAR_6, VAR_5, VAR_3);
 VAR_2->cal.rx.lna_gain = FUNC_3(VAR_7, 8);
}
