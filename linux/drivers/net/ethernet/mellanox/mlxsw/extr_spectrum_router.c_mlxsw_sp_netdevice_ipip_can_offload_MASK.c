
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_ops {scalar_t__ (* can_offload ) (struct mlxsw_sp*,struct net_device const*,int ) ;} ;
struct mlxsw_sp {TYPE_1__* router; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_2__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp*,struct net_device const*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,struct net_device const*,int ) ;

__attribute__((used)) static bool FUNC_2(struct mlxsw_sp *VAR_2,
      const struct net_device *VAR_3,
      enum mlxsw_sp_ipip_type VAR_4)
{
 const struct mlxsw_sp_ipip_ops *VAR_5
  = VAR_2->router->ipip_ops_arr[VAR_4];




 return VAR_5->can_offload(VAR_2, VAR_3, VAR_0) ||
        VAR_5->can_offload(VAR_2, VAR_3, VAR_1);
}
