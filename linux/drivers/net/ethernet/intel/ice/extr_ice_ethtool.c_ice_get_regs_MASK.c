
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {struct ice_hw hw; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {struct ice_pf* back; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ice_hw*,int ) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct ethtool_regs *VAR_2, void *VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_1(VAR_1);
 struct ice_pf *VAR_5 = VAR_4->vsi->back;
 struct ice_hw *VAR_6 = &VAR_5->hw;
 u32 *VAR_7 = (u32 *)VAR_3;
 int VAR_8;

 VAR_2->version = 1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); ++VAR_8)
  VAR_7[VAR_8] = FUNC_2(VAR_6, VAR_0[VAR_8]);
}
