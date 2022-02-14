
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_sb_cm {int pool_index; int max_buff; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_core_port {int dummy; } ;
typedef enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 struct mlxsw_sp_port* FUNC_0 (struct mlxsw_core_port*) ;
 struct mlxsw_sp_sb_cm* FUNC_1 (struct mlxsw_sp*,int ,int ,int) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ) ;

int FUNC_3(struct mlxsw_core_port *VAR_0,
     unsigned int VAR_1, u16 VAR_2,
     enum devlink_sb_pool_type VAR_3,
     u16 *VAR_4, u32 *VAR_5)
{
 struct mlxsw_sp_port *VAR_6 =
   FUNC_0(VAR_0);
 struct mlxsw_sp *VAR_7 = VAR_6->mlxsw_sp;
 u8 VAR_8 = VAR_6->local_port;
 u8 VAR_9 = VAR_2;
 enum mlxsw_reg_sbxx_dir VAR_10 = (enum mlxsw_reg_sbxx_dir) VAR_3;
 struct mlxsw_sp_sb_cm *VAR_11 = FUNC_1(VAR_7, VAR_8,
             VAR_9, VAR_10);

 *VAR_5 = FUNC_2(VAR_7, VAR_11->pool_index,
       VAR_11->max_buff);
 *VAR_4 = VAR_11->pool_index;
 return 0;
}
