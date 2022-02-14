
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dev; } ;
struct switchdev_notifier_vxlan_fdb_info {int info; } ;
struct netlink_ext_ack {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *,struct netlink_ext_ack*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int *,struct switchdev_notifier_vxlan_fdb_info*) ;

__attribute__((used)) static int FUNC_4(struct vxlan_dev *VAR_2,
           struct vxlan_fdb *VAR_3,
           struct vxlan_rdst *VAR_4,
           bool VAR_5,
           struct netlink_ext_ack *VAR_6)
{
 struct switchdev_notifier_vxlan_fdb_info VAR_7;
 enum switchdev_notifier_type VAR_8;
 int VAR_9;

 if (FUNC_0(!VAR_4))
  return 0;

 VAR_8 = VAR_5 ? VAR_0
          : VAR_1;
 FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_7);
 VAR_9 = FUNC_1(VAR_8, VAR_2->dev,
           &VAR_7.info, VAR_6);
 return FUNC_2(VAR_9);
}
