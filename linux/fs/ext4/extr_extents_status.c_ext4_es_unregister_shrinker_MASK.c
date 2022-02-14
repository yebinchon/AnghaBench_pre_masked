
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int es_stats_shk_cnt; int es_stats_all_cnt; int es_stats_cache_misses; int es_stats_cache_hits; } ;
struct ext4_sb_info {int s_es_shrinker; TYPE_1__ s_es_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ext4_sb_info *VAR_0)
{
 FUNC_0(&VAR_0->s_es_stats.es_stats_cache_hits);
 FUNC_0(&VAR_0->s_es_stats.es_stats_cache_misses);
 FUNC_0(&VAR_0->s_es_stats.es_stats_all_cnt);
 FUNC_0(&VAR_0->s_es_stats.es_stats_shk_cnt);
 FUNC_1(&VAR_0->s_es_shrinker);
}
