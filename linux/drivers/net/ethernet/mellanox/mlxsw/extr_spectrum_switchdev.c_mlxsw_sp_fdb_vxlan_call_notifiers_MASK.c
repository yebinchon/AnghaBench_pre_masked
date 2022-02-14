
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct TYPE_2__ {int dst_port; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct switchdev_notifier_vxlan_fdb_info {int offloaded; int info; void* vni; int eth_addr; scalar_t__ remote_ifindex; void* remote_vni; int remote_port; int remote_ip; } ;
struct net_device {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct net_device*,int *,int *) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int,union mlxsw_sp_l3addr*,int *) ;
 struct vxlan_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
           const char *VAR_3,
           enum mlxsw_sp_l3proto VAR_4,
           union mlxsw_sp_l3addr *VAR_5,
           __be32 VAR_6, bool VAR_7)
{
 struct switchdev_notifier_vxlan_fdb_info VAR_8;
 struct vxlan_dev *VAR_9 = FUNC_3(VAR_2);
 enum switchdev_notifier_type VAR_10;

 VAR_10 = VAR_7 ? VAR_0 :
   VAR_1;
 FUNC_2(VAR_4, VAR_5, &VAR_8.remote_ip);
 VAR_8.remote_port = VAR_9->cfg.dst_port;
 VAR_8.remote_vni = VAR_6;
 VAR_8.remote_ifindex = 0;
 FUNC_1(VAR_8.eth_addr, VAR_3);
 VAR_8.vni = VAR_6;
 VAR_8.offloaded = VAR_7;
 FUNC_0(VAR_10, VAR_2, &VAR_8.info, ((void*)0));
}
