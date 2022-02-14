
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_flags; int d_lock; int d_name; int d_parent; } ;
struct TYPE_2__ {int vnode; } ;
struct afs_vnode {int rmdir_lock; int silly_key; int lock; int lock_state; TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,struct dentry*,struct dentry*,int ) ;
 int FUNC_4 (struct afs_vnode*,struct afs_vnode*,struct dentry*,int ) ;
 int VAR_2 ;
 struct dentry* FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (struct dentry*) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct afs_vnode*,int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int VAR_3 ;

int FUNC_16(struct dentry *VAR_4, struct inode *VAR_5)
{
 struct afs_vnode *VAR_6 = FUNC_0(FUNC_7(VAR_4->d_parent));
 struct afs_vnode *VAR_7 = FUNC_0(VAR_5);
 struct dentry *VAR_8;
 int VAR_9;

 FUNC_1(VAR_3);

 FUNC_3("%p{%pd},%llx", VAR_4, VAR_4, VAR_7->fid.vnode);

 FUNC_10(&VAR_6->rmdir_lock);

 VAR_8 = FUNC_5(VAR_4->d_parent, &VAR_4->d_name, &VAR_3);
 if (FUNC_2(VAR_8)) {
  FUNC_15(&VAR_6->rmdir_lock);
  return 0;
 }

 if (!FUNC_6(VAR_8)) {



  VAR_9 = 0;
  FUNC_12(&VAR_8->d_lock);
  if (FUNC_9(VAR_8) &&
      !(VAR_8->d_flags & VAR_1)) {
   VAR_8->d_flags |= VAR_1;
   VAR_9 = 1;
  }
  FUNC_13(&VAR_8->d_lock);
  FUNC_15(&VAR_6->rmdir_lock);
  FUNC_11(VAR_8);
  return VAR_9;
 }


 FUNC_12(&VAR_7->lock);
 VAR_7->lock_state = VAR_0;
 FUNC_14(VAR_7, ((void*)0), VAR_2, 0);
 FUNC_13(&VAR_7->lock);

 FUNC_4(VAR_6, VAR_7, VAR_4, VAR_6->silly_key);
 FUNC_15(&VAR_6->rmdir_lock);
 FUNC_8(VAR_8);
 FUNC_11(VAR_8);
 return 1;
}
