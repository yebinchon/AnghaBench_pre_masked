
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_search {TYPE_3__* here; void* base; struct ocfs2_xattr_header* header; void* end; TYPE_1__* inode_bh; } ;
struct ocfs2_xattr_header {TYPE_3__* xh_entries; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_6__ {int xe_name_len; int xe_name_offset; int xe_value_size; } ;
struct TYPE_5__ {int s_blocksize; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_7 (struct inode*,struct ocfs2_xattr_value_root*,void*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3,
     int VAR_4,
     const char *VAR_5,
     void *VAR_6,
     size_t VAR_7,
     struct ocfs2_xattr_search *VAR_8)
{
 struct ocfs2_inode_info *VAR_9 = FUNC_0(VAR_3);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_8->inode_bh->b_data;
 struct ocfs2_xattr_value_root *VAR_11;
 size_t VAR_12;
 int VAR_13 = 0;

 if (!(VAR_9->ip_dyn_features & VAR_2))
  return -VAR_0;

 VAR_8->end = (void *)VAR_10 + VAR_3->i_sb->s_blocksize;
 VAR_8->header = (struct ocfs2_xattr_header *)
   (VAR_8->end - FUNC_2(VAR_10->i_xattr_inline_size));
 VAR_8->base = (void *)VAR_8->header;
 VAR_8->here = VAR_8->header->xh_entries;

 VAR_13 = FUNC_6(VAR_4, VAR_5, VAR_8);
 if (VAR_13)
  return VAR_13;
 VAR_12 = FUNC_3(VAR_8->here->xe_value_size);
 if (VAR_6) {
  if (VAR_12 > VAR_7)
   return -VAR_1;
  if (FUNC_8(VAR_8->here)) {
   FUNC_4(VAR_6, (void *)VAR_8->base +
          FUNC_2(VAR_8->here->xe_name_offset) +
          FUNC_1(VAR_8->here->xe_name_len), VAR_12);
  } else {
   VAR_11 = (struct ocfs2_xattr_value_root *)
    (VAR_8->base + FUNC_2(
     VAR_8->here->xe_name_offset) +
    FUNC_1(VAR_8->here->xe_name_len));
   VAR_13 = FUNC_7(VAR_3, VAR_11,
           VAR_6, VAR_12);
   if (VAR_13 < 0) {
    FUNC_5(VAR_13);
    return VAR_13;
   }
  }
 }

 return VAR_12;
}
