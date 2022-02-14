
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dfs_tasklet; } ;
struct mt76x02_dev {int mt76; TYPE_1__ dfs_pd; int cal_work; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*,int) ;
 int FUNC_8 (struct mt76x02_dev*,struct cfg80211_chan_def*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct mt76x02_dev *VAR_2, struct cfg80211_chan_def *VAR_3)
{
 FUNC_0(&VAR_2->cal_work);
 FUNC_7(VAR_2, 0);
 if (FUNC_1(VAR_2))
  FUNC_9(&VAR_2->dfs_pd.dfs_tasklet);

 FUNC_3(&VAR_2->mt76);
 FUNC_8(VAR_2, VAR_3);


 FUNC_2(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0);

 FUNC_6(VAR_2);

 if (FUNC_1(VAR_2)) {
  FUNC_5(VAR_2);
  FUNC_10(&VAR_2->dfs_pd.dfs_tasklet);
 }
 FUNC_7(VAR_2, 1);

 FUNC_4(&VAR_2->mt76);
}
