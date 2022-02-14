
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_extent_tree {struct ocfs2_dx_root_block* et_object; } ;
struct ocfs2_dx_root_block {int dr_last_eb_blk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_dx_root_block *VAR_1 = VAR_0->et_object;

 return FUNC_0(VAR_1->dr_last_eb_blk);
}
