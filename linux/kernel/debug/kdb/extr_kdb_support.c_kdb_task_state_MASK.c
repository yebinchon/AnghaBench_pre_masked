
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 char FUNC_0 (struct task_struct const*) ;
 unsigned long FUNC_1 (char*) ;

unsigned long FUNC_2(const struct task_struct *VAR_0, unsigned long VAR_1)
{
 char VAR_2[] = { FUNC_0(VAR_0), '\0' };
 return (VAR_1 & FUNC_1(VAR_2)) != 0;
}
