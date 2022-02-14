
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; scalar_t__ l_level; } ;
struct ocfs2_file_private {int fp_mutex; struct ocfs2_lock_res fp_flock; } ;
struct inode {int dummy; } ;
struct file_lock {scalar_t__ fl_type; int fl_flags; } ;
struct file {struct ocfs2_file_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct file_lock*) ;
 int FUNC_2 (struct file*,struct file_lock*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,int,int) ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_8, struct inode *VAR_9,
     int VAR_10, struct file_lock *VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 struct ocfs2_file_private *VAR_15 = VAR_8->private_data;
 struct ocfs2_lock_res *VAR_16 = &VAR_15->fp_flock;

 if (VAR_11->fl_type == VAR_4)
  VAR_13 = 1;
 if (!FUNC_0(VAR_10))
  VAR_14 = 1;

 FUNC_4(&VAR_15->fp_mutex);

 if (VAR_16->l_flags & VAR_7 &&
     VAR_16->l_level > VAR_6) {
  int VAR_17 = 0;
  struct file_lock VAR_18;

  if (VAR_16->l_level == VAR_5)
   VAR_17 = 1;

  if (VAR_13 == VAR_17)
   goto out;
  FUNC_1(&VAR_18);
  VAR_18.fl_type = VAR_3;
  VAR_18.fl_flags = VAR_2;
  FUNC_2(VAR_8, &VAR_18);

  FUNC_7(VAR_8);
 }

 VAR_12 = FUNC_6(VAR_8, VAR_13, VAR_14);
 if (VAR_12) {
  if (VAR_12 == -VAR_0 && VAR_14)
   VAR_12 = -VAR_1;
  else
   FUNC_3(VAR_12);
  goto out;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_11);
 if (VAR_12)
  FUNC_7(VAR_8);

out:
 FUNC_5(&VAR_15->fp_mutex);

 return VAR_12;
}
