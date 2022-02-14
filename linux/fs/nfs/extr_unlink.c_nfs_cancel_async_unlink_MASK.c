
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_unlinkdata {int dummy; } ;
struct dentry {int d_flags; int d_lock; struct nfs_unlinkdata* d_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_unlinkdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct dentry *VAR_1)
{
 FUNC_1(&VAR_1->d_lock);
 if (VAR_1->d_flags & VAR_0) {
  struct nfs_unlinkdata *VAR_2 = VAR_1->d_fsdata;

  VAR_1->d_flags &= ~VAR_0;
  VAR_1->d_fsdata = ((void*)0);
  FUNC_2(&VAR_1->d_lock);
  FUNC_0(VAR_2);
  return;
 }
 FUNC_2(&VAR_1->d_lock);
}
