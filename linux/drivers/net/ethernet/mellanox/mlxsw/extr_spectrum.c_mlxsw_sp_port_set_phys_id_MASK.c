
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
         enum ethtool_phys_id_state VAR_4)
{
 struct mlxsw_sp_port *VAR_5 = FUNC_3(VAR_3);
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;
 char VAR_7[VAR_1];
 bool VAR_8;

 switch (VAR_4) {
 case 129:
  VAR_8 = 1;
  break;
 case 128:
  VAR_8 = 0;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_5->local_port, VAR_8);
 return FUNC_2(VAR_6->core, FUNC_0(VAR_2), VAR_7);
}
