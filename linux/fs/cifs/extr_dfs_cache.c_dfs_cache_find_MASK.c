
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct dfs_info3_param {int dummy; } ;
struct dfs_cache_tgt_list {int dummy; } ;
struct dfs_cache_entry {int dummy; } ;
struct cifs_ses {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dfs_cache_entry*) ;
 int FUNC_1 (struct dfs_cache_entry*) ;
 int VAR_1 ;
 struct dfs_cache_entry* FUNC_2 (unsigned int const,struct cifs_ses*,struct nls_table const*,int,char*,int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char**) ;
 int FUNC_5 (struct dfs_cache_entry*,struct dfs_cache_tgt_list*) ;
 int FUNC_6 (struct dfs_cache_entry*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,struct dfs_cache_entry*,struct dfs_info3_param*,int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(const unsigned int VAR_2, struct cifs_ses *VAR_3,
     const struct nls_table *VAR_4, int VAR_5,
     const char *VAR_6, struct dfs_info3_param *VAR_7,
     struct dfs_cache_tgt_list *VAR_8)
{
 int VAR_9;
 char *VAR_10;
 struct dfs_cache_entry *VAR_11;

 if (FUNC_11(!FUNC_7(VAR_6)))
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6, &VAR_10);
 if (VAR_9)
  return VAR_9;

 FUNC_8(&VAR_1);
 VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10, 0);
 if (!FUNC_0(VAR_11)) {
  if (VAR_7)
   VAR_9 = FUNC_10(VAR_6, VAR_11, VAR_7, FUNC_6(VAR_11));
  else
   VAR_9 = 0;
  if (!VAR_9 && VAR_8)
   VAR_9 = FUNC_5(VAR_11, VAR_8);
 } else {
  VAR_9 = FUNC_1(VAR_11);
 }
 FUNC_9(&VAR_1);
 FUNC_3(VAR_6, VAR_10);
 return VAR_9;
}
