
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ieee80211_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct ieee80211_channel {int flags; scalar_t__ dfs_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct mt76x02_dev *VAR_2)
{
 struct ieee80211_channel *VAR_3 = VAR_2->mt76.chandef.chan;

 return ((VAR_3->flags & VAR_0) &&
  VAR_3->dfs_state != VAR_1);
}
