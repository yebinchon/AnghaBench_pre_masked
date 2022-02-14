
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_port* FUNC_0 (struct net_device*) ;

struct mlxsw_sp *FUNC_1(struct net_device *VAR_0)
{
 struct mlxsw_sp_port *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->mlxsw_sp : ((void*)0);
}
