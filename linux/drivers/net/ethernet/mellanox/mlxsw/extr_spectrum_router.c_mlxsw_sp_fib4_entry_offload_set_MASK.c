
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct TYPE_4__ {TYPE_1__* fib_nh; } ;
struct mlxsw_sp_nexthop {TYPE_2__ key; scalar_t__ offloaded; } ;
struct mlxsw_sp_fib_entry {scalar_t__ type; struct mlxsw_sp_nexthop_group* nh_group; } ;
struct TYPE_3__ {int fib_nh_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct mlxsw_sp_fib_entry *VAR_5)
{
 struct mlxsw_sp_nexthop_group *VAR_6 = VAR_5->nh_group;
 int VAR_7;

 if (VAR_5->type == VAR_2 ||
     VAR_5->type == VAR_0 ||
     VAR_5->type == VAR_1 ||
     VAR_5->type == VAR_3) {
  VAR_6->nexthops->key.fib_nh->fib_nh_flags |= VAR_4;
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  struct mlxsw_sp_nexthop *VAR_8 = &VAR_6->nexthops[VAR_7];

  if (VAR_8->offloaded)
   VAR_8->key.fib_nh->fib_nh_flags |= VAR_4;
  else
   VAR_8->key.fib_nh->fib_nh_flags &= ~VAR_4;
 }
}
