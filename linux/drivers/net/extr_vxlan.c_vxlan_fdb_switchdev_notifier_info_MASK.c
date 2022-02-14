
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_rdst {int offloaded; int remote_ifindex; int remote_vni; int remote_port; int remote_ip; } ;
struct vxlan_fdb {int flags; int vni; int eth_addr; } ;
struct vxlan_dev {int dev; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; int dev; } ;
struct switchdev_notifier_vxlan_fdb_info {int added_by_user; int offloaded; int vni; int eth_addr; int remote_ifindex; int remote_vni; int remote_port; int remote_ip; TYPE_1__ info; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct vxlan_dev *VAR_2,
       const struct vxlan_fdb *VAR_3,
       const struct vxlan_rdst *VAR_4,
       struct netlink_ext_ack *VAR_5,
       struct switchdev_notifier_vxlan_fdb_info *VAR_6)
{
 VAR_6->info.dev = VAR_2->dev;
 VAR_6->info.extack = VAR_5;
 VAR_6->remote_ip = VAR_4->remote_ip;
 VAR_6->remote_port = VAR_4->remote_port;
 VAR_6->remote_vni = VAR_4->remote_vni;
 VAR_6->remote_ifindex = VAR_4->remote_ifindex;
 FUNC_0(VAR_6->eth_addr, VAR_3->eth_addr, VAR_0);
 VAR_6->vni = VAR_3->vni;
 VAR_6->offloaded = VAR_4->offloaded;
 VAR_6->added_by_user = VAR_3->flags & VAR_1;
}
