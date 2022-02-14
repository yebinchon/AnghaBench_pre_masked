
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct net_device *VAR_2,
    struct netlink_ext_ack *VAR_3)
{
 if (FUNC_2(VAR_2)) {
  FUNC_0(VAR_3,
          "Can not enslave an L3 master device to a VRF");
  return -VAR_0;
 }

 if (FUNC_3(VAR_2))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
