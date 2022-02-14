
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct fib6_info {int fib6_flags; TYPE_1__ fib6_dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(const struct fib6_info *VAR_3)
{




 if (FUNC_0(&VAR_3->fib6_dst.addr) & VAR_0)
  return 1;




 if (FUNC_0(&VAR_3->fib6_dst.addr) & VAR_1)
  return 1;


 if (VAR_3->fib6_flags & VAR_2)
  return 1;

 return 0;
}
