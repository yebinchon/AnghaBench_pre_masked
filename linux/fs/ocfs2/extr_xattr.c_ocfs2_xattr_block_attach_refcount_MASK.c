
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int vb_access; struct buffer_head* vb_bh; } ;
struct ocfs2_xattr_tree_value_refcount_para {struct ocfs2_cached_dealloc_ctxt* dealloc; struct buffer_head* ref_root_bh; struct ocfs2_caching_info* ref_ci; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct TYPE_2__ {struct ocfs2_xattr_header xb_header; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; int xb_flags; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct buffer_head*,int ,struct ocfs2_xattr_tree_value_refcount_para*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,struct ocfs2_xattr_value_buf*,struct ocfs2_xattr_header*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3,
    struct buffer_head *VAR_4,
    struct ocfs2_caching_info *VAR_5,
    struct buffer_head *VAR_6,
    struct ocfs2_cached_dealloc_ctxt *VAR_7)
{
 int VAR_8 = 0;
 struct ocfs2_xattr_block *VAR_9 =
    (struct ocfs2_xattr_block *)VAR_4->b_data;

 if (!(FUNC_0(VAR_9->xb_flags) & VAR_0)) {
  struct ocfs2_xattr_header *VAR_10 = &VAR_9->xb_attrs.xb_header;
  struct ocfs2_xattr_value_buf VAR_11 = {
   .vb_bh = VAR_4,
   .vb_access = VAR_1,
  };

  VAR_8 = FUNC_2(VAR_3, &VAR_11, VAR_10,
        VAR_5, VAR_6,
        VAR_7);
 } else {
  struct ocfs2_xattr_tree_value_refcount_para VAR_12 = {
   .ref_ci = VAR_5,
   .ref_root_bh = VAR_6,
   .dealloc = VAR_7,
  };

  VAR_8 = FUNC_1(VAR_3, VAR_4,
      VAR_2,
      &VAR_12);
 }

 return VAR_8;
}
