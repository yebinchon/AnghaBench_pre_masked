
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_dev {int dummy; } ;
struct vxlan_config {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct vxlan_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct vxlan_config*,struct net_device*,struct net*,int) ;
 int FUNC_2 (struct net*,struct vxlan_config*,struct net_device**,struct vxlan_dev*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_0, struct net_device *VAR_1,
          struct vxlan_config *VAR_2, bool VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct vxlan_dev *VAR_5 = FUNC_0(VAR_1);
 struct net_device *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_2, &VAR_6, VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0, VAR_3);

 return 0;
}
