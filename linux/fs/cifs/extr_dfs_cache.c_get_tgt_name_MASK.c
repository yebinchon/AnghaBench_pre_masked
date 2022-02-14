
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_cache_tgt {char* t_name; } ;
struct dfs_cache_entry {struct dfs_cache_tgt* ce_tgthint; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;

__attribute__((used)) static inline char *FUNC_1(const struct dfs_cache_entry *VAR_1)
{
 struct dfs_cache_tgt *VAR_2 = VAR_1->ce_tgthint;

 return VAR_2 ? VAR_2->t_name : FUNC_0(-VAR_0);
}
