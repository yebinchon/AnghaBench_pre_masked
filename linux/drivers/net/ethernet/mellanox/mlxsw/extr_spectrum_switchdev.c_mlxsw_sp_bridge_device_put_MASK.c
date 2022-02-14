
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge_device {int ports_list; } ;
struct mlxsw_sp_bridge {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_bridge*,struct mlxsw_sp_bridge_device*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_bridge *VAR_0,
      struct mlxsw_sp_bridge_device *VAR_1)
{
 if (FUNC_0(&VAR_1->ports_list))
  FUNC_1(VAR_0, VAR_1);
}
