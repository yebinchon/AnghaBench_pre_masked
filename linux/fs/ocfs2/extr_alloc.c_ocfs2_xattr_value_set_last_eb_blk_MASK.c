
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_extent_tree {struct ocfs2_xattr_value_buf* et_object; } ;
struct TYPE_2__ {int xr_last_eb_blk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_extent_tree *VAR_0,
           u64 VAR_1)
{
 struct ocfs2_xattr_value_buf *VAR_2 = VAR_0->et_object;

 VAR_2->vb_xv->xr_last_eb_blk = FUNC_0(VAR_1);
}
