
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ dfs_region; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_4__ {scalar_t__ region; struct cfg80211_chan_def chandef; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mt7615_dev*) ;
 int FUNC_1 (struct mt7615_dev*) ;
 int FUNC_2 (struct mt7615_dev*,int ,int ,int ,int ) ;
 struct ieee80211_hw* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static void
FUNC_4(struct wiphy *VAR_5,
       struct regulatory_request *VAR_6)
{
 struct ieee80211_hw *VAR_7 = FUNC_3(VAR_5);
 struct mt7615_dev *VAR_8 = VAR_7->priv;
 struct cfg80211_chan_def *VAR_9 = &VAR_8->mt76.chandef;

 if (VAR_6->dfs_region == VAR_8->mt76.region)
  return;

 VAR_8->mt76.region = VAR_6->dfs_region;

 if (!(VAR_9->chan->flags & VAR_0))
  return;

 FUNC_1(VAR_8);
 if (VAR_6->dfs_region == VAR_3)
  FUNC_2(VAR_8, VAR_4, VAR_1,
       VAR_2, 0);
 else
  FUNC_0(VAR_8);
}
