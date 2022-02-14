
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct dfs_cache_entry {int ce_etime; } ;


 int FUNC_0 (struct timespec64*) ;
 scalar_t__ FUNC_1 (struct timespec64*,int *) ;

__attribute__((used)) static inline bool FUNC_2(const struct dfs_cache_entry *VAR_0)
{
 struct timespec64 VAR_1;

 FUNC_0(&VAR_1);
 return FUNC_1(&VAR_1, &VAR_0->ce_etime) >= 0;
}
