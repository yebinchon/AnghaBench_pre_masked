
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {struct ocfs2_super* s_fs_info; } ;
struct path {TYPE_1__* dentry; } ;
struct ocfs2_super {int s_clustersize; } ;
struct kstat {int blocks; int size; int blksize; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {int ip_dyn_features; } ;
struct TYPE_4__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct inode*,struct kstat*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(const struct path *VAR_2, struct kstat *VAR_3,
    u32 VAR_4, unsigned int VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_2->dentry);
 struct super_block *VAR_7 = VAR_2->dentry->d_sb;
 struct ocfs2_super *VAR_8 = VAR_7->s_fs_info;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2->dentry);
 if (VAR_9) {
  if (VAR_9 != -VAR_0)
   FUNC_3(VAR_9);
  goto bail;
 }

 FUNC_2(VAR_6, VAR_3);






 if (FUNC_5(FUNC_0(VAR_6)->ip_dyn_features & VAR_1))
  VAR_3->blocks += (VAR_3->size + 511)>>9;


 VAR_3->blksize = VAR_8->s_clustersize;

bail:
 return VAR_9;
}
