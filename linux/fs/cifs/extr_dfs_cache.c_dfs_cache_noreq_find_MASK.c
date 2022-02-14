
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_info3_param {int dummy; } ;
struct dfs_cache_tgt_list {int dummy; } ;
struct dfs_cache_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dfs_cache_entry*) ;
 int FUNC_1 (struct dfs_cache_entry*) ;
 int VAR_1 ;
 struct dfs_cache_entry* FUNC_2 (int ,int *,int *,int ,char*,int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char**) ;
 int FUNC_5 (struct dfs_cache_entry*,struct dfs_cache_tgt_list*) ;
 int FUNC_6 (struct dfs_cache_entry*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,struct dfs_cache_entry*,struct dfs_info3_param*,int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(const char *VAR_2, struct dfs_info3_param *VAR_3,
    struct dfs_cache_tgt_list *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 struct dfs_cache_entry *VAR_7;

 if (FUNC_11(!FUNC_7(VAR_2)))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_8(&VAR_1);
 VAR_7 = FUNC_2(0, ((void*)0), ((void*)0), 0, VAR_6, 1);
 if (FUNC_0(VAR_7)) {
  VAR_5 = FUNC_1(VAR_7);
  goto out;
 }

 if (VAR_3)
  VAR_5 = FUNC_10(VAR_2, VAR_7, VAR_3, FUNC_6(VAR_7));
 else
  VAR_5 = 0;
 if (!VAR_5 && VAR_4)
  VAR_5 = FUNC_5(VAR_7, VAR_4);
out:
 FUNC_9(&VAR_1);
 FUNC_3(VAR_2, VAR_6);
 return VAR_5;
}
