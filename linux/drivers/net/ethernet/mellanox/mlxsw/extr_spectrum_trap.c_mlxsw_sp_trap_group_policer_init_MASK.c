
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
struct devlink_trap_group {int id; } ;
typedef enum mlxsw_reg_qpcr_ir_units { ____Placeholder_mlxsw_reg_qpcr_ir_units } mlxsw_reg_qpcr_ir_units ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int,int,int,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_5,
     const struct devlink_trap_group *VAR_6)
{
 enum mlxsw_reg_qpcr_ir_units VAR_7;
 char VAR_8[VAR_2];
 u16 VAR_9;
 u8 VAR_10;
 bool VAR_11;
 u32 VAR_12;

 switch (VAR_6->id) {
 case 128:
  VAR_9 = VAR_3;
  VAR_7 = VAR_1;
  VAR_11 = 0;
  VAR_12 = 10 * 1024;
  VAR_10 = 7;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_9, VAR_7, VAR_11, VAR_12,
       VAR_10);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_4), VAR_8);
}
