
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dummy; } ;
struct switchdev_notifier_vxlan_fdb_info {int dummy; } ;
struct notifier_block {int (* notifier_call ) (struct notifier_block*,int ,struct switchdev_notifier_vxlan_fdb_info*) ;} ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct notifier_block*,int ,struct switchdev_notifier_vxlan_fdb_info*) ;
 int FUNC_2 (struct vxlan_dev const*,struct vxlan_fdb const*,struct vxlan_rdst const*,struct netlink_ext_ack*,struct switchdev_notifier_vxlan_fdb_info*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1,
    const struct vxlan_dev *VAR_2,
    const struct vxlan_fdb *VAR_3,
    const struct vxlan_rdst *VAR_4,
    struct netlink_ext_ack *VAR_5)
{
 struct switchdev_notifier_vxlan_fdb_info VAR_6;
 int VAR_7;

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 VAR_7 = VAR_1->notifier_call(VAR_1, VAR_0,
          &VAR_6);
 return FUNC_0(VAR_7);
}
