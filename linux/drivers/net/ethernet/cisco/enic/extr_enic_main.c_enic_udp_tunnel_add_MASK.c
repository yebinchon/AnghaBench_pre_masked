
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_tunnel_info {int type; int sa_family; int port; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; int vxlan_udp_port_number; scalar_t__ patch_level; } ;
struct enic {int devcmd_lock; TYPE_1__ vxlan; int vdev; } ;
typedef int __be16 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct enic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_6,
    struct udp_tunnel_info *VAR_7)
{
 struct enic *VAR_8 = FUNC_1(VAR_6);
 __be16 VAR_9 = VAR_7->port;
 int VAR_10;

 FUNC_4(&VAR_8->devcmd_lock);

 if (VAR_7->type != VAR_5) {
  FUNC_0(VAR_6, "udp_tnl: only vxlan tunnel offload supported");
  goto error;
 }

 switch (VAR_7->sa_family) {
 case 128:
  if (!(VAR_8->vxlan.flags & VAR_1)) {
   FUNC_0(VAR_6, "vxlan: only IPv4 offload supported");
   goto error;
  }

 case 129:
  break;
 default:
  goto error;
 }

 if (VAR_8->vxlan.vxlan_udp_port_number) {
  if (FUNC_3(VAR_9) == VAR_8->vxlan.vxlan_udp_port_number)
   FUNC_2(VAR_6, "vxlan: udp port already offloaded");
  else
   FUNC_0(VAR_6, "vxlan: offload supported for only one UDP port");

  goto error;
 }
 if ((FUNC_6(VAR_8->vdev, VAR_4) != 1) &&
     !(VAR_8->vxlan.flags & VAR_0)) {
  FUNC_0(VAR_6, "vxlan: vxlan offload with multi wq not supported on this adapter");
  goto error;
 }

 VAR_10 = FUNC_7(VAR_8->vdev,
        VAR_2,
        FUNC_3(VAR_9));
 if (VAR_10)
  goto error;

 VAR_10 = FUNC_8(VAR_8->vdev, VAR_3,
         VAR_8->vxlan.patch_level);
 if (VAR_10)
  goto error;

 VAR_8->vxlan.vxlan_udp_port_number = FUNC_3(VAR_9);

 FUNC_0(VAR_6, "vxlan fw-vers-%d: offload enabled for udp port: %d, sa_family: %d ",
      (int)VAR_8->vxlan.patch_level, FUNC_3(VAR_9), VAR_7->sa_family);

 goto unlock;

error:
 FUNC_0(VAR_6, "failed to offload udp port: %d, sa_family: %d, type: %d",
      FUNC_3(VAR_9), VAR_7->sa_family, VAR_7->type);
unlock:
 FUNC_5(&VAR_8->devcmd_lock);
}
