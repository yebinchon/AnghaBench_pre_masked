
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct urfile {int file_reclen; int dev_reclen; } ;
struct urdev {scalar_t__ open_flag; scalar_t__ class; int open_lock; int reclen; int wait; } ;
struct inode {int dummy; } ;
struct file {unsigned short f_flags; struct urfile* private_data; } ;
struct TYPE_2__ {int i_rdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (struct file*) ;
 int FUNC_3 (struct urdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct urdev* FUNC_6 (int ) ;
 int FUNC_7 (struct urdev*) ;
 struct urfile* FUNC_8 (struct urdev*) ;
 int FUNC_9 (struct urfile*) ;
 int FUNC_10 (struct urdev*) ;
 scalar_t__ FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_12, struct file *VAR_13)
{
 u16 VAR_14;
 struct urdev *VAR_15;
 struct urfile *VAR_16;
 unsigned short VAR_17;
 int VAR_18;

 VAR_17 = VAR_13->f_flags & VAR_7;

 if (VAR_17 == VAR_10)
  return -VAR_2;




 VAR_14 = FUNC_0(FUNC_2(VAR_13)->i_rdev);

 VAR_15 = FUNC_6(VAR_14);
 if (!VAR_15) {
  VAR_18 = -VAR_5;
  goto out;
 }

 FUNC_4(&VAR_15->open_lock);
 while (VAR_15->open_flag) {
  FUNC_5(&VAR_15->open_lock);
  if (VAR_13->f_flags & VAR_8) {
   VAR_18 = -VAR_3;
   goto fail_put;
  }
  if (FUNC_11(VAR_15->wait, VAR_15->open_flag == 0)) {
   VAR_18 = -VAR_6;
   goto fail_put;
  }
  FUNC_4(&VAR_15->open_lock);
 }
 VAR_15->open_flag++;
 FUNC_5(&VAR_15->open_lock);

 FUNC_1("ur_open\n");

 if (((VAR_17 == VAR_9) && (VAR_15->class != VAR_0)) ||
     ((VAR_17 == VAR_11) && (VAR_15->class != VAR_1))) {
  FUNC_1("ur_open: unsupported dev class (%d)\n", VAR_15->class);
  VAR_18 = -VAR_2;
  goto fail_unlock;
 }

 VAR_18 = FUNC_10(VAR_15);
 if (VAR_18)
  goto fail_unlock;

 VAR_16 = FUNC_8(VAR_15);
 if (!VAR_16) {
  VAR_18 = -VAR_4;
  goto fail_unlock;
 }

 VAR_16->dev_reclen = VAR_15->reclen;
 VAR_18 = FUNC_3(VAR_15);
 if (VAR_18 < 0)
  goto fail_urfile_free;
 VAR_16->file_reclen = VAR_18;
 VAR_13->private_data = VAR_16;
 return 0;

fail_urfile_free:
 FUNC_9(VAR_16);
fail_unlock:
 FUNC_4(&VAR_15->open_lock);
 VAR_15->open_flag--;
 FUNC_5(&VAR_15->open_lock);
fail_put:
 FUNC_7(VAR_15);
out:
 return VAR_18;
}
