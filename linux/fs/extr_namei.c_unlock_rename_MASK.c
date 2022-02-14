
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_sb; int d_inode; } ;
struct TYPE_2__ {int s_vfs_rename_mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dentry *VAR_0, struct dentry *VAR_1)
{
 FUNC_0(VAR_0->d_inode);
 if (VAR_0 != VAR_1) {
  FUNC_0(VAR_1->d_inode);
  FUNC_1(&VAR_0->d_sb->s_vfs_rename_mutex);
 }
}
