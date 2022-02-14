
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_cache_tgt {int t_list; int t_name; } ;


 int VAR_0 ;
 struct dfs_cache_tgt* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dfs_cache_tgt*) ;
 struct dfs_cache_tgt* FUNC_3 (int,int ) ;
 int FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static inline struct dfs_cache_tgt *FUNC_6(const char *VAR_2)
{
 struct dfs_cache_tgt *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_3->t_name = FUNC_4(VAR_2, FUNC_5(VAR_2), VAR_1);
 if (!VAR_3->t_name) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_3->t_list);
 return VAR_3;
}
