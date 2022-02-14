
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iov_iter*) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 long FUNC_3 (struct file*,struct iov_iter*,unsigned int) ;
 long FUNC_4 (struct file*,struct iov_iter*,unsigned int) ;

__attribute__((used)) static long FUNC_5(struct file *VAR_3, struct iov_iter *VAR_4, unsigned int VAR_5)
{
 if (FUNC_2(VAR_5 & ~VAR_1))
  return -VAR_0;

 if (!FUNC_0(VAR_4))
  return 0;

 if (FUNC_1(VAR_4) == VAR_2)
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 else
  return FUNC_4(VAR_3, VAR_4, VAR_5);
}
