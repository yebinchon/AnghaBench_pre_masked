
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mutex; } ;
struct mt7603_dev {TYPE_2__ mt76; int rxfilter; } ;
struct TYPE_3__ {int flags; int chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; struct mt7603_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct mt7603_dev*,int *) ;
 int FUNC_3 (struct mt7603_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_hw *VAR_6, u32 VAR_7)
{
 struct mt7603_dev *VAR_8 = VAR_6->priv;
 int VAR_9 = 0;

 if (VAR_7 & (VAR_0 |
         VAR_2)) {
  FUNC_0(VAR_6);
  VAR_9 = FUNC_2(VAR_8, &VAR_6->conf.chandef);
  FUNC_1(VAR_6);
 }

 if (VAR_7 & VAR_1) {
  FUNC_4(&VAR_8->mt76.mutex);

  if (!(VAR_6->conf.flags & VAR_3))
   VAR_8->rxfilter |= VAR_5;
  else
   VAR_8->rxfilter &= ~VAR_5;

  FUNC_3(VAR_8, VAR_4, VAR_8->rxfilter);

  FUNC_5(&VAR_8->mt76.mutex);
 }

 return VAR_9;
}
