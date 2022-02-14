
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ice_vsi {int dummy; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 int FUNC_0 (struct ice_vsi*) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0)
{
 struct ice_netdev_priv *VAR_1 = FUNC_1(VAR_0);
 struct ice_vsi *VAR_2 = VAR_1->vsi;

 FUNC_0(VAR_2);

 return 0;
}
