
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_stats_cache_hits; int es_stats_cache_misses; int es_stats_all_cnt; int es_stats_shk_cnt; scalar_t__ es_stats_max_scan_time; scalar_t__ es_stats_scan_time; scalar_t__ es_stats_shrunk; } ;
struct TYPE_4__ {int seeks; int count_objects; int scan_objects; } ;
struct ext4_sb_info {TYPE_1__ s_es_stats; TYPE_2__ s_es_shrinker; int s_es_lock; scalar_t__ s_es_nr_inode; int s_es_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ext4_sb_info *VAR_5)
{
 int VAR_6;


 FUNC_0(VAR_1 < 48);
 FUNC_1(&VAR_5->s_es_list);
 VAR_5->s_es_nr_inode = 0;
 FUNC_5(&VAR_5->s_es_lock);
 VAR_5->s_es_stats.es_stats_shrunk = 0;
 VAR_6 = FUNC_3(&VAR_5->s_es_stats.es_stats_cache_hits, 0,
      VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_3(&VAR_5->s_es_stats.es_stats_cache_misses, 0,
      VAR_2);
 if (VAR_6)
  goto err1;
 VAR_5->s_es_stats.es_stats_scan_time = 0;
 VAR_5->s_es_stats.es_stats_max_scan_time = 0;
 VAR_6 = FUNC_3(&VAR_5->s_es_stats.es_stats_all_cnt, 0, VAR_2);
 if (VAR_6)
  goto err2;
 VAR_6 = FUNC_3(&VAR_5->s_es_stats.es_stats_shk_cnt, 0, VAR_2);
 if (VAR_6)
  goto err3;

 VAR_5->s_es_shrinker.scan_objects = VAR_4;
 VAR_5->s_es_shrinker.count_objects = VAR_3;
 VAR_5->s_es_shrinker.seeks = VAR_0;
 VAR_6 = FUNC_4(&VAR_5->s_es_shrinker);
 if (VAR_6)
  goto err4;

 return 0;
err4:
 FUNC_2(&VAR_5->s_es_stats.es_stats_shk_cnt);
err3:
 FUNC_2(&VAR_5->s_es_stats.es_stats_all_cnt);
err2:
 FUNC_2(&VAR_5->s_es_stats.es_stats_cache_misses);
err1:
 FUNC_2(&VAR_5->s_es_stats.es_stats_cache_hits);
 return VAR_6;
}
