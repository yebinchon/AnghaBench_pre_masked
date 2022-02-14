
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udp_tunnel_info {int type; scalar_t__ sa_family; int port; } ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int flags; int flags2; int geneve_port; int vxlan_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct ixgbe_adapter*,int ) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6,
          struct udp_tunnel_info *VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9;

 if (VAR_7->type != 128 &&
     VAR_7->type != 129)
  return;

 if (VAR_7->sa_family != VAR_0)
  return;

 switch (VAR_7->type) {
 case 128:
  if (!(VAR_8->flags & VAR_3))
   return;

  if (VAR_8->vxlan_port != VAR_7->port) {
   FUNC_1(VAR_6, "VXLAN port %d not found\n",
        FUNC_3(VAR_7->port));
   return;
  }

  VAR_9 = VAR_5;
  break;
 case 129:
  if (!(VAR_8->flags & VAR_2))
   return;

  if (VAR_8->geneve_port != VAR_7->port) {
   FUNC_1(VAR_6, "GENEVE port %d not found\n",
        FUNC_3(VAR_7->port));
   return;
  }

  VAR_9 = VAR_4;
  break;
 default:
  return;
 }

 FUNC_0(VAR_8, VAR_9);
 VAR_8->flags2 |= VAR_1;
}
