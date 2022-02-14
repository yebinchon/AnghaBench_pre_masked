
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge_port {scalar_t__ ref_count; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp_bridge {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_bridge*,struct mlxsw_sp_bridge_device*) ;
 int FUNC_1 (struct mlxsw_sp_bridge_port*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_bridge *VAR_0,
         struct mlxsw_sp_bridge_port *VAR_1)
{
 struct mlxsw_sp_bridge_device *VAR_2;

 if (--VAR_1->ref_count != 0)
  return;
 VAR_2 = VAR_1->bridge_device;
 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_2);
}
