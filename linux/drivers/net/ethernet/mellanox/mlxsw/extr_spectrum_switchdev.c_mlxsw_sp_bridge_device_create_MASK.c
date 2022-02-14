
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_device {int vlan_enabled; int list; int mids_list; int ops; int ports_list; int mrouter; int multicast_enabled; struct net_device* dev; } ;
struct mlxsw_sp_bridge {int vlan_enabled_exists; int bridges_list; int bridge_8021d_ops; int bridge_8021q_ops; TYPE_2__* mlxsw_sp; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bus_info; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_bridge_device* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct device*,char*) ;
 struct mlxsw_sp_bridge_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static struct mlxsw_sp_bridge_device *
FUNC_8(struct mlxsw_sp_bridge *VAR_3,
         struct net_device *VAR_4)
{
 struct device *VAR_5 = VAR_3->mlxsw_sp->bus_info->dev;
 struct mlxsw_sp_bridge_device *VAR_6;
 bool VAR_7 = FUNC_4(VAR_4);

 if (VAR_7 && VAR_3->vlan_enabled_exists) {
  FUNC_5(VAR_5, "Only one VLAN-aware bridge is supported\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->dev = VAR_4;
 VAR_6->vlan_enabled = VAR_7;
 VAR_6->multicast_enabled = FUNC_2(VAR_4);
 VAR_6->mrouter = FUNC_3(VAR_4);
 FUNC_1(&VAR_6->ports_list);
 if (VAR_7) {
  VAR_3->vlan_enabled_exists = 1;
  VAR_6->ops = VAR_3->bridge_8021q_ops;
 } else {
  VAR_6->ops = VAR_3->bridge_8021d_ops;
 }
 FUNC_1(&VAR_6->mids_list);
 FUNC_7(&VAR_6->list, &VAR_3->bridges_list);

 return VAR_6;
}
