
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int,int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_3,
          u32 VAR_4, u8 VAR_5, u16 VAR_6,
          enum mlxsw_reg_ralue_op VAR_7,
          u32 VAR_8)
{
 char VAR_9[VAR_0];

 FUNC_2(VAR_9, VAR_1, VAR_7,
         VAR_6, VAR_5, VAR_4);
 FUNC_1(VAR_9, VAR_8);
 return FUNC_3(VAR_3->core, FUNC_0(VAR_2), VAR_9);
}
