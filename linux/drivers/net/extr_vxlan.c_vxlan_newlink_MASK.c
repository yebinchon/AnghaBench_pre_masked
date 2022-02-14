
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_config {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct net_device*,struct vxlan_config*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct nlattr**,struct nlattr**,struct net_device*,struct vxlan_config*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct net_device *VAR_1,
    struct nlattr *VAR_2[], struct nlattr *VAR_3[],
    struct netlink_ext_ack *VAR_4)
{
 struct vxlan_config VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1, &VAR_5, 0, VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_4);
}
