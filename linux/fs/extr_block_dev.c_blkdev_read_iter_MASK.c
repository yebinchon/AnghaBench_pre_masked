
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct iov_iter*,scalar_t__) ;

ssize_t FUNC_4(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct inode *VAR_3 = FUNC_0(VAR_2);
 loff_t VAR_4 = FUNC_2(VAR_3);
 loff_t VAR_5 = VAR_0->ki_pos;

 if (VAR_5 >= VAR_4)
  return 0;

 VAR_4 -= VAR_5;
 FUNC_3(VAR_1, VAR_4);
 return FUNC_1(VAR_0, VAR_1);
}
