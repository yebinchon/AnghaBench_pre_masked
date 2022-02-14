
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channel_cal_done; int tssi_cal_done; } ;
struct TYPE_5__ {struct ieee80211_channel* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_1__ cal; TYPE_3__ mt76; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*,int) ;
 int FUNC_6 (struct mt76x02_dev*) ;

__attribute__((used)) static void
FUNC_7(struct mt76x02_dev *VAR_7, bool VAR_8)
{
 struct ieee80211_channel *VAR_9 = VAR_7->mt76.chandef.chan;
 bool VAR_10 = VAR_9->band == VAR_6;

 if (VAR_7->cal.channel_cal_done)
  return;

 if (FUNC_3(VAR_7))
  return;

 if (!VAR_7->cal.tssi_cal_done)
  FUNC_6(VAR_7);

 if (!VAR_8)
  FUNC_5(VAR_7, 0);

 if (VAR_10)
  FUNC_1(VAR_7, VAR_0, 0);

 FUNC_1(VAR_7, VAR_4, VAR_10);
 FUNC_1(VAR_7, VAR_3, VAR_10);
 FUNC_1(VAR_7, VAR_1, VAR_10);
 FUNC_1(VAR_7, VAR_2, 0);
 FUNC_1(VAR_7, VAR_5, 0);

 if (!VAR_8)
  FUNC_4(VAR_7);

 FUNC_2(VAR_7);
 FUNC_0(VAR_7);

 VAR_7->cal.channel_cal_done = 1;
}
