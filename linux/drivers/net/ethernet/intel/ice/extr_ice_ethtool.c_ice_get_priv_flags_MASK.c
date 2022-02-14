
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct ice_priv_flag {int bitno; } ;
struct ice_pf {int flags; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct ice_priv_flag* VAR_1 ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_2)
{
 struct ice_netdev_priv *VAR_3 = FUNC_1(VAR_2);
 struct ice_vsi *VAR_4 = VAR_3->vsi;
 struct ice_pf *VAR_5 = VAR_4->back;
 u32 VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct ice_priv_flag *VAR_8;

  VAR_8 = &VAR_1[VAR_6];

  if (FUNC_2(VAR_8->bitno, VAR_5->flags))
   VAR_7 |= FUNC_0(VAR_6);
 }

 return VAR_7;
}
