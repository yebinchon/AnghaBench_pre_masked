
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_hw_stats {int cells_bytes; int (* getter ) (char*) ;} ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ppcnt_grp { ____Placeholder_mlxsw_reg_ppcnt_grp } mlxsw_reg_ppcnt_grp ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp_port_hw_stats**,int*,int) ;
 int FUNC_2 (struct net_device*,int,int,char*) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
          enum mlxsw_reg_ppcnt_grp VAR_2, int VAR_3,
          u64 *VAR_4, int VAR_5)
{
 struct mlxsw_sp_port *VAR_6 = FUNC_3(VAR_1);
 struct mlxsw_sp *VAR_7 = VAR_6->mlxsw_sp;
 struct mlxsw_sp_port_hw_stats *VAR_8;
 char VAR_9[VAR_0];
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(&VAR_8, &VAR_11, VAR_2);
 if (VAR_12)
  return;
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_4[VAR_5 + VAR_10] = VAR_8[VAR_10].getter(VAR_9);
  if (!VAR_8[VAR_10].cells_bytes)
   continue;
  VAR_4[VAR_5 + VAR_10] = FUNC_0(VAR_7,
           VAR_4[VAR_5 + VAR_10]);
 }
}
