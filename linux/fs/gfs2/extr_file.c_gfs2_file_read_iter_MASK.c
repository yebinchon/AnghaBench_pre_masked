
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kiocb*,struct iov_iter*) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 ssize_t VAR_4;

 if (VAR_2->ki_flags & VAR_1) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (FUNC_2(VAR_4 != -VAR_0))
   return VAR_4;
  VAR_2->ki_flags &= ~VAR_1;
 }
 return FUNC_0(VAR_2, VAR_3);
}
