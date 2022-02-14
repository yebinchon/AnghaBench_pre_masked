
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_search {int not_found; struct buffer_head* xattr_bh; TYPE_3__* header; int here; void* end; void* base; TYPE_1__* inode_bh; } ;
struct TYPE_6__ {int xh_entries; } ;
struct TYPE_5__ {TYPE_3__ xb_header; } ;
struct ocfs2_xattr_block {TYPE_2__ xb_attrs; int xb_flags; } ;
struct ocfs2_dinode {int i_xattr_loc; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_5 (int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int,char const*,struct ocfs2_xattr_search*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
      int VAR_3,
      const char *VAR_4,
      struct ocfs2_xattr_search *VAR_5)
{
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_5->inode_bh->b_data;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_xattr_block *VAR_8;
 int VAR_9 = 0;

 if (!VAR_6->i_xattr_loc)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_2, FUNC_2(VAR_6->i_xattr_loc),
         &VAR_7);
 if (VAR_9 < 0) {
  FUNC_3(VAR_9);
  return VAR_9;
 }

 VAR_5->xattr_bh = VAR_7;
 VAR_8 = (struct ocfs2_xattr_block *)VAR_7->b_data;

 if (!(FUNC_1(VAR_8->xb_flags) & VAR_1)) {
  VAR_5->header = &VAR_8->xb_attrs.xb_header;
  VAR_5->base = (void *)VAR_5->header;
  VAR_5->end = (void *)(VAR_7->b_data) + VAR_7->b_size;
  VAR_5->here = VAR_5->header->xh_entries;

  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5);
 } else
  VAR_9 = FUNC_6(VAR_2, VAR_7,
         VAR_3,
         VAR_4, VAR_5);

 if (VAR_9 && VAR_9 != -VAR_0) {
  VAR_5->xattr_bh = ((void*)0);
  goto cleanup;
 }
 VAR_5->not_found = VAR_9;
 return 0;
cleanup:
 FUNC_0(VAR_7);

 return VAR_9;
}
