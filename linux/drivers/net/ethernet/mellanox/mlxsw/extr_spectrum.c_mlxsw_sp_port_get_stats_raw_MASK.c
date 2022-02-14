
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2,
           int VAR_3, char *VAR_4)
{
 struct mlxsw_sp_port *VAR_5 = FUNC_3(VAR_1);
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;

 FUNC_1(VAR_4, VAR_5->local_port, VAR_2, VAR_3);
 return FUNC_2(VAR_6->core, FUNC_0(VAR_0), VAR_4);
}
