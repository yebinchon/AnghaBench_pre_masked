
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_extent_tree {struct ocfs2_dx_root_block* et_object; } ;
struct ocfs2_dx_root_block {int dr_clusters; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_extent_tree *VAR_0,
       u32 VAR_1)
{
 struct ocfs2_dx_root_block *VAR_2 = VAR_0->et_object;

 FUNC_0(&VAR_2->dr_clusters, VAR_1);
}
