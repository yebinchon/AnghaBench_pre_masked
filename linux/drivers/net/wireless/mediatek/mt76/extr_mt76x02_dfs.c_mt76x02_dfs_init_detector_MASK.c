
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76x02_dfs_pattern_detector {int dfs_tasklet; int last_sw_check; int seq_pool; int sequences; } ;
struct TYPE_2__ {int region; } ;
struct mt76x02_dev {TYPE_1__ mt76; struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,unsigned long) ;

void FUNC_2(struct mt76x02_dev *VAR_3)
{
 struct mt76x02_dfs_pattern_detector *VAR_4 = &VAR_3->dfs_pd;

 FUNC_0(&VAR_4->sequences);
 FUNC_0(&VAR_4->seq_pool);
 VAR_3->mt76.region = VAR_0;
 VAR_4->last_sw_check = VAR_1;
 FUNC_1(&VAR_4->dfs_tasklet, VAR_2,
       (unsigned long)VAR_3);
}
