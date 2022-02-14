
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct flock {int l_pid; } ;
struct file_lock {int fl_flags; scalar_t__ fl_type; struct file* fl_owner; } ;
struct file {int f_mapping; } ;
struct TYPE_4__ {TYPE_1__* files; } ;
struct TYPE_3__ {int file_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 unsigned int VAR_6 ;

 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct file_lock*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (struct file*,unsigned int,struct file_lock*) ;
 struct file* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct file*,struct file_lock*,struct flock*) ;
 struct file_lock* FUNC_5 () ;
 int FUNC_6 (struct file_lock*) ;
 struct inode* FUNC_7 (struct file*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,struct file_lock*,int) ;

int FUNC_13(unsigned int VAR_9, struct file *VAR_10, unsigned int VAR_11,
  struct flock *VAR_12)
{
 struct file_lock *VAR_13 = FUNC_5();
 struct inode *VAR_14 = FUNC_7(VAR_10);
 struct file *VAR_15;
 int VAR_16;

 if (VAR_13 == ((void*)0))
  return -VAR_3;




 if (FUNC_8(VAR_14) && FUNC_9(VAR_10->f_mapping)) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_4(VAR_10, VAR_13, VAR_12);
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16)
  goto out;





 switch (VAR_11) {
 case 130:
  VAR_16 = -VAR_2;
  if (VAR_12->l_pid != 0)
   goto out;

  VAR_11 = VAR_6;
  VAR_13->fl_flags |= VAR_4;
  VAR_13->fl_owner = VAR_10;
  break;
 case 129:
  VAR_16 = -VAR_2;
  if (VAR_12->l_pid != 0)
   goto out;

  VAR_11 = 128;
  VAR_13->fl_flags |= VAR_4;
  VAR_13->fl_owner = VAR_10;

 case 128:
  VAR_13->fl_flags |= VAR_5;
 }

 VAR_16 = FUNC_2(VAR_10, VAR_11, VAR_13);






 if (!VAR_16 && VAR_13->fl_type != VAR_7 &&
     !(VAR_13->fl_flags & VAR_4)) {





  FUNC_10(&VAR_8->files->file_lock);
  VAR_15 = FUNC_3(VAR_9);
  FUNC_11(&VAR_8->files->file_lock);
  if (VAR_15 != VAR_10) {
   VAR_13->fl_type = VAR_7;
   VAR_16 = FUNC_2(VAR_10, VAR_11, VAR_13);
   FUNC_0(VAR_16);
   VAR_16 = -VAR_1;
  }
 }
out:
 FUNC_12(VAR_14, VAR_13, VAR_16);
 FUNC_6(VAR_13);
 return VAR_16;
}
