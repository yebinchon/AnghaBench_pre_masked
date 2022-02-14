
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_flctx; } ;
struct file_lock_context {int flc_posix; } ;
struct file_lock {int fl_flags; TYPE_1__* fl_ops; int * fl_lmops; struct file* fl_file; int fl_pid; int fl_owner; int fl_end; scalar_t__ fl_start; int fl_type; } ;
struct file {int dummy; } ;
typedef int fl_owner_t ;
struct TYPE_4__ {int tgid; } ;
struct TYPE_3__ {int (* fl_release_private ) (struct file_lock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file_lock*) ;
 struct inode* FUNC_2 (struct file*) ;
 struct file_lock_context* FUNC_3 (int *) ;
 int FUNC_4 (struct file_lock*) ;
 int FUNC_5 (struct inode*,struct file_lock*,int) ;
 int FUNC_6 (struct file*,int ,struct file_lock*,int *) ;

void FUNC_7(struct file *VAR_6, fl_owner_t VAR_7)
{
 int VAR_8;
 struct inode *VAR_9 = FUNC_2(VAR_6);
 struct file_lock VAR_10;
 struct file_lock_context *VAR_11;






 VAR_11 = FUNC_3(&VAR_9->i_flctx);
 if (!VAR_11 || FUNC_0(&VAR_11->flc_posix))
  return;

 FUNC_1(&VAR_10);
 VAR_10.fl_type = VAR_3;
 VAR_10.fl_flags = VAR_1 | VAR_0;
 VAR_10.fl_start = 0;
 VAR_10.fl_end = VAR_4;
 VAR_10.fl_owner = VAR_7;
 VAR_10.fl_pid = VAR_5->tgid;
 VAR_10.fl_file = VAR_6;
 VAR_10.fl_ops = ((void*)0);
 VAR_10.fl_lmops = ((void*)0);

 VAR_8 = FUNC_6(VAR_6, VAR_2, &VAR_10, ((void*)0));

 if (VAR_10.fl_ops && VAR_10.fl_ops->fl_release_private)
  VAR_10.fl_ops->fl_release_private(&VAR_10);
 FUNC_5(VAR_9, &VAR_10, VAR_8);
}
