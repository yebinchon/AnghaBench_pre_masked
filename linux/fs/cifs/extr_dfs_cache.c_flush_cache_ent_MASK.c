
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_cache_entry {int ce_rcu; int ce_path; int ce_hlist; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dfs_cache_entry*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct dfs_cache_entry *VAR_2)
{
 if (FUNC_3(&VAR_2->ce_hlist))
  return;

 FUNC_2(&VAR_2->ce_hlist);
 FUNC_4(VAR_2->ce_path);
 FUNC_1(VAR_2);
 VAR_0--;
 FUNC_0(&VAR_2->ce_rcu, VAR_1);
}
