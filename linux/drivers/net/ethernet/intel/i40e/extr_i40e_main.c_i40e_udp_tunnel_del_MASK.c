
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct udp_tunnel_info {int type; int port; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; int pending_udp_bitmap; TYPE_1__* udp_ports; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_2__ {scalar_t__ port; int type; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;


 int VAR_3 ;
 size_t FUNC_1 (struct i40e_pf*,int ) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4,
    struct udp_tunnel_info *VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_2(VAR_4);
 struct i40e_vsi *VAR_7 = VAR_6->vsi;
 struct i40e_pf *VAR_8 = VAR_7->back;
 u16 VAR_9 = FUNC_4(VAR_5->port);
 u8 VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_9);


 if (VAR_10 >= VAR_2)
  goto not_found;

 switch (VAR_5->type) {
 case 128:
  if (VAR_8->udp_ports[VAR_10].type != VAR_1)
   goto not_found;
  break;
 case 129:
  if (VAR_8->udp_ports[VAR_10].type != VAR_0)
   goto not_found;
  break;
 default:
  goto not_found;
 }




 VAR_8->udp_ports[VAR_10].port = 0;





 VAR_8->pending_udp_bitmap ^= FUNC_0(VAR_10);
 FUNC_5(VAR_3, VAR_8->state);

 return;
not_found:
 FUNC_3(VAR_4, "UDP port %d was not found, not deleting\n",
      VAR_9);
}
