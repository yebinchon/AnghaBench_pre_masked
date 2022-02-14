
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct mlxsw_sp_router {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;
struct mlxsw_sp_ipip_ops {scalar_t__ dev_type; } ;
struct mlxsw_sp {struct mlxsw_sp_router* router; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct mlxsw_sp *VAR_1,
          const struct net_device *VAR_2,
          enum mlxsw_sp_ipip_type *VAR_3)
{
 struct mlxsw_sp_router *VAR_4 = VAR_1->router;
 const struct mlxsw_sp_ipip_ops *VAR_5;
 enum mlxsw_sp_ipip_type VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  VAR_5 = VAR_4->ipip_ops_arr[VAR_6];
  if (VAR_2->type == VAR_5->dev_type) {
   if (VAR_3)
    *VAR_3 = VAR_6;
   return 1;
  }
 }
 return 0;
}
