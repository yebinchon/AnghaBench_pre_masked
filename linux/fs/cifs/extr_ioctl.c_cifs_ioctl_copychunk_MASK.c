
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_size; int i_mode; } ;
struct file {int f_mode; } ;
struct fd {TYPE_2__* file; } ;
struct TYPE_5__ {TYPE_1__* f_op; } ;
struct TYPE_4__ {scalar_t__ unlocked_ioctl; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned int,TYPE_2__*,int ,struct file*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 struct fd FUNC_3 (unsigned long) ;
 int FUNC_4 (struct fd) ;
 struct inode* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static long FUNC_8(unsigned int VAR_6, struct file *VAR_7,
   unsigned long VAR_8)
{
 int VAR_9;
 struct fd VAR_10;
 struct inode *VAR_11;

 FUNC_1(VAR_3, "ioctl copychunk range\n");

 if (!(VAR_7->f_mode & VAR_2)) {
  FUNC_1(VAR_3, "file target not open for write\n");
  return -VAR_1;
 }


 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_3, "mnt_want_write failed with rc %d\n", VAR_9);
  return VAR_9;
 }

 VAR_10 = FUNC_3(VAR_8);
 if (!VAR_10.file) {
  VAR_9 = -VAR_0;
  goto out_drop_write;
 }

 if (VAR_10.file->f_op->unlocked_ioctl != VAR_5) {
  VAR_9 = -VAR_0;
  FUNC_1(VAR_4, "src file seems to be from a different filesystem type\n");
  goto out_fput;
 }

 VAR_11 = FUNC_5(VAR_10.file);
 VAR_9 = -VAR_1;
 if (FUNC_0(VAR_11->i_mode))
  goto out_fput;

 VAR_9 = FUNC_2(VAR_6, VAR_10.file, 0, VAR_7, 0,
     VAR_11->i_size, 0);
 if (VAR_9 > 0)
  VAR_9 = 0;
out_fput:
 FUNC_4(VAR_10);
out_drop_write:
 FUNC_6(VAR_7);
 return VAR_9;
}
