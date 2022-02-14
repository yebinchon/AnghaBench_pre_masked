
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_reg_trans {int dummy; } ;
struct mlxsw_reg_info {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct list_head {int dummy; } ;
typedef int mlxsw_reg_trans_cb_t ;
typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_reg_trans*) ;
 struct mlxsw_reg_trans* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlxsw_core*) ;
 int FUNC_3 (struct mlxsw_core*,struct mlxsw_reg_info const*,char*,int,struct mlxsw_reg_trans*,struct list_head*,int *,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_2,
          const struct mlxsw_reg_info *VAR_3,
          char *VAR_4,
          enum mlxsw_core_reg_access_type VAR_5,
          struct list_head *VAR_6,
          mlxsw_reg_trans_cb_t *VAR_7,
          unsigned long VAR_8)
{
 u64 VAR_9 = FUNC_2(VAR_2);
 struct mlxsw_reg_trans *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10,
        VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_10);
  return VAR_11;
 }
 return 0;
}
