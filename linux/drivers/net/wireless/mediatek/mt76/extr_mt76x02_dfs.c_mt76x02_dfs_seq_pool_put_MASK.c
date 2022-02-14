
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76x02_dfs_sequence {int head; } ;
struct TYPE_2__ {int seq_len; int seq_pool_len; } ;
struct mt76x02_dfs_pattern_detector {TYPE_1__ seq_stats; int seq_pool; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mt76x02_dev *VAR_0,
         struct mt76x02_dfs_sequence *VAR_1)
{
 struct mt76x02_dfs_pattern_detector *VAR_2 = &VAR_0->dfs_pd;

 FUNC_0(&VAR_1->head, &VAR_2->seq_pool);

 VAR_2->seq_stats.seq_pool_len++;
 VAR_2->seq_stats.seq_len--;
}
