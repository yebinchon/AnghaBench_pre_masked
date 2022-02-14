
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udp_tunnel_info {scalar_t__ sa_family; int type; void* port; } ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; void* vxlan_port; void* geneve_port; struct ixgbe_hw hw; } ;
typedef void* __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;


 int FUNC_2 (struct net_device*,char*,int,int) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5,
          struct udp_tunnel_info *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_3(VAR_5);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 __be16 VAR_9 = VAR_6->port;
 u32 VAR_10 = 0;
 u32 VAR_11;

 if (VAR_6->sa_family != VAR_0)
  return;

 switch (VAR_6->type) {
 case 128:
  if (!(VAR_7->flags & VAR_2))
   return;

  if (VAR_7->vxlan_port == VAR_9)
   return;

  if (VAR_7->vxlan_port) {
   FUNC_2(VAR_5,
        "VXLAN port %d set, not adding port %d\n",
        FUNC_4(VAR_7->vxlan_port),
        FUNC_4(VAR_9));
   return;
  }

  VAR_7->vxlan_port = VAR_9;
  break;
 case 129:
  if (!(VAR_7->flags & VAR_1))
   return;

  if (VAR_7->geneve_port == VAR_9)
   return;

  if (VAR_7->geneve_port) {
   FUNC_2(VAR_5,
        "GENEVE port %d set, not adding port %d\n",
        FUNC_4(VAR_7->geneve_port),
        FUNC_4(VAR_9));
   return;
  }

  VAR_10 = VAR_4;
  VAR_7->geneve_port = VAR_9;
  break;
 default:
  return;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_3) | FUNC_4(VAR_9) << VAR_10;
 FUNC_1(VAR_8, VAR_3, VAR_11);
}
