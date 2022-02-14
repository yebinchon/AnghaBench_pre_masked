
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct devlink_port {int dummy; } ;


 struct devlink_port* FUNC_0 (int ,int ) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct devlink_port *
FUNC_2(struct net_device *VAR_0)
{
 struct mlxsw_sp_port *VAR_1 = FUNC_1(VAR_0);
 struct mlxsw_sp *VAR_2 = VAR_1->mlxsw_sp;

 return FUNC_0(VAR_2->core,
      VAR_1->local_port);
}
