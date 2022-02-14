
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ice_vsi {int dummy; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ethtool_coalesce {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ice_vsi*,struct ethtool_coalesce*,int) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_coalesce *VAR_2,
     int VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_1(VAR_1);
 struct ice_vsi *VAR_5 = VAR_4->vsi;

 if (VAR_3 < 0)
  VAR_3 = 0;

 if (FUNC_0(VAR_5, VAR_2, VAR_3))
  return -VAR_0;

 return 0;
}
