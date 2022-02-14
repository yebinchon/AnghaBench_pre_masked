
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_value_buf {int vb_access; int vb_bh; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;


 int FUNC_0 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,int ,int ,struct ocfs2_xattr_value_buf*,int *) ;
 int VAR_0 ;

void FUNC_1(struct ocfs2_extent_tree *VAR_1,
     struct ocfs2_caching_info *VAR_2,
     struct ocfs2_xattr_value_buf *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3->vb_bh, VAR_3->vb_access, VAR_3,
     &VAR_0);
}
