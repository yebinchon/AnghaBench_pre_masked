
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge_port {int mrouter; int flags; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {scalar_t__ multicast_enabled; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct mlxsw_sp_bridge_port *VAR_1)
{
 const struct mlxsw_sp_bridge_device *VAR_2;

 VAR_2 = VAR_1->bridge_device;
 return VAR_2->multicast_enabled ? VAR_1->mrouter :
     VAR_1->flags & VAR_0;
}
