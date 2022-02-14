
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ocfs2_inode_info {struct inode vfs_inode; int ip_jinode; int i_dquot; scalar_t__ i_datasync_tid; scalar_t__ i_sync_tid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct inode*) ;
 struct ocfs2_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2)
{
 struct ocfs2_inode_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->i_sync_tid = 0;
 VAR_3->i_datasync_tid = 0;
 FUNC_2(&VAR_3->i_dquot, 0, sizeof(VAR_3->i_dquot));

 FUNC_0(&VAR_3->ip_jinode, &VAR_3->vfs_inode);
 return &VAR_3->vfs_inode;
}
