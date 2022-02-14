
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct fuse_file {int open_flags; } ;
struct file {struct fuse_file* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct fuse_file *VAR_5 = VAR_4->private_data;

 if (FUNC_3(FUNC_0(VAR_4)))
  return -VAR_0;

 if (!(VAR_5->open_flags & VAR_1))
  return FUNC_1(VAR_2, VAR_3);
 else
  return FUNC_2(VAR_2, VAR_3);
}
