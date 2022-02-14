
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;
struct mlxsw_sx_port {scalar_t__ local_port; struct net_device* dev; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sx_port *VAR_3)
{
 struct mlxsw_sx *VAR_4 = VAR_3->mlxsw_sx;
 struct net_device *VAR_5 = VAR_3->dev;
 char VAR_6[VAR_1];
 int VAR_7;

 FUNC_2(VAR_6, 0, 0);
 VAR_7 = FUNC_3(VAR_4->core, FUNC_0(VAR_2), VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_1(VAR_6, VAR_5->dev_addr);




 VAR_5->dev_addr[VAR_0 - 1] += VAR_3->local_port;
 return 0;
}
