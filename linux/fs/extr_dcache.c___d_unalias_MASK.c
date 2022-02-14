
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rw_semaphore {int dummy; } ;
struct mutex {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_2__* d_parent; TYPE_1__* d_sb; } ;
struct TYPE_6__ {struct rw_semaphore i_rwsem; } ;
struct TYPE_5__ {TYPE_3__* d_inode; } ;
struct TYPE_4__ {struct mutex s_vfs_rename_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct dentry*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct rw_semaphore*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1,
  struct dentry *VAR_2, struct dentry *VAR_3)
{
 struct mutex *VAR_4 = ((void*)0);
 struct rw_semaphore *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_0;


 if (VAR_3->d_parent == VAR_2->d_parent)
  goto out_unalias;


 if (!FUNC_2(&VAR_2->d_sb->s_vfs_rename_mutex))
  goto out_err;
 VAR_4 = &VAR_2->d_sb->s_vfs_rename_mutex;
 if (!FUNC_1(VAR_3->d_parent->d_inode))
  goto out_err;
 VAR_5 = &VAR_3->d_parent->d_inode->i_rwsem;
out_unalias:
 FUNC_0(VAR_3, VAR_2, 0);
 VAR_6 = 0;
out_err:
 if (VAR_5)
  FUNC_4(VAR_5);
 if (VAR_4)
  FUNC_3(VAR_4);
 return VAR_6;
}
