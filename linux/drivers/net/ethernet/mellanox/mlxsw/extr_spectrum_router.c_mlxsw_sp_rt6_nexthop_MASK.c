
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_rt6 {struct fib6_info* rt; } ;
struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {int gw_addr; TYPE_1__* rif; } ;
struct in6_addr {int dummy; } ;
struct fib6_info {TYPE_2__* fib6_nh; } ;
struct TYPE_4__ {scalar_t__ fib_nh_dev; int fib_nh_gw6; } ;
struct TYPE_3__ {scalar_t__ dev; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*,int *) ;

__attribute__((used)) static struct mlxsw_sp_nexthop *
FUNC_1(struct mlxsw_sp_nexthop_group *VAR_0,
       const struct mlxsw_sp_rt6 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  struct mlxsw_sp_nexthop *VAR_3 = &VAR_0->nexthops[VAR_2];
  struct fib6_info *VAR_4 = VAR_1->rt;

  if (VAR_3->rif && VAR_3->rif->dev == VAR_4->fib6_nh->fib_nh_dev &&
      FUNC_0((const struct in6_addr *) &VAR_3->gw_addr,
        &VAR_4->fib6_nh->fib_nh_gw6))
   return VAR_3;
  continue;
 }

 return ((void*)0);
}
