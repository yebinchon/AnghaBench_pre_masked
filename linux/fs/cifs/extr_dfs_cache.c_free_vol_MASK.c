
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_cache_vol_info {int vi_vol; struct dfs_cache_vol_info* vi_mntdata; struct dfs_cache_vol_info* vi_fullpath; int vi_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dfs_cache_vol_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct dfs_cache_vol_info *VAR_0)
{
 FUNC_2(&VAR_0->vi_list);
 FUNC_1(VAR_0->vi_fullpath);
 FUNC_1(VAR_0->vi_mntdata);
 FUNC_0(&VAR_0->vi_vol);
 FUNC_1(VAR_0);
}
