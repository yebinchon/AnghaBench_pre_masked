
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76x02_dfs_pattern_detector {int dfs_tasklet; } ;
struct TYPE_2__ {int region; int mutex; } ;
struct mt76x02_dev {int ed_monitor; TYPE_1__ mt76; scalar_t__ ed_monitor_enabled; struct mt76x02_dfs_pattern_detector dfs_pd; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct mt76x02_dev *VAR_1,
         enum nl80211_dfs_regions VAR_2)
{
 struct mt76x02_dfs_pattern_detector *VAR_3 = &VAR_1->dfs_pd;

 FUNC_2(&VAR_1->mt76.mutex);
 if (VAR_1->mt76.region != VAR_2) {
  FUNC_4(&VAR_3->dfs_tasklet);

  VAR_1->ed_monitor = VAR_1->ed_monitor_enabled &&
      VAR_2 == VAR_0;
  FUNC_1(VAR_1);

  VAR_1->mt76.region = VAR_2;
  FUNC_0(VAR_1);
  FUNC_5(&VAR_3->dfs_tasklet);
 }
 FUNC_3(&VAR_1->mt76.mutex);
}
