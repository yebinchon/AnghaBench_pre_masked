
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_lk_in {int dummy; } ;
struct fuse_conn {int pid_ns; } ;
struct file_lock {int fl_flags; scalar_t__ fl_type; TYPE_1__* fl_lmops; } ;
struct file {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {scalar_t__ lm_grant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int *,struct file*,struct file_lock*,int,int ,int,struct fuse_lk_in*) ;
 int FUNC_3 (struct fuse_conn*,int *) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct pid*,int ) ;
 struct pid* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_10, struct file_lock *VAR_11, int VAR_12)
{
 struct inode *VAR_13 = FUNC_1(VAR_10);
 struct fuse_conn *VAR_14 = FUNC_4(VAR_13);
 FUNC_0(VAR_8);
 struct fuse_lk_in VAR_15;
 int VAR_16 = (VAR_11->fl_flags & VAR_4) ? VAR_6 : VAR_5;
 struct pid *VAR_17 = VAR_11->fl_type != VAR_7 ? FUNC_6(VAR_9) : ((void*)0);
 pid_t VAR_18 = FUNC_5(VAR_17, VAR_14->pid_ns);
 int VAR_19;

 if (VAR_11->fl_lmops && VAR_11->fl_lmops->lm_grant) {

  return -VAR_1;
 }


 if ((VAR_11->fl_flags & VAR_3) == VAR_3)
  return 0;

 FUNC_2(&VAR_8, VAR_10, VAR_11, VAR_16, VAR_18, VAR_12, &VAR_15);
 VAR_19 = FUNC_3(VAR_14, &VAR_8);


 if (VAR_19 == -VAR_0)
  VAR_19 = -VAR_2;

 return VAR_19;
}
