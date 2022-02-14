
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tssi_cal_done; } ;
struct TYPE_5__ {struct ieee80211_channel* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_1__ cal; TYPE_3__ mt76; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*) ;

__attribute__((used)) static bool
FUNC_5(struct mt76x02_dev *VAR_2)
{
 struct ieee80211_channel *VAR_3 = VAR_2->mt76.chandef.chan;
 u32 VAR_4 = 0;

 if (!FUNC_4(VAR_2))
  return 0;

 if (FUNC_3(VAR_2))
  return 0;

 if (VAR_3->band == VAR_1)
  VAR_4 |= FUNC_0(0);

 if (FUNC_1(VAR_2, VAR_3->band))
  VAR_4 |= FUNC_0(8);

 FUNC_2(VAR_2, VAR_0, VAR_4);
 VAR_2->cal.tssi_cal_done = 1;
 return 1;
}
