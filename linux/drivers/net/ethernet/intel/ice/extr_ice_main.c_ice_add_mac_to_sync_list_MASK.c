
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ice_vsi {int tmp_sync_list; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ice_vsi*,int *,int const*) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const u8 *VAR_2)
{
 struct ice_netdev_priv *VAR_3 = FUNC_1(VAR_1);
 struct ice_vsi *VAR_4 = VAR_3->vsi;

 if (FUNC_0(VAR_4, &VAR_4->tmp_sync_list, VAR_2))
  return -VAR_0;

 return 0;
}
