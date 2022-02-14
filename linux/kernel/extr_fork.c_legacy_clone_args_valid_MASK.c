
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_clone_args {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(const struct kernel_clone_args *VAR_2)
{

 if ((VAR_2->flags & VAR_1) &&
     (VAR_2->flags & VAR_0))
  return 0;

 return 1;
}
