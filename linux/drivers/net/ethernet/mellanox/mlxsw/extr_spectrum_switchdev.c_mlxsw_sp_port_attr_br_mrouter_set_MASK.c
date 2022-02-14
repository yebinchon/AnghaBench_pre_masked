
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_device {int mrouter; } ;
struct mlxsw_sp {int bridge; } ;


 struct mlxsw_sp_bridge_device* FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_bridge_device*,int) ;
 scalar_t__ FUNC_2 (struct switchdev_trans*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_0,
      struct switchdev_trans *VAR_1,
      struct net_device *VAR_2,
      bool VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_bridge_device *VAR_5;

 if (FUNC_2(VAR_1))
  return 0;




 VAR_5 = FUNC_0(VAR_4->bridge, VAR_2);
 if (!VAR_5)
  return 0;

 if (VAR_5->mrouter != VAR_3)
  FUNC_1(VAR_4, VAR_5,
         VAR_3);
 VAR_5->mrouter = VAR_3;
 return 0;
}
