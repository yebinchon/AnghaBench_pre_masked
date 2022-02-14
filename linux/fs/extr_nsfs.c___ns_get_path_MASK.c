
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct ns_common {int stashed; TYPE_1__* ops; int inum; } ;
struct inode {int i_mode; struct ns_common* i_private; int * i_fop; int i_flags; int i_ctime; int i_atime; int i_mtime; int i_ino; } ;
struct dentry {void* d_fsdata; int d_lockref; } ;
struct TYPE_2__ {int (* put ) (struct ns_common*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int *,int ,unsigned long) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 struct dentry* FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vfsmount*) ;
 struct inode* FUNC_12 (int ) ;
 int VAR_5 ;
 struct vfsmount* VAR_6 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct ns_common*) ;
 int FUNC_16 (struct ns_common*) ;

__attribute__((used)) static void *FUNC_17(struct path *VAR_7, struct ns_common *VAR_8)
{
 struct vfsmount *VAR_9 = VAR_6;
 struct dentry *VAR_10;
 struct inode *VAR_11;
 unsigned long VAR_12;

 FUNC_13();
 VAR_12 = FUNC_2(&VAR_8->stashed);
 if (!VAR_12)
  goto slow;
 VAR_10 = (struct dentry *)VAR_12;
 if (!FUNC_10(&VAR_10->d_lockref))
  goto slow;
 FUNC_14();
 VAR_8->ops->put(VAR_8);
got_it:
 VAR_7->mnt = FUNC_11(VAR_9);
 VAR_7->dentry = VAR_10;
 return ((void*)0);
slow:
 FUNC_14();
 VAR_11 = FUNC_12(VAR_9->mnt_sb);
 if (!VAR_11) {
  VAR_8->ops->put(VAR_8);
  return FUNC_0(-VAR_1);
 }
 VAR_11->i_ino = VAR_8->inum;
 VAR_11->i_mtime = VAR_11->i_atime = VAR_11->i_ctime = FUNC_4(VAR_11);
 VAR_11->i_flags |= VAR_3;
 VAR_11->i_mode = VAR_2 | VAR_4;
 VAR_11->i_fop = &VAR_5;
 VAR_11->i_private = VAR_8;

 VAR_10 = FUNC_5(VAR_9->mnt_sb);
 if (!VAR_10) {
  FUNC_9(VAR_11);
  return FUNC_0(-VAR_1);
 }
 FUNC_7(VAR_10, VAR_11);
 VAR_10->d_fsdata = (void *)VAR_8->ops;
 VAR_12 = FUNC_1(&VAR_8->stashed, 0, (unsigned long)VAR_10);
 if (VAR_12) {
  FUNC_6(VAR_10);
  FUNC_8(VAR_10);
  FUNC_3();
  return FUNC_0(-VAR_0);
 }
 goto got_it;
}
