
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_qeec_hr { ____Placeholder_mlxsw_reg_qeec_hr } mlxsw_reg_qeec_hr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_2,
        enum mlxsw_reg_qeec_hr VAR_3, u8 VAR_4,
        u8 VAR_5, u32 VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_2->mlxsw_sp;
 char VAR_8[VAR_0];

 FUNC_3(VAR_8, VAR_2->local_port, VAR_3, VAR_4,
       VAR_5);
 FUNC_2(VAR_8, 1);
 FUNC_1(VAR_8, VAR_6);

 return FUNC_4(VAR_7->core, FUNC_0(VAR_1), VAR_8);
}
