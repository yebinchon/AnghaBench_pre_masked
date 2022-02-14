
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct file *VAR_0, loff_t VAR_1, ssize_t VAR_2,
  size_t VAR_3)
{
 if (VAR_3 != 0 && VAR_2 == 0)
  return 1;
 if (VAR_1+VAR_2 >= FUNC_1(FUNC_0(VAR_0)))
  return 1;
 return 0;
}
