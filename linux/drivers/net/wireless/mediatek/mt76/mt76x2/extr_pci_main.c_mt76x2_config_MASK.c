
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int txpower_conf; int mutex; int state; int rxfilter; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct TYPE_4__ {int flags; int power_level; int chandef; } ;
struct ieee80211_hw {TYPE_2__ conf; struct mt76x02_dev* priv; } ;


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
 int FUNC_3 (struct mt76x02_dev*,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211_hw *VAR_7, u32 VAR_8)
{
 struct mt76x02_dev *VAR_9 = VAR_7->priv;
 int VAR_10 = 0;

 FUNC_6(&VAR_9->mt76.mutex);

 if (VAR_8 & VAR_1) {
  if (!(VAR_7->conf.flags & VAR_3))
   VAR_9->mt76.rxfilter |= VAR_6;
  else
   VAR_9->mt76.rxfilter &= ~VAR_6;

  FUNC_2(VAR_9, VAR_5, VAR_9->mt76.rxfilter);
 }

 if (VAR_8 & VAR_2) {
  VAR_9->mt76.txpower_conf = VAR_7->conf.power_level * 2;


  VAR_9->mt76.txpower_conf -= 6;

  if (FUNC_8(VAR_4, &VAR_9->mt76.state)) {
   FUNC_4(VAR_9);
   FUNC_3(VAR_9, VAR_9->mt76.txpower_conf);
  }
 }

 FUNC_7(&VAR_9->mt76.mutex);

 if (VAR_8 & VAR_0) {
  FUNC_0(VAR_7);
  VAR_10 = FUNC_5(VAR_9, &VAR_7->conf.chandef);
  FUNC_1(VAR_7);
 }

 return VAR_10;
}
