
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_nexthop_group {int nh_rif; int adj_index_valid; } ;
struct mlxsw_sp_fib_entry {int type; TYPE_2__* fib_node; struct mlxsw_sp_nexthop_group* nh_group; } ;
struct TYPE_4__ {TYPE_1__* fib; } ;
struct TYPE_3__ {int proto; } ;
 int FUNC_0 (struct mlxsw_sp_fib_entry const*) ;

__attribute__((used)) static bool
FUNC_1(const struct mlxsw_sp_fib_entry *VAR_0)
{
 struct mlxsw_sp_nexthop_group *VAR_1 = VAR_0->nh_group;

 switch (VAR_0->fib_node->fib->proto) {
 case 129:
  if (!FUNC_0(VAR_0))
   return 0;
  break;
 case 128:
  break;
 }

 switch (VAR_0->type) {
 case 130:
  return !!VAR_1->adj_index_valid;
 case 132:
  return !!VAR_1->nh_rif;
 case 134:
 case 133:
 case 131:
  return 1;
 default:
  return 0;
 }
}
