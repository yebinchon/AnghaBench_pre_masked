
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sx {int dummy; } ;
struct mlxsw_core {int dummy; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlxsw_sx*,int ,int ,int ) ;
 int FUNC_1 (struct mlxsw_sx*,int ,int ,int ) ;
 int FUNC_2 (struct mlxsw_sx*,int ) ;
 struct mlxsw_sx* FUNC_3 (struct mlxsw_core*) ;
 int FUNC_4 (struct mlxsw_sx*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_core *VAR_4, u8 VAR_5,
      enum devlink_port_type VAR_6)
{
 struct mlxsw_sx *VAR_7 = FUNC_3(VAR_4);
 u8 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6 == VAR_0)
  return -VAR_3;

 FUNC_2(VAR_7, VAR_5);
 VAR_10 = FUNC_4(VAR_7, VAR_5, &VAR_8,
         &VAR_9);
 if (VAR_10)
  goto err_port_module_info_get;

 if (VAR_6 == VAR_1)
  VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_8,
       VAR_9);
 else if (VAR_6 == VAR_2)
  VAR_10 = FUNC_1(VAR_7, VAR_5, VAR_8,
      VAR_9);

err_port_module_info_get:
 return VAR_10;
}
