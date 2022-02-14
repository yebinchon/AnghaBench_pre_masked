
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_cache_tgt_list {int tl_list; } ;
struct dfs_cache_tgt_iterator {int it_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 struct dfs_cache_tgt_iterator* FUNC_2 (struct dfs_cache_tgt_iterator*,int ) ;

__attribute__((used)) static inline struct dfs_cache_tgt_iterator *
FUNC_3(struct dfs_cache_tgt_list *VAR_1,
         struct dfs_cache_tgt_iterator *VAR_2)
{
 if (!VAR_1 || FUNC_0(&VAR_1->tl_list) || !VAR_2 ||
     FUNC_1(&VAR_2->it_list, &VAR_1->tl_list))
  return ((void*)0);
 return FUNC_2(VAR_2, VAR_0);
}
