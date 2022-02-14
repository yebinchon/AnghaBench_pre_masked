
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_info3_param {int dummy; } ;
struct dfs_cache_entry {int ce_path; int ce_tlist; int ce_hlist; } ;


 int VAR_0 ;
 struct dfs_cache_entry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dfs_info3_param const*,int,struct dfs_cache_entry*,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct dfs_cache_entry*) ;
 struct dfs_cache_entry* FUNC_6 (int ,int ) ;
 int FUNC_7 (char const*,int ) ;

__attribute__((used)) static struct dfs_cache_entry *
FUNC_8(const char *VAR_3, const struct dfs_info3_param *VAR_4,
    int VAR_5)
{
 struct dfs_cache_entry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->ce_path = FUNC_7(VAR_3, VAR_1);
 if (!VAR_6->ce_path) {
  FUNC_5(VAR_2, VAR_6);
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_6->ce_hlist);
 FUNC_2(&VAR_6->ce_tlist);

 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_4(VAR_6->ce_path);
  FUNC_5(VAR_2, VAR_6);
  VAR_6 = FUNC_0(VAR_7);
 }
 return VAR_6;
}
