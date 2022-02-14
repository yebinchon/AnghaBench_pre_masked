
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct nfs_unlinkdata {struct dentry* dentry; int wq; TYPE_1__ args; } ;
struct inode {int dummy; } ;
struct dentry {int d_flags; int d_lock; struct nfs_unlinkdata* d_fsdata; int d_parent; } ;
struct TYPE_4__ {int rmdir_sem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct dentry*) ;
 struct inode* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct inode*,struct nfs_unlinkdata*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_1, struct inode *VAR_2, struct nfs_unlinkdata *VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_1->d_parent);
 struct dentry *VAR_5;

 FUNC_6(&FUNC_1(VAR_4)->rmdir_sem);
 VAR_5 = FUNC_2(VAR_1->d_parent, &VAR_3->args.name, &VAR_3->wq);
 if (FUNC_0(VAR_5)) {
  FUNC_12(&FUNC_1(VAR_4)->rmdir_sem);
  return 0;
 }
 if (!FUNC_3(VAR_5)) {
  int VAR_6;
  void *VAR_7 = ((void*)0);





  FUNC_10(&VAR_5->d_lock);
  if (FUNC_5(VAR_5) &&
      !(VAR_5->d_flags & VAR_0)) {
   VAR_7 = VAR_5->d_fsdata;
   VAR_5->d_fsdata = VAR_3;
   VAR_5->d_flags |= VAR_0;
   VAR_6 = 1;
  } else
   VAR_6 = 0;
  FUNC_11(&VAR_5->d_lock);
  FUNC_7(VAR_5);
  FUNC_12(&FUNC_1(VAR_4)->rmdir_sem);





  FUNC_8(VAR_7);
  return VAR_6;
 }
 VAR_3->dentry = VAR_5;
 FUNC_9(VAR_2, VAR_3);
 return 1;
}
