
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock_context {int flc_flock; } ;
struct file_lock {TYPE_2__* fl_ops; int fl_flags; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_4__ {int (* fl_release_private ) (struct file_lock*) ;} ;
struct TYPE_3__ {int (* flock ) (struct file*,int ,struct file_lock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct file_lock*) ;
 int FUNC_1 (struct file*,int ,struct file_lock*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,int ,struct file_lock*) ;
 int FUNC_5 (struct file_lock*) ;

__attribute__((used)) static void
FUNC_6(struct file *VAR_3, struct file_lock_context *VAR_4)
{
 struct file_lock VAR_5;
 struct inode *VAR_6 = FUNC_3(VAR_3);

 if (FUNC_2(&VAR_4->flc_flock))
  return;

 FUNC_1(VAR_3, VAR_2, &VAR_5);
 VAR_5.fl_flags |= VAR_0;

 if (VAR_3->f_op->flock)
  VAR_3->f_op->flock(VAR_3, VAR_1, &VAR_5);
 else
  FUNC_0(VAR_6, &VAR_5);

 if (VAR_5.fl_ops && VAR_5.fl_ops->fl_release_private)
  VAR_5.fl_ops->fl_release_private(&VAR_5);
}
