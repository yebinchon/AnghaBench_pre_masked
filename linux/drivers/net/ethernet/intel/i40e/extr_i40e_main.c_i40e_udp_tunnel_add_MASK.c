
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct udp_tunnel_info {int type; int port; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int hw_features; int state; int pending_udp_bitmap; TYPE_1__* udp_ports; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_2__ {int filter_index; int port; int type; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_1 (struct i40e_pf*,int ) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6,
    struct udp_tunnel_info *VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_3(VAR_6);
 struct i40e_vsi *VAR_9 = VAR_8->vsi;
 struct i40e_pf *VAR_10 = VAR_9->back;
 u16 VAR_11 = FUNC_4(VAR_7->port);
 u8 VAR_12;
 u8 VAR_13;

 VAR_13 = FUNC_1(VAR_10, VAR_11);


 if (VAR_13 < VAR_3) {
  FUNC_2(VAR_6, "port %d already offloaded\n", VAR_11);
  return;
 }


 VAR_12 = FUNC_1(VAR_10, 0);

 if (VAR_12 == VAR_3) {
  FUNC_2(VAR_6, "maximum number of offloaded UDP ports reached, not adding port %d\n",
       VAR_11);
  return;
 }

 switch (VAR_7->type) {
 case 128:
  VAR_10->udp_ports[VAR_12].type = VAR_1;
  break;
 case 129:
  if (!(VAR_10->hw_features & VAR_2))
   return;
  VAR_10->udp_ports[VAR_12].type = VAR_0;
  break;
 default:
  return;
 }


 VAR_10->udp_ports[VAR_12].port = VAR_11;
 VAR_10->udp_ports[VAR_12].filter_index = VAR_4;
 VAR_10->pending_udp_bitmap |= FUNC_0(VAR_12);
 FUNC_5(VAR_5, VAR_10->state);
}
