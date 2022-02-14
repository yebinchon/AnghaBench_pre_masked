
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {int private_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 struct inode* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct iov_iter*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,struct iov_iter*,int*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,struct iov_iter*,int*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct file *VAR_3 = VAR_1->ki_filp;
 loff_t VAR_4 = VAR_1->ki_pos;
 ssize_t VAR_5;
 int VAR_6 = 0;
 if (FUNC_3(VAR_2) == VAR_0) {
  VAR_5 = FUNC_5(VAR_3->private_data, VAR_4, VAR_2, &VAR_6);
  if (VAR_5) {
   struct inode *VAR_7 = FUNC_0(VAR_3);
   loff_t VAR_8 = FUNC_1(VAR_7);
   if (VAR_4 + VAR_5 > VAR_8)
    FUNC_2(VAR_7, VAR_4 + VAR_5 - VAR_8);
  }
 } else {
  VAR_5 = FUNC_4(VAR_3->private_data, VAR_4, VAR_2, &VAR_6);
 }
 return VAR_5 ? VAR_5 : VAR_6;
}
