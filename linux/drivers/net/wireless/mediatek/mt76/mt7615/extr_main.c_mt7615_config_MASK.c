
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mutex; int rxfilter; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_hw {TYPE_1__ conf; struct mt7615_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct mt7615_dev*) ;
 int FUNC_3 (struct mt7615_dev*) ;
 int FUNC_4 (struct mt7615_dev*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_6, u32 VAR_7)
{
 struct mt7615_dev *VAR_8 = VAR_6->priv;
 int VAR_9 = 0;

 if (VAR_7 & VAR_0) {
  FUNC_0(VAR_6);
  VAR_9 = FUNC_3(VAR_8);
  FUNC_1(VAR_6);
 }

 FUNC_5(&VAR_8->mt76.mutex);

 if (VAR_7 & VAR_2)
  VAR_9 = FUNC_2(VAR_8);

 if (VAR_7 & VAR_1) {
  if (!(VAR_6->conf.flags & VAR_3))
   VAR_8->mt76.rxfilter |= VAR_5;
  else
   VAR_8->mt76.rxfilter &= ~VAR_5;

  FUNC_4(VAR_8, VAR_4, VAR_8->mt76.rxfilter);
 }

 FUNC_6(&VAR_8->mt76.mutex);

 return VAR_9;
}
