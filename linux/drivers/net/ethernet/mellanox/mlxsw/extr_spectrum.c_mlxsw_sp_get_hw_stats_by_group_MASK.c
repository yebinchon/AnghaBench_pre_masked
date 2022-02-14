
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port_hw_stats {int dummy; } ;
typedef enum mlxsw_reg_ppcnt_grp { ____Placeholder_mlxsw_reg_ppcnt_grp } mlxsw_reg_ppcnt_grp ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct mlxsw_sp_port_hw_stats* VAR_8 ;
 struct mlxsw_sp_port_hw_stats* VAR_9 ;
 struct mlxsw_sp_port_hw_stats* VAR_10 ;
 struct mlxsw_sp_port_hw_stats* VAR_11 ;
 struct mlxsw_sp_port_hw_stats* VAR_12 ;
 struct mlxsw_sp_port_hw_stats* VAR_13 ;
 struct mlxsw_sp_port_hw_stats* VAR_14 ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_port_hw_stats **VAR_15,
          int *VAR_16, enum mlxsw_reg_ppcnt_grp VAR_17)
{
 switch (VAR_17) {
 case 133:
  *VAR_15 = VAR_13;
  *VAR_16 = VAR_6;
  break;
 case 130:
  *VAR_15 = VAR_11;
  *VAR_16 = VAR_4;
  break;
 case 131:
  *VAR_15 = VAR_10;
  *VAR_16 = VAR_3;
  break;
 case 129:
  *VAR_15 = VAR_12;
  *VAR_16 = VAR_5;
  break;
 case 134:
  *VAR_15 = VAR_8;
  *VAR_16 = VAR_1;
  break;
 case 132:
  *VAR_15 = VAR_9;
  *VAR_16 = VAR_2;
  break;
 case 128:
  *VAR_15 = VAR_14;
  *VAR_16 = VAR_7;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
 return 0;
}
