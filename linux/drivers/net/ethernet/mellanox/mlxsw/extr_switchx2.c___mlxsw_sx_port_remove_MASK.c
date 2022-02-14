
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sx {int core; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sx*,int ) ;
 int FUNC_1 (struct mlxsw_sx*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sx *VAR_2, u8 VAR_3)
{
 enum devlink_port_type VAR_4 =
  FUNC_2(VAR_2->core, VAR_3);

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_2, VAR_3);
 else if (VAR_4 == VAR_1)
  FUNC_1(VAR_2, VAR_3);
}
