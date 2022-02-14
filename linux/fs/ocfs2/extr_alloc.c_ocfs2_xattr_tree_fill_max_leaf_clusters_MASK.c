
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_extent_tree {int et_max_leaf_clusters; int et_ci; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;
 struct super_block* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_extent_tree *VAR_1)
{
 struct super_block *VAR_2 = FUNC_1(VAR_1->et_ci);
 VAR_1->et_max_leaf_clusters =
  FUNC_0(VAR_2, VAR_0);
}
