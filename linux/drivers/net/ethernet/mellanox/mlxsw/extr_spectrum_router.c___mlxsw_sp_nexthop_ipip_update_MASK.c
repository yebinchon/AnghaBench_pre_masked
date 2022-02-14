
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_nexthop {TYPE_2__* ipip_entry; } ;
struct mlxsw_sp_ipip_ops {int (* nexthop_update ) (struct mlxsw_sp*,int ,TYPE_2__*) ;} ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_4__ {size_t ipipt; } ;
struct TYPE_3__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_0,
       u32 VAR_1,
       struct mlxsw_sp_nexthop *VAR_2)
{
 const struct mlxsw_sp_ipip_ops *VAR_3;

 VAR_3 = VAR_0->router->ipip_ops_arr[VAR_2->ipip_entry->ipipt];
 return VAR_3->nexthop_update(VAR_0, VAR_1, VAR_2->ipip_entry);
}
