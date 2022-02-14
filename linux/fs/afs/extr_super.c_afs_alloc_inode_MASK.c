
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct afs_vnode {int flags; struct inode vfs_inode; int rmdir_lock; int lock_state; int * cache; int cb_interest; int * permit_cache; int * lock_key; int * volume; int status; int fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct afs_vnode* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_5)
{
 struct afs_vnode *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(&VAR_3);


 FUNC_5(&VAR_6->fid, 0, sizeof(VAR_6->fid));
 FUNC_5(&VAR_6->status, 0, sizeof(VAR_6->status));

 VAR_6->volume = ((void*)0);
 VAR_6->lock_key = ((void*)0);
 VAR_6->permit_cache = ((void*)0);
 FUNC_0(VAR_6->cb_interest, ((void*)0));




 VAR_6->flags = 1 << VAR_1;
 VAR_6->lock_state = VAR_0;

 FUNC_3(&VAR_6->rmdir_lock);

 FUNC_1(" = %p", &VAR_6->vfs_inode);
 return &VAR_6->vfs_inode;
}
