
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {int ipipt; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_4__ {TYPE_1__** ipip_ops_arr; } ;
struct TYPE_3__ {int ul_proto; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct mlxsw_sp*,int,union mlxsw_sp_l3addr,int ,struct mlxsw_sp_ipip_entry*) ;

__attribute__((used)) static bool
FUNC_2(struct mlxsw_sp *VAR_1,
      const struct net_device *VAR_2,
      enum mlxsw_sp_l3proto VAR_3,
      union mlxsw_sp_l3addr VAR_4,
      struct mlxsw_sp_ipip_entry *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_2) ? : VAR_0;
 enum mlxsw_sp_ipip_type VAR_7 = VAR_5->ipipt;

 if (VAR_1->router->ipip_ops_arr[VAR_7]->ul_proto != VAR_3)
  return 0;

 return FUNC_1(VAR_1, VAR_3, VAR_4,
       VAR_6, VAR_5);
}
