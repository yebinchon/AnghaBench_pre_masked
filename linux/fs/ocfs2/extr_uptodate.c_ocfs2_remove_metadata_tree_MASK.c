
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_meta_cache_item {int c_node; scalar_t__ c_block; } ;
struct TYPE_2__ {int ci_tree; } ;
struct ocfs2_caching_info {int ci_num_cached; TYPE_1__ ci_cache; } ;


 scalar_t__ FUNC_0 (struct ocfs2_caching_info*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_caching_info *VAR_0,
           struct ocfs2_meta_cache_item *VAR_1)
{
 FUNC_2(
  (unsigned long long)FUNC_0(VAR_0),
  (unsigned long long)VAR_1->c_block);

 FUNC_1(&VAR_1->c_node, &VAR_0->ci_cache.ci_tree);
 VAR_0->ci_num_cached--;
}
