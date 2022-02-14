
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xattr_search {int * here; scalar_t__ not_found; int inode_bh; } ;
struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_xa_loc {int * xl_entry; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_xa_loc*,struct inode*,int ,int *) ;
 int FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_5 (struct inode*,int ,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
     struct ocfs2_xattr_info *VAR_4,
     struct ocfs2_xattr_search *VAR_5,
     struct ocfs2_xattr_set_ctxt *VAR_6)
{
 int VAR_7;
 struct ocfs2_inode_info *VAR_8 = FUNC_0(VAR_3);
 struct ocfs2_xa_loc VAR_9;

 if (VAR_3->i_sb->s_blocksize == VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_8->ip_alloc_sem);
 if (!(VAR_8->ip_dyn_features & VAR_1)) {
  VAR_7 = FUNC_5(VAR_3, VAR_5->inode_bh, VAR_6);
  if (VAR_7) {
   if (VAR_7 != -VAR_0)
    FUNC_2(VAR_7);
   goto out;
  }
 }

 FUNC_3(&VAR_9, VAR_3, VAR_5->inode_bh,
     VAR_5->not_found ? ((void*)0) : VAR_5->here);
 VAR_7 = FUNC_4(&VAR_9, VAR_4, VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_0)
   FUNC_2(VAR_7);
  goto out;
 }
 VAR_5->here = VAR_9.xl_entry;

out:
 FUNC_6(&VAR_8->ip_alloc_sem);

 return VAR_7;
}
