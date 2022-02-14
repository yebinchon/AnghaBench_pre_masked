
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int dfs_region; } ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int FUNC_0 (struct mt76x02_dev*,int ) ;
 struct ieee80211_hw* FUNC_1 (struct wiphy*) ;

void FUNC_2(struct wiphy *VAR_0,
      struct regulatory_request *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_1(VAR_0);
 struct mt76x02_dev *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_3, VAR_1->dfs_region);
}
