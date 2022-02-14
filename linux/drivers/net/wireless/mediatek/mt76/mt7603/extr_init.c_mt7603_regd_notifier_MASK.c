
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ dfs_region; } ;
struct TYPE_2__ {scalar_t__ region; } ;
struct mt7603_dev {int ed_monitor; TYPE_1__ mt76; scalar_t__ ed_monitor_enabled; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;


 scalar_t__ VAR_0 ;
 struct ieee80211_hw* FUNC_0 (struct wiphy*) ;

__attribute__((used)) static void
FUNC_1(struct wiphy *VAR_1,
       struct regulatory_request *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_0(VAR_1);
 struct mt7603_dev *VAR_4 = VAR_3->priv;

 VAR_4->mt76.region = VAR_2->dfs_region;
 VAR_4->ed_monitor = VAR_4->ed_monitor_enabled &&
     VAR_4->mt76.region == VAR_0;
}
