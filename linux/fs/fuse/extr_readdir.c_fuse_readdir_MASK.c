
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fuse_file {int open_flags; TYPE_1__ readdir; } ;
struct file {struct fuse_file* private_data; } ;
struct dir_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct file *VAR_3, struct dir_context *VAR_4)
{
 struct fuse_file *VAR_5 = VAR_3->private_data;
 struct inode *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 if (FUNC_3(VAR_6))
  return -VAR_0;

 FUNC_4(&VAR_5->readdir.lock);

 VAR_7 = VAR_2;
 if (VAR_5->open_flags & VAR_1)
  VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7 == VAR_2)
  VAR_7 = FUNC_2(VAR_3, VAR_4);

 FUNC_5(&VAR_5->readdir.lock);

 return VAR_7;
}
