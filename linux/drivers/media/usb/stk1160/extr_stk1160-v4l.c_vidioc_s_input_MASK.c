
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {unsigned int ctl_input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct stk1160*) ;
 struct stk1160* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct stk1160 *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_5->ctl_input = VAR_4;

 FUNC_0(VAR_5);

 return 0;
}
