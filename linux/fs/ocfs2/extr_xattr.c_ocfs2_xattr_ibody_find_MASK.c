
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_search {int not_found; struct ocfs2_xattr_header* header; int here; void* base; void* end; TYPE_1__* inode_bh; TYPE_1__* xattr_bh; } ;
struct ocfs2_xattr_header {int xh_entries; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct inode {TYPE_3__* i_sb; } ;
struct TYPE_6__ {scalar_t__ s_blocksize; } ;
struct TYPE_5__ {int s_xattr_inline_size; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_5 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
      int VAR_4,
      const char *VAR_5,
      struct ocfs2_xattr_search *VAR_6)
{
 struct ocfs2_inode_info *VAR_7 = FUNC_0(VAR_3);
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *)VAR_6->inode_bh->b_data;
 int VAR_9;
 int VAR_10 = 0;

 if (VAR_3->i_sb->s_blocksize == VAR_2)
  return 0;

 if (!(VAR_7->ip_dyn_features & VAR_1)) {
  FUNC_2(&VAR_7->ip_alloc_sem);
  VAR_10 = FUNC_5(VAR_3, VAR_8);
  FUNC_6(&VAR_7->ip_alloc_sem);
  if (!VAR_10)
   return 0;
 }

 VAR_6->xattr_bh = VAR_6->inode_bh;
 VAR_6->end = (void *)VAR_8 + VAR_3->i_sb->s_blocksize;
 if (VAR_7->ip_dyn_features & VAR_1)
  VAR_6->header = (struct ocfs2_xattr_header *)
   (VAR_6->end - FUNC_3(VAR_8->i_xattr_inline_size));
 else
  VAR_6->header = (struct ocfs2_xattr_header *)
   (VAR_6->end - FUNC_1(VAR_3->i_sb)->s_xattr_inline_size);
 VAR_6->base = (void *)VAR_6->header;
 VAR_6->here = VAR_6->header->xh_entries;


 if (VAR_7->ip_dyn_features & VAR_1) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6);
  if (VAR_9 && VAR_9 != -VAR_0)
   return VAR_9;
  VAR_6->not_found = VAR_9;
 }

 return 0;
}
