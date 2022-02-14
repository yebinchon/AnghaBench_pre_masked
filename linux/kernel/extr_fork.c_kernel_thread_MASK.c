
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_clone_args {unsigned long flags; unsigned long exit_signal; unsigned long stack; unsigned long stack_size; } ;
typedef int pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct kernel_clone_args*) ;

pid_t FUNC_1(int (*VAR_3)(void *), void *VAR_4, unsigned long VAR_5)
{
 struct kernel_clone_args VAR_6 = {
  .flags = ((VAR_5 | VAR_1 | VAR_0) & ~VAR_2),
  .exit_signal = (VAR_5 & VAR_2),
  .stack = (unsigned long)VAR_3,
  .stack_size = (unsigned long)VAR_4,
 };

 return FUNC_0(&VAR_6);
}
