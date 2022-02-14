
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vxlan_rdst {int offloaded; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int * hash_lock; } ;
struct switchdev_notifier_vxlan_fdb_info {int offloaded; int remote_ifindex; int remote_vni; int remote_port; int remote_ip; int vni; int eth_addr; } ;
struct net_device {int dummy; } ;


 size_t FUNC_0 (struct vxlan_dev*,int ,int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vxlan_rdst* FUNC_4 (struct vxlan_fdb*,int *,int ,int ,int ) ;
 struct vxlan_fdb* FUNC_5 (struct vxlan_dev*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_0,
   struct switchdev_notifier_vxlan_fdb_info *VAR_1)
{
 struct vxlan_dev *VAR_2 = FUNC_1(VAR_0);
 struct vxlan_rdst *VAR_3;
 struct vxlan_fdb *VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1->eth_addr, VAR_1->vni);

 FUNC_2(&VAR_2->hash_lock[VAR_5]);

 VAR_4 = FUNC_5(VAR_2, VAR_1->eth_addr, VAR_1->vni);
 if (!VAR_4)
  goto out;

 VAR_3 = FUNC_4(VAR_4, &VAR_1->remote_ip,
       VAR_1->remote_port,
       VAR_1->remote_vni,
       VAR_1->remote_ifindex);
 if (!VAR_3)
  goto out;

 VAR_3->offloaded = VAR_1->offloaded;

out:
 FUNC_3(&VAR_2->hash_lock[VAR_5]);
}
