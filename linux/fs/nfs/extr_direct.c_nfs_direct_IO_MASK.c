
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_2__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 scalar_t__ FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct kiocb*,struct iov_iter*) ;
 int FUNC_5 (struct kiocb*,struct iov_iter*) ;

ssize_t FUNC_6(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = VAR_2->ki_filp->f_mapping->host;


 if (!FUNC_0(VAR_4))
  return 0;

 FUNC_1(FUNC_2(VAR_3) != VAR_0);

 if (FUNC_3(VAR_3) == VAR_1)
  return FUNC_4(VAR_2, VAR_3);
 return FUNC_5(VAR_2, VAR_3);
}
