
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_spms_state { ____Placeholder_mlxsw_reg_spms_state } mlxsw_reg_spms_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

int FUNC_7(struct mlxsw_sp_port *VAR_4, u16 VAR_5,
         u8 VAR_6)
{
 enum mlxsw_reg_spms_state VAR_7 = FUNC_6(VAR_6);
 struct mlxsw_sp *VAR_8 = VAR_4->mlxsw_sp;
 char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 FUNC_3(VAR_9, VAR_4->local_port);
 FUNC_4(VAR_9, VAR_5, VAR_7);

 VAR_10 = FUNC_5(VAR_8->core, FUNC_0(VAR_3), VAR_9);
 FUNC_1(VAR_9);
 return VAR_10;
}
