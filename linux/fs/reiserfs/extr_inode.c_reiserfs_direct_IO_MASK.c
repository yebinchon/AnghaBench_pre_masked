
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kiocb*,struct inode*,struct iov_iter*,int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,scalar_t__) ;
 size_t FUNC_3 (struct iov_iter*) ;
 scalar_t__ FUNC_4 (struct iov_iter*) ;
 int VAR_1 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct inode *VAR_5 = VAR_4->f_mapping->host;
 size_t VAR_6 = FUNC_3(VAR_3);
 ssize_t VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_3,
     VAR_1);





 if (FUNC_7(FUNC_4(VAR_3) == VAR_0 && VAR_7 < 0)) {
  loff_t VAR_8 = FUNC_1(VAR_5);
  loff_t VAR_9 = VAR_2->ki_pos + VAR_6;

  if ((VAR_9 > VAR_8) && FUNC_2(VAR_5, VAR_8) == 0) {
   FUNC_6(VAR_5, VAR_8);
   FUNC_5(VAR_5);
  }
 }

 return VAR_7;
}
