
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {scalar_t__ ki_pos; int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct blk_plug {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct kiocb*,struct iov_iter*) ;
 struct inode* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct blk_plug*) ;
 scalar_t__ FUNC_7 (struct kiocb*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct iov_iter*) ;
 int FUNC_10 (struct iov_iter*,scalar_t__) ;

ssize_t FUNC_11(struct kiocb *VAR_6, struct iov_iter *VAR_7)
{
 struct file *VAR_8 = VAR_6->ki_filp;
 struct inode *VAR_9 = FUNC_3(VAR_8);
 loff_t VAR_10 = FUNC_8(VAR_9);
 struct blk_plug VAR_11;
 ssize_t VAR_12;

 if (FUNC_4(FUNC_1(VAR_9)))
  return -VAR_2;

 if (FUNC_0(VAR_9))
  return -VAR_3;

 if (!FUNC_9(VAR_7))
  return 0;

 if (VAR_6->ki_pos >= VAR_10)
  return -VAR_0;

 if ((VAR_6->ki_flags & (VAR_5 | VAR_4)) == VAR_5)
  return -VAR_1;

 FUNC_10(VAR_7, VAR_10 - VAR_6->ki_pos);

 FUNC_6(&VAR_11);
 VAR_12 = FUNC_2(VAR_6, VAR_7);
 if (VAR_12 > 0)
  VAR_12 = FUNC_7(VAR_6, VAR_12);
 FUNC_5(&VAR_11);
 return VAR_12;
}
