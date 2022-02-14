
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_core {int dummy; } ;
typedef enum mlxsw_reg_htgt_trap_group { ____Placeholder_mlxsw_reg_htgt_trap_group } mlxsw_reg_htgt_trap_group ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (struct mlxsw_core*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_core *VAR_8)
{
 char VAR_9[VAR_6];
 enum mlxsw_reg_htgt_trap_group VAR_10;
 int VAR_11;
 int VAR_12;
 u8 VAR_13, VAR_14;
 u16 VAR_15;
 int VAR_16;

 if (!FUNC_1(VAR_8, VAR_2))
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_8, VAR_2);
 VAR_11 = FUNC_0(VAR_8, VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  VAR_15 = VAR_10;
  switch (VAR_10) {
  case 128:
  case 139:
  case 137:
  case 135:
  case 134:
  case 133:
   VAR_13 = 5;
   VAR_14 = 5;
   break;
  case 147:
  case 146:
   VAR_13 = 4;
   VAR_14 = 4;
   break;
  case 143:
  case 142:
  case 141:
   VAR_13 = 3;
   VAR_14 = 3;
   break;
  case 148:
  case 140:
  case 129:
  case 132:
   VAR_13 = 2;
   VAR_14 = 2;
   break;
  case 144:
  case 130:
  case 131:
  case 136:
  case 138:
   VAR_13 = 1;
   VAR_14 = 1;
   break;
  case 145:
   VAR_13 = VAR_3;
   VAR_14 = VAR_4;
   VAR_15 = VAR_5;
   break;
  default:
   continue;
  }

  if (VAR_11 <= VAR_15 &&
      VAR_15 != VAR_5)
   return -VAR_0;

  FUNC_3(VAR_9, VAR_10, VAR_15, VAR_13, VAR_14);
  VAR_16 = FUNC_4(VAR_8, FUNC_2(VAR_7), VAR_9);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
