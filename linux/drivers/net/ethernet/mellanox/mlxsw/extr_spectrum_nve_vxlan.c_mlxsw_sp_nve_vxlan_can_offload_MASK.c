
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct vxlan_config {int tos; int flags; scalar_t__ ttl; scalar_t__ label; scalar_t__ port_max; scalar_t__ port_min; scalar_t__ remote_ifindex; TYPE_2__ saddr; int remote_ip; } ;
struct vxlan_dev {struct vxlan_config cfg; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_nve {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vxlan_dev* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(const struct mlxsw_sp_nve *VAR_4,
        const struct net_device *VAR_5,
        struct netlink_ext_ack *VAR_6)
{
 struct vxlan_dev *VAR_7 = FUNC_1(VAR_5);
 struct vxlan_config *VAR_8 = &VAR_7->cfg;

 if (VAR_8->saddr.sa.sa_family != VAR_0) {
  FUNC_0(VAR_6, "VxLAN: Only IPv4 underlay is supported");
  return 0;
 }

 if (FUNC_3(&VAR_8->remote_ip)) {
  FUNC_0(VAR_6, "VxLAN: Multicast destination IP is not supported");
  return 0;
 }

 if (FUNC_2(&VAR_8->saddr)) {
  FUNC_0(VAR_6, "VxLAN: Source address must be specified");
  return 0;
 }

 if (VAR_8->remote_ifindex) {
  FUNC_0(VAR_6, "VxLAN: Local interface is not supported");
  return 0;
 }

 if (VAR_8->port_min || VAR_8->port_max) {
  FUNC_0(VAR_6, "VxLAN: Only default UDP source port range is supported");
  return 0;
 }

 if (VAR_8->tos != 1) {
  FUNC_0(VAR_6, "VxLAN: TOS must be configured to inherit");
  return 0;
 }

 if (VAR_8->flags & VAR_2) {
  FUNC_0(VAR_6, "VxLAN: TTL must not be configured to inherit");
  return 0;
 }

 if (!(VAR_8->flags & VAR_3)) {
  FUNC_0(VAR_6, "VxLAN: UDP checksum is not supported");
  return 0;
 }

 if (VAR_8->flags & ~VAR_1) {
  FUNC_0(VAR_6, "VxLAN: Unsupported flag");
  return 0;
 }

 if (VAR_8->ttl == 0) {
  FUNC_0(VAR_6, "VxLAN: TTL must not be configured to 0");
  return 0;
 }

 if (VAR_8->label != 0) {
  FUNC_0(VAR_6, "VxLAN: Flow label must be configured to 0");
  return 0;
 }

 return 1;
}
