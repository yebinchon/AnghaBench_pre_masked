
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_0,
          unsigned int VAR_1, unsigned long VAR_2)
{
 long VAR_3;


 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return (int)VAR_3;

 return (int)FUNC_1(VAR_1, VAR_2);
}
