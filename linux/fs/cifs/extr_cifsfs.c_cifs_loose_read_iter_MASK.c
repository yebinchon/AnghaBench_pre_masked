
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int f_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iov_iter*) ;
 struct inode* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct kiocb*,struct iov_iter*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 ssize_t VAR_3;
 struct inode *VAR_4 = FUNC_2(VAR_1->ki_filp);

 if (VAR_1->ki_filp->f_flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);

 VAR_3 = FUNC_0(VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_3(VAR_1, VAR_2);
}
