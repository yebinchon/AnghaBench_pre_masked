
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,struct mlxsw_sp_port**) ;

struct mlxsw_sp_port *FUNC_3(struct net_device *VAR_1)
{
 struct mlxsw_sp_port *VAR_2;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_2 = ((void*)0);
 FUNC_2(VAR_1, VAR_0, &VAR_2);

 return VAR_2;
}
