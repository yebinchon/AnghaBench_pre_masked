
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int debug_mask; } ;
struct ice_pf {int msg_enable; TYPE_2__ hw; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_3__ {struct ice_pf* back; } ;


 int VAR_0 ;
 struct ice_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, u32 VAR_2)
{
 struct ice_netdev_priv *VAR_3 = FUNC_0(VAR_1);
 struct ice_pf *VAR_4 = VAR_3->vsi->back;


 if (VAR_0 & VAR_2)
  VAR_4->hw.debug_mask = VAR_2;
 else
  VAR_4->msg_enable = VAR_2;



}
