
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vxlan_fdb {int flags; } ;
struct vxlan_dev {int * hash_lock; } ;
struct switchdev_notifier_vxlan_fdb_info {int remote_ifindex; int remote_vni; int vni; int remote_port; int remote_ip; int eth_addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_dev*,int ,int ,int ,int ,int ,int ,int) ;
 size_t FUNC_1 (struct vxlan_dev*,int ,int ) ;
 struct vxlan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vxlan_fdb* FUNC_5 (struct vxlan_dev*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2,
        struct switchdev_notifier_vxlan_fdb_info *VAR_3)
{
 struct vxlan_dev *VAR_4 = FUNC_2(VAR_2);
 struct vxlan_fdb *VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_4, VAR_3->eth_addr, VAR_3->vni);
 FUNC_3(&VAR_4->hash_lock[VAR_6]);

 VAR_5 = FUNC_5(VAR_4, VAR_3->eth_addr, VAR_3->vni);
 if (!VAR_5)
  VAR_7 = -VAR_0;
 else if (VAR_5->flags & VAR_1)
  VAR_7 = FUNC_0(VAR_4, VAR_3->eth_addr,
      VAR_3->remote_ip,
      VAR_3->remote_port,
      VAR_3->vni,
      VAR_3->remote_vni,
      VAR_3->remote_ifindex,
      0);

 FUNC_4(&VAR_4->hash_lock[VAR_6]);

 return VAR_7;
}
