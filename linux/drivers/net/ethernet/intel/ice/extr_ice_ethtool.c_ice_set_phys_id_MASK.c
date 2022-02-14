
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_2__ {int port_info; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int ,int,int *) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, enum ethtool_phys_id_state VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_1(VAR_2);
 bool VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_5 = 1;
  break;
 case 128:
  VAR_5 = 0;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_4->vsi->port_info, !VAR_5, ((void*)0)))
  return -VAR_1;

 return 0;
}
