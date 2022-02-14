
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int txpower_conf; int mutex; int rxfilter; int state; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct TYPE_3__ {int power_level; int flags; int chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct ieee80211_hw *VAR_7, u32 VAR_8)
{
 struct mt76x02_dev *VAR_9 = VAR_7->priv;

 FUNC_5(&VAR_9->mt76.mutex);

 if (VAR_8 & VAR_0) {
  FUNC_0(VAR_7);
  FUNC_4(VAR_9, &VAR_7->conf.chandef);
  FUNC_1(VAR_7);
 }

 if (VAR_8 & VAR_2) {
  VAR_9->mt76.txpower_conf = VAR_7->conf.power_level * 2;

  if (FUNC_7(VAR_4, &VAR_9->mt76.state))
   FUNC_3(VAR_9);
 }

 if (VAR_8 & VAR_1) {
  if (!(VAR_7->conf.flags & VAR_3))
   VAR_9->mt76.rxfilter |= VAR_6;
  else
   VAR_9->mt76.rxfilter &= ~VAR_6;

  FUNC_2(VAR_9, VAR_5, VAR_9->mt76.rxfilter);
 }

 FUNC_6(&VAR_9->mt76.mutex);

 return 0;
}
