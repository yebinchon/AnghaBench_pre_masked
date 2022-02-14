
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t queue_mapping; } ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_ring** tx_rings; } ;
struct ice_ring {int dummy; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct ice_ring*) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;

netdev_tx_t FUNC_3(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_1(VAR_3);
 struct ice_vsi *VAR_5 = VAR_4->vsi;
 struct ice_ring *VAR_6;

 VAR_6 = VAR_5->tx_rings[VAR_2->queue_mapping];




 if (FUNC_2(VAR_2, VAR_0))
  return VAR_1;

 return FUNC_0(VAR_2, VAR_6);
}
