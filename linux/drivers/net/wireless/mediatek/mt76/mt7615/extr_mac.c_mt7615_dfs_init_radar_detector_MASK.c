
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {TYPE_2__* chan; } ;
struct TYPE_3__ {scalar_t__ region; int state; struct cfg80211_chan_def chandef; } ;
struct mt7615_dev {scalar_t__ dfs_state; TYPE_1__ mt76; } ;
struct TYPE_4__ {scalar_t__ dfs_state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mt7615_dev*) ;
 int FUNC_1 (struct mt7615_dev*) ;
 int FUNC_2 (struct mt7615_dev*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct mt7615_dev *VAR_8)
{
 struct cfg80211_chan_def *VAR_9 = &VAR_8->mt76.chandef;
 int VAR_10;

 if (VAR_8->mt76.region == VAR_5)
  return 0;

 if (FUNC_3(VAR_1, &VAR_8->mt76.state))
  return 0;

 if (VAR_8->dfs_state == VAR_9->chan->dfs_state)
  return 0;

 VAR_8->dfs_state = VAR_9->chan->dfs_state;

 if (VAR_9->chan->flags & VAR_0) {
  if (VAR_9->chan->dfs_state != VAR_4)
   return FUNC_0(VAR_8);
  else
   return FUNC_2(VAR_8, VAR_6, VAR_2,
        VAR_3, 0);
 } else {
  VAR_10 = FUNC_2(VAR_8, VAR_7,
      VAR_2, VAR_3, 0);
  if (VAR_10 < 0)
   return VAR_10;

  return FUNC_1(VAR_8);
 }
}
