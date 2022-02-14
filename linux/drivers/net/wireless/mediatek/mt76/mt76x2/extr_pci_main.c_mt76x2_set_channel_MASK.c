
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pre_tbtt_tasklet; int mutex; int state; } ;
struct TYPE_4__ {int dfs_tasklet; } ;
struct mt76x02_dev {TYPE_2__ mt76; TYPE_1__ dfs_pd; int cal_work; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*,int) ;
 int FUNC_8 (struct mt76x02_dev*,struct cfg80211_chan_def*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct mt76x02_dev *VAR_3, struct cfg80211_chan_def *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_3->cal_work);
 FUNC_12(&VAR_3->mt76.pre_tbtt_tasklet);
 FUNC_12(&VAR_3->dfs_pd.dfs_tasklet);

 FUNC_9(&VAR_3->mt76.mutex);
 FUNC_11(VAR_0, &VAR_3->mt76.state);

 FUNC_3(&VAR_3->mt76);

 FUNC_7(VAR_3, 1);
 VAR_5 = FUNC_8(VAR_3, VAR_4);


 FUNC_2(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_1);

 FUNC_5(VAR_3);

 FUNC_6(VAR_3);

 FUNC_1(VAR_0, &VAR_3->mt76.state);
 FUNC_10(&VAR_3->mt76.mutex);

 FUNC_13(&VAR_3->dfs_pd.dfs_tasklet);
 FUNC_13(&VAR_3->mt76.pre_tbtt_tasklet);

 FUNC_4(&VAR_3->mt76);

 return VAR_5;
}
