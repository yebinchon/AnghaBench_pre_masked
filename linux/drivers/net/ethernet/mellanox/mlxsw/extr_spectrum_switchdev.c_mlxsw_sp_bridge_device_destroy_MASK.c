
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge_device {int mids_list; int ports_list; scalar_t__ vlan_enabled; int list; int dev; } ;
struct mlxsw_sp_bridge {int vlan_enabled_exists; int mlxsw_sp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_bridge_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp_bridge *VAR_0,
          struct mlxsw_sp_bridge_device *VAR_1)
{
 FUNC_4(VAR_0->mlxsw_sp,
         VAR_1->dev);
 FUNC_2(&VAR_1->list);
 if (VAR_1->vlan_enabled)
  VAR_0->vlan_enabled_exists = 0;
 FUNC_0(!FUNC_3(&VAR_1->ports_list));
 FUNC_0(!FUNC_3(&VAR_1->mids_list));
 FUNC_1(VAR_1);
}
