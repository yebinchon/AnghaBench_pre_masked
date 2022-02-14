
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; int fib_list; } ;
struct TYPE_3__ {TYPE_2__* fib_nh; } ;
struct mlxsw_sp_nexthop {TYPE_1__ key; } ;
struct mlxsw_sp_fib_entry {struct mlxsw_sp_nexthop_group* nh_group; } ;
struct TYPE_4__ {int fib_nh_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_fib_entry *VAR_1)
{
 struct mlxsw_sp_nexthop_group *VAR_2 = VAR_1->nh_group;
 int VAR_3;

 if (!FUNC_0(&VAR_2->fib_list))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
  struct mlxsw_sp_nexthop *VAR_4 = &VAR_2->nexthops[VAR_3];

  VAR_4->key.fib_nh->fib_nh_flags &= ~VAR_0;
 }
}
