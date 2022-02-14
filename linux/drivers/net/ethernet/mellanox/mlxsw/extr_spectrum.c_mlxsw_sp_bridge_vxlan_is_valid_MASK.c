
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static bool FUNC_5(struct net_device *VAR_0,
        struct netlink_ext_ack *VAR_1)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_1, "Multicast can not be enabled on a bridge with a VxLAN device");
  return 0;
 }

 if (!FUNC_2(VAR_0) &&
     FUNC_3(VAR_0)) {
  FUNC_0(VAR_1, "Multiple VxLAN devices are not supported in a VLAN-unaware bridge");
  return 0;
 }

 if (FUNC_2(VAR_0) &&
     !FUNC_4(VAR_0)) {
  FUNC_0(VAR_1, "Multiple VxLAN devices cannot have the same VLAN as PVID and egress untagged");
  return 0;
 }

 return 1;
}
