
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kiocb*,struct inode*,struct iov_iter*,int ) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_3(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2->ki_filp);

 if (FUNC_2(VAR_3) == VAR_0)
  return 0;


 return FUNC_0(VAR_2, VAR_4, VAR_3, VAR_1);
}
