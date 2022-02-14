
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct switchdev_notifier_vxlan_fdb_info {int offloaded; int info; int eth_addr; int remote_ip; } ;
struct switchdev_notifier_fdb_info {int vid; int addr; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_switchdev_event_work {int event; struct switchdev_notifier_fdb_info fdb_info; struct net_device* dev; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,int *,int *) ;
 int FUNC_1 (int ,int ,int ,struct net_device*,int) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int,union mlxsw_sp_l3addr*,int,int) ;
 int FUNC_4 (int *,int*,union mlxsw_sp_l3addr*) ;
 int FUNC_5 (struct net_device*,int ,int ,struct switchdev_notifier_vxlan_fdb_info*) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp *VAR_2,
       struct mlxsw_sp_switchdev_event_work *
       VAR_3,
       struct mlxsw_sp_fid *VAR_4, __be32 VAR_5)
{
 struct switchdev_notifier_vxlan_fdb_info VAR_6;
 struct switchdev_notifier_fdb_info *VAR_7;
 struct net_device *VAR_8 = VAR_3->dev;
 enum mlxsw_sp_l3proto VAR_9;
 union mlxsw_sp_l3addr VAR_10;
 int VAR_11;

 VAR_7 = &VAR_3->fdb_info;
 VAR_11 = FUNC_5(VAR_8, VAR_7->addr, VAR_5, &VAR_6);
 if (VAR_11)
  return;

 FUNC_4(&VAR_6.remote_ip,
           &VAR_9, &VAR_10);

 switch (VAR_3->event) {
 case 129:
  VAR_11 = FUNC_3(VAR_2,
           VAR_6.eth_addr,
           FUNC_2(VAR_4),
           VAR_9, &VAR_10, 1, 0);
  if (VAR_11)
   return;
  VAR_6.offloaded = 1;
  FUNC_0(VAR_1, VAR_8,
      &VAR_6.info, ((void*)0));
  FUNC_1(VAR_0,
         VAR_6.eth_addr,
         VAR_7->vid, VAR_8, 1);
  break;
 case 128:
  VAR_11 = FUNC_3(VAR_2,
           VAR_6.eth_addr,
           FUNC_2(VAR_4),
           VAR_9, &VAR_10, 0,
           0);
  VAR_6.offloaded = 0;
  FUNC_0(VAR_1, VAR_8,
      &VAR_6.info, ((void*)0));
  break;
 }
}
