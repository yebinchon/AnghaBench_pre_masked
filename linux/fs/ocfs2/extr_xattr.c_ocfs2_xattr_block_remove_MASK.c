
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int vb_access; struct buffer_head* vb_bh; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct TYPE_2__ {struct ocfs2_xattr_header xb_header; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; int xb_flags; } ;
struct ocfs2_rm_xattr_bucket_para {struct buffer_head* ref_root_bh; struct ocfs2_caching_info* ref_ci; } ;
struct ocfs2_caching_info {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct buffer_head*,int ,struct ocfs2_rm_xattr_bucket_para*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,struct ocfs2_xattr_value_buf*,struct ocfs2_xattr_header*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3,
        struct buffer_head *VAR_4,
        struct ocfs2_caching_info *VAR_5,
        struct buffer_head *VAR_6)
{
 struct ocfs2_xattr_block *VAR_7;
 int VAR_8 = 0;
 struct ocfs2_xattr_value_buf VAR_9 = {
  .vb_bh = VAR_4,
  .vb_access = VAR_1,
 };
 struct ocfs2_rm_xattr_bucket_para VAR_10 = {
  .ref_ci = VAR_5,
  .ref_root_bh = VAR_6,
 };

 VAR_7 = (struct ocfs2_xattr_block *)VAR_4->b_data;
 if (!(FUNC_0(VAR_7->xb_flags) & VAR_0)) {
  struct ocfs2_xattr_header *VAR_11 = &(VAR_7->xb_attrs.xb_header);
  VAR_8 = FUNC_2(VAR_3, &VAR_9, VAR_11,
       VAR_5, VAR_6);
 } else
  VAR_8 = FUNC_1(VAR_3,
      VAR_4,
      VAR_2,
      &VAR_10);

 return VAR_8;
}
