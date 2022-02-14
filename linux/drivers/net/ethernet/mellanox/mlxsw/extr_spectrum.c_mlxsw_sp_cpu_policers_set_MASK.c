
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_core {int dummy; } ;
typedef enum mlxsw_reg_qpcr_ir_units { ____Placeholder_mlxsw_reg_qpcr_ir_units } mlxsw_reg_qpcr_ir_units ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int,int,int,int) ;
 int FUNC_4 (struct mlxsw_core*,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_core *VAR_5)
{
 char VAR_6[VAR_3];
 enum mlxsw_reg_qpcr_ir_units VAR_7;
 int VAR_8;
 bool VAR_9;
 u8 VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_1(VAR_5, VAR_1))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5, VAR_1);

 VAR_7 = VAR_2;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_9 = 0;
  switch (VAR_12) {
  case 128:
  case 139:
  case 137:
  case 135:
  case 134:
  case 129:
  case 138:
   VAR_11 = 128;
   VAR_10 = 7;
   break;
  case 143:
  case 141:
   VAR_11 = 16 * 1024;
   VAR_10 = 10;
   break;
  case 146:
  case 147:
  case 145:
  case 144:
  case 130:
  case 131:
  case 140:
  case 136:
   VAR_11 = 1024;
   VAR_10 = 7;
   break;
  case 142:
   VAR_11 = 1024;
   VAR_10 = 7;
   break;
  case 133:
   VAR_11 = 24 * 1024;
   VAR_10 = 12;
   break;
  case 132:
   VAR_11 = 19 * 1024;
   VAR_10 = 12;
   break;
  default:
   continue;
  }

  FUNC_3(VAR_6, VAR_12, VAR_7, VAR_9, VAR_11,
        VAR_10);
  VAR_13 = FUNC_4(VAR_5, FUNC_2(VAR_4), VAR_6);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
