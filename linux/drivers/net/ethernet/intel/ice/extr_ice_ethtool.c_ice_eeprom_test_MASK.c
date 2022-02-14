
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ice_pf {int hw; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct ice_pf* back; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u64 FUNC_3(struct net_device *VAR_0)
{
 struct ice_netdev_priv *VAR_1 = FUNC_2(VAR_0);
 struct ice_pf *VAR_2 = VAR_1->vsi->back;

 FUNC_1(VAR_0, "EEPROM test\n");
 return !!(FUNC_0(&VAR_2->hw));
}
