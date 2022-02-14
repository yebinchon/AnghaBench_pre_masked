
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,struct iov_iter*,int ) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*,int) ;
 int FUNC_2 (struct iov_iter*,int) ;
 scalar_t__ FUNC_3 (struct kiocb*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static ssize_t
FUNC_5(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0 + 1);
 if (!VAR_3)
  return 0;
 if (FUNC_3(VAR_1) && VAR_3 <= VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, FUNC_4(VAR_3, VAR_0));
}
