
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_tunnel_info {scalar_t__ type; int sa_family; int port; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vxlan_udp_port_number; } ;
struct enic {int devcmd_lock; TYPE_1__ vxlan; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,char*,scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__,int ,...) ;
 struct enic* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3,
    struct udp_tunnel_info *VAR_4)
{
 struct enic *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 FUNC_4(&VAR_5->devcmd_lock);

 if ((FUNC_3(VAR_4->port) != VAR_5->vxlan.vxlan_udp_port_number) ||
     VAR_4->type != VAR_2) {
  FUNC_1(VAR_3, "udp_tnl: port:%d, sa_family: %d, type: %d not offloaded",
       FUNC_3(VAR_4->port), VAR_4->sa_family, VAR_4->type);
  goto unlock;
 }

 VAR_6 = FUNC_6(VAR_5->vdev, VAR_0,
         VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_3, "vxlan: del offload udp port: %d failed",
      FUNC_3(VAR_4->port));
  goto unlock;
 }

 VAR_5->vxlan.vxlan_udp_port_number = 0;

 FUNC_1(VAR_3, "vxlan: del offload udp port %d, family %d\n",
      FUNC_3(VAR_4->port), VAR_4->sa_family);

unlock:
 FUNC_5(&VAR_5->devcmd_lock);
}
