
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_dyn_features; int ip_xattr_sem; int ip_alloc_sem; scalar_t__ ip_clusters; } ;
struct ocfs2_dinode {scalar_t__ i_xattr_loc; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_4 (struct inode*,struct buffer_head*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode *VAR_2,
       struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_inode_info *VAR_5 = FUNC_0(VAR_2);
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_3->b_data;

 FUNC_1(&VAR_5->ip_xattr_sem);
 FUNC_1(&VAR_5->ip_alloc_sem);

 if (VAR_5->ip_clusters)
  goto out;

 if ((VAR_5->ip_dyn_features & VAR_0) && VAR_6->i_xattr_loc)
  goto out;

 if (VAR_5->ip_dyn_features & VAR_1 &&
     FUNC_3(VAR_2, VAR_6))
  goto out;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_2(VAR_4);
out:
 FUNC_5(&VAR_5->ip_alloc_sem);
 FUNC_5(&VAR_5->ip_xattr_sem);
 return 0;
}
