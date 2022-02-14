
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_upper {int ref_count; } ;
struct mlxsw_sp_port {scalar_t__ lagged; int local_port; int default_vlan; int lag_id; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_upper* FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (struct mlxsw_sp_port*,struct net_device*) ;
 int FUNC_6 (struct mlxsw_sp_port*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlxsw_sp_port*,int) ;

__attribute__((used)) static void FUNC_9(struct mlxsw_sp_port *VAR_1,
        struct net_device *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_1->mlxsw_sp;
 u16 VAR_4 = VAR_1->lag_id;
 struct mlxsw_sp_upper *VAR_5;

 if (!VAR_1->lagged)
  return;
 VAR_5 = FUNC_4(VAR_3, VAR_4);
 FUNC_0(VAR_5->ref_count == 0);

 FUNC_2(VAR_1, VAR_4);


 FUNC_8(VAR_1, 0);
 FUNC_7(VAR_1->default_vlan);



 FUNC_5(VAR_1, VAR_2);

 if (VAR_5->ref_count == 1)
  FUNC_3(VAR_3, VAR_4);

 FUNC_1(VAR_3->core, VAR_4,
         VAR_1->local_port);
 VAR_1->lagged = 0;
 VAR_5->ref_count--;


 FUNC_6(VAR_1, VAR_0);
}
