
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {int * i_cdev; int i_mode; } ;
struct TYPE_5__ {int pid; } ;
struct TYPE_4__ {struct vfsmount* mnt; struct dentry* dentry; } ;
struct file {int f_mode; int f_flags; TYPE_2__ f_owner; TYPE_3__* f_op; struct inode* f_inode; TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;
struct TYPE_6__ {int (* release ) (struct inode*,struct file*) ;int (* fasync ) (int,struct file*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vfsmount*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct vfsmount*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int,struct file*,int ) ;
 int FUNC_17 (struct inode*,struct file*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct file *VAR_7)
{
 struct dentry *VAR_8 = VAR_7->f_path.dentry;
 struct vfsmount *VAR_9 = VAR_7->f_path.mnt;
 struct inode *VAR_10 = VAR_7->f_inode;
 fmode_t VAR_11 = VAR_7->f_mode;

 if (FUNC_18(!(VAR_7->f_mode & VAR_2)))
  goto out;

 FUNC_12();

 FUNC_8(VAR_7);




 FUNC_5(VAR_7);
 FUNC_11(VAR_7);

 FUNC_10(VAR_7);
 if (FUNC_18(VAR_7->f_flags & VAR_0)) {
  if (VAR_7->f_op->fasync)
   VAR_7->f_op->fasync(-1, VAR_7, 0);
 }
 if (VAR_7->f_op->release)
  VAR_7->f_op->release(VAR_10, VAR_7);
 if (FUNC_18(FUNC_0(VAR_10->i_mode) && VAR_10->i_cdev != ((void*)0) &&
       !(VAR_11 & VAR_3))) {
  FUNC_2(VAR_10->i_cdev);
 }
 FUNC_7(VAR_7->f_op);
 FUNC_14(VAR_7->f_owner.pid);
 if ((VAR_11 & (VAR_4 | VAR_5)) == VAR_4)
  FUNC_9(VAR_10);
 if (VAR_11 & VAR_6) {
  FUNC_15(VAR_10);
  FUNC_1(VAR_9);
 }
 FUNC_4(VAR_8);
 if (FUNC_18(VAR_11 & VAR_1))
  FUNC_3(VAR_9);
 FUNC_13(VAR_9);
out:
 FUNC_6(VAR_7);
}
