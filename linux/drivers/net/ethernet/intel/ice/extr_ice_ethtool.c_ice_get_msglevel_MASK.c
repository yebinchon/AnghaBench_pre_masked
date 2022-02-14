
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ debug_mask; } ;
struct ice_pf {int msg_enable; TYPE_2__ hw; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_3__ {struct ice_pf* back; } ;


 int FUNC_0 (struct net_device*,char*,scalar_t__) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct ice_netdev_priv *VAR_1 = FUNC_1(VAR_0);
 struct ice_pf *VAR_2 = VAR_1->vsi->back;


 if (VAR_2->hw.debug_mask)
  FUNC_0(VAR_0, "hw debug_mask: 0x%llX\n",
       VAR_2->hw.debug_mask);


 return VAR_2->msg_enable;
}
