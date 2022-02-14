
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_type; scalar_t__ l_pid; } ;
struct file_lock {scalar_t__ fl_type; struct file* fl_owner; int fl_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct file*,struct file_lock*,struct flock*) ;
 struct file_lock* FUNC_1 () ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct flock*,struct file_lock*) ;
 int FUNC_4 (struct file*,struct file_lock*) ;

int FUNC_5(struct file *VAR_8, unsigned int VAR_9, struct flock *VAR_10)
{
 struct file_lock *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1();
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_12 = -VAR_0;
 if (VAR_10->l_type != VAR_5 && VAR_10->l_type != VAR_7)
  goto out;

 VAR_12 = FUNC_0(VAR_8, VAR_11, VAR_10);
 if (VAR_12)
  goto out;

 if (VAR_9 == VAR_4) {
  VAR_12 = -VAR_0;
  if (VAR_10->l_pid != 0)
   goto out;

  VAR_9 = VAR_3;
  VAR_11->fl_flags |= VAR_2;
  VAR_11->fl_owner = VAR_8;
 }

 VAR_12 = FUNC_4(VAR_8, VAR_11);
 if (VAR_12)
  goto out;

 VAR_10->l_type = VAR_11->fl_type;
 if (VAR_11->fl_type != VAR_6) {
  VAR_12 = FUNC_3(VAR_10, VAR_11);
  if (VAR_12)
   goto out;
 }
out:
 FUNC_2(VAR_11);
 return VAR_12;
}
