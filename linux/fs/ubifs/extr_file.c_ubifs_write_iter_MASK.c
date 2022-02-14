
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_filp; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 int VAR_2 = FUNC_2(FUNC_0(VAR_0->ki_filp));
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
