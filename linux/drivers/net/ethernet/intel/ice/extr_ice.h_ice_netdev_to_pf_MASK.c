
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_pf {int dummy; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct ice_pf* back; } ;


 struct ice_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct ice_pf *FUNC_1(struct net_device *VAR_0)
{
 struct ice_netdev_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->vsi->back;
}
