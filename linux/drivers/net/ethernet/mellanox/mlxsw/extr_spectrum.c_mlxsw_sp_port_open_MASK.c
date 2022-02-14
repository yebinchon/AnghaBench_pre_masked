
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_port*,int) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct mlxsw_sp_port *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2)
  return VAR_2;
 FUNC_2(VAR_0);
 return 0;
}
