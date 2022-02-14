
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_vxlan_data {int list; int port; int sa_family; } ;
struct TYPE_2__ {int vxn; } ;
struct xgbe_prv_data {int vxlan_port_count; int vxlan_force_disable; int vxlan_ports; TYPE_1__ hw_feat; } ;
struct udp_tunnel_info {scalar_t__ type; int port; int sa_family; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct xgbe_vxlan_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct xgbe_prv_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,struct net_device*,char*,...) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3,
    struct udp_tunnel_info *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_3(VAR_3);
 struct xgbe_vxlan_data *VAR_6;

 if (!VAR_5->hw_feat.vxn)
  return;

 if (VAR_4->type != VAR_1)
  return;

 VAR_5->vxlan_port_count++;

 FUNC_4(VAR_5, VAR_2, VAR_3,
    "adding VXLAN tunnel, family=%hx/port=%hx\n",
    VAR_4->sa_family, FUNC_0(VAR_4->port));

 if (VAR_5->vxlan_force_disable)
  return;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {

  VAR_5->vxlan_force_disable = 1;
  FUNC_4(VAR_5, VAR_2, VAR_3,
     "internal error, disabling VXLAN accelerations\n");

  FUNC_5(VAR_5);

  return;
 }
 VAR_6->sa_family = VAR_4->sa_family;
 VAR_6->port = VAR_4->port;

 FUNC_2(&VAR_6->list, &VAR_5->vxlan_ports);


 if (VAR_5->vxlan_port_count == 1) {
  FUNC_6(VAR_5);

  return;
 }
}
