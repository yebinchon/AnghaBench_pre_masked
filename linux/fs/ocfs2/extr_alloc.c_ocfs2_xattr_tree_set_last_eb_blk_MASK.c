
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_xattr_tree_root {int xt_last_eb_blk; } ;
struct TYPE_2__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; } ;
struct ocfs2_extent_tree {struct ocfs2_xattr_block* et_object; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_extent_tree *VAR_0,
          u64 VAR_1)
{
 struct ocfs2_xattr_block *VAR_2 = VAR_0->et_object;
 struct ocfs2_xattr_tree_root *VAR_3 = &VAR_2->xb_attrs.xb_root;

 VAR_3->xt_last_eb_blk = FUNC_0(VAR_1);
}
