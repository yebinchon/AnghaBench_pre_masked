
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 size_t FUNC_7 (struct iov_iter*) ;
 scalar_t__ FUNC_8 (struct iov_iter*) ;
 int FUNC_9 (struct inode*,int ,size_t,scalar_t__) ;
 int FUNC_10 (struct inode*,int ,size_t,scalar_t__,int ) ;

__attribute__((used)) static ssize_t FUNC_11(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct file *VAR_3 = VAR_1->ki_filp;
 struct inode *VAR_4 = VAR_3->f_mapping->host;
 size_t VAR_5 = FUNC_7(VAR_2);
 loff_t VAR_6 = VAR_1->ki_pos;
 ssize_t VAR_7;





 if (FUNC_6(VAR_4))
  return 0;




 if (FUNC_5(VAR_4))
  return 0;


 if (FUNC_4(VAR_4))
  return 0;

 FUNC_9(VAR_4, VAR_6, VAR_5, FUNC_8(VAR_2));
 if (FUNC_8(VAR_2) == VAR_0)
  VAR_7 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_7 = FUNC_3(VAR_1, VAR_2);
 FUNC_10(VAR_4, VAR_6, VAR_5, FUNC_8(VAR_2), VAR_7);
 return VAR_7;
}
