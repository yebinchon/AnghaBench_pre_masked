
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {int ipip_list_node; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_2__ {int ipip_list; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_ipip_entry*) ;
 int FUNC_1 (int *,int *) ;
 struct mlxsw_sp_ipip_entry* FUNC_2 (struct mlxsw_sp*,int,struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_ipip_entry *
FUNC_3(struct mlxsw_sp *VAR_0,
      enum mlxsw_sp_ipip_type VAR_1,
      struct net_device *VAR_2)
{
 struct mlxsw_sp_ipip_entry *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return VAR_3;

 FUNC_1(&VAR_3->ipip_list_node,
        &VAR_0->router->ipip_list);

 return VAR_3;
}
