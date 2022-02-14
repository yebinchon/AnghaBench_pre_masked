
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_unlinkdata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_lock; struct nfs_unlinkdata* d_fsdata; int d_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*,struct nfs_unlinkdata*) ;
 int FUNC_2 (struct nfs_unlinkdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct dentry *VAR_1, struct inode *VAR_2)
{
 struct nfs_unlinkdata *VAR_3;

 FUNC_3(&VAR_1->d_lock);
 VAR_1->d_flags &= ~VAR_0;
 VAR_3 = VAR_1->d_fsdata;
 VAR_1->d_fsdata = ((void*)0);
 FUNC_4(&VAR_1->d_lock);

 if (FUNC_0(VAR_2) || !FUNC_1(VAR_1, VAR_2, VAR_3))
  FUNC_2(VAR_3);
}
