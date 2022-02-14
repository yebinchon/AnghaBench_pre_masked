
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib6_info {int fib6_flags; TYPE_1__* fib6_nh; } ;
struct TYPE_2__ {scalar_t__ fib_nh_gw_family; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct fib6_info *VAR_1)
{

 return !(VAR_1->fib6_flags & VAR_0) &&
  VAR_1->fib6_nh->fib_nh_gw_family;
}
