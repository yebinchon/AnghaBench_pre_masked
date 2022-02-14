
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_priv_flags {int flag; } ;
struct TYPE_2__ {scalar_t__ pf_id; } ;
struct i40e_pf {int flags; TYPE_1__ hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct i40e_priv_flags* VAR_2 ;
 struct i40e_priv_flags* VAR_3 ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_4)
{
 struct i40e_netdev_priv *VAR_5 = FUNC_1(VAR_4);
 struct i40e_vsi *VAR_6 = VAR_5->vsi;
 struct i40e_pf *VAR_7 = VAR_6->back;
 u32 VAR_8, VAR_9, VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  const struct i40e_priv_flags *VAR_11;

  VAR_11 = &VAR_3[VAR_8];

  if (VAR_11->flag & VAR_7->flags)
   VAR_10 |= FUNC_0(VAR_8);
 }

 if (VAR_7->hw.pf_id != 0)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  const struct i40e_priv_flags *VAR_12;

  VAR_12 = &VAR_2[VAR_9];

  if (VAR_12->flag & VAR_7->flags)
   VAR_10 |= FUNC_0(VAR_8 + VAR_9);
 }

 return VAR_10;
}
