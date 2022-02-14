
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {scalar_t__ set_abort; } ;
struct ocfs2_xattr_search {int * here; scalar_t__ not_found; struct buffer_head* xattr_bh; TYPE_3__* header; void* end; void* base; int inode_bh; } ;
struct ocfs2_xattr_info {int dummy; } ;
struct TYPE_6__ {int * xh_entries; } ;
struct TYPE_4__ {TYPE_3__ xb_header; } ;
struct ocfs2_xattr_block {int xb_flags; TYPE_1__ xb_attrs; } ;
struct ocfs2_xa_loc {int * xl_entry; } ;
struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int ,struct ocfs2_xattr_set_ctxt*,int ,struct buffer_head**) ;
 int FUNC_3 (struct ocfs2_xa_loc*,struct inode*,struct buffer_head*,int *) ;
 int FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_5 (struct inode*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
     struct ocfs2_xattr_info *VAR_3,
     struct ocfs2_xattr_search *VAR_4,
     struct ocfs2_xattr_set_ctxt *VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);
 struct ocfs2_xattr_block *VAR_7 = ((void*)0);
 int VAR_8;
 struct ocfs2_xa_loc VAR_9;

 if (!VAR_4->xattr_bh) {
  VAR_8 = FUNC_2(VAR_2, VAR_4->inode_bh, VAR_5,
            0, &VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_8);
   goto end;
  }

  VAR_4->xattr_bh = VAR_6;
  VAR_7 = (struct ocfs2_xattr_block *)VAR_4->xattr_bh->b_data;
  VAR_4->header = &VAR_7->xb_attrs.xb_header;
  VAR_4->base = (void *)VAR_4->header;
  VAR_4->end = (void *)VAR_7 + VAR_2->i_sb->s_blocksize;
  VAR_4->here = VAR_4->header->xh_entries;
 } else
  VAR_7 = (struct ocfs2_xattr_block *)VAR_4->xattr_bh->b_data;

 if (!(FUNC_0(VAR_7->xb_flags) & VAR_1)) {
  FUNC_3(&VAR_9, VAR_2, VAR_4->xattr_bh,
           VAR_4->not_found ? ((void*)0) : VAR_4->here);

  VAR_8 = FUNC_4(&VAR_9, VAR_3, VAR_5);
  if (!VAR_8)
   VAR_4->here = VAR_9.xl_entry;
  else if ((VAR_8 != -VAR_0) || VAR_5->set_abort)
   goto end;
  else {
   VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_5);
   if (VAR_8)
    goto end;
  }
 }

 if (FUNC_0(VAR_7->xb_flags) & VAR_1)
  VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);

end:
 return VAR_8;
}
