
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum mlxsw_reg_ptys_connector_type { ____Placeholder_mlxsw_reg_ptys_connector_type } mlxsw_reg_ptys_connector_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u8
FUNC_1(enum mlxsw_reg_ptys_connector_type VAR_8)
{
 switch (VAR_8) {
 case 128:
  return VAR_6;
 case 131:
  return VAR_5;
 case 129:
  return VAR_7;
 case 136:
  return VAR_0;
 case 135:
  return VAR_1;
 case 132:
  return VAR_4;
 case 133:
  return VAR_3;
 case 134:
  return VAR_2;
 case 130:
  return VAR_6;
 default:
  FUNC_0(1);
  return VAR_6;
 }
}
