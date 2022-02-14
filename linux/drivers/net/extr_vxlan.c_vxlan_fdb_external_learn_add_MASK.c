
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vxlan_dev {int * hash_lock; } ;
struct switchdev_notifier_vxlan_fdb_info {int remote_ifindex; int remote_vni; int vni; int remote_port; int remote_ip; int eth_addr; int info; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (struct vxlan_dev*,int ,int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct netlink_ext_ack* FUNC_4 (int *) ;
 int FUNC_5 (struct vxlan_dev*,int ,int *,int ,int,int ,int ,int ,int ,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_6,
        struct switchdev_notifier_vxlan_fdb_info *VAR_7)
{
 struct vxlan_dev *VAR_8 = FUNC_1(VAR_6);
 struct netlink_ext_ack *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_8, VAR_7->eth_addr, VAR_7->vni);
 VAR_9 = FUNC_4(&VAR_7->info);

 FUNC_2(&VAR_8->hash_lock[VAR_10]);
 VAR_11 = FUNC_5(VAR_8, VAR_7->eth_addr, &VAR_7->remote_ip,
          VAR_5,
          VAR_0 | VAR_1,
          VAR_7->remote_port,
          VAR_7->vni,
          VAR_7->remote_vni,
          VAR_7->remote_ifindex,
          VAR_4 | VAR_3 | VAR_2,
          0, VAR_9);
 FUNC_3(&VAR_8->hash_lock[VAR_10]);

 return VAR_11;
}
