
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_2__ {int pf_id; } ;
struct i40e_pf {TYPE_1__ hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_1(VAR_4);
 struct i40e_vsi *VAR_7 = VAR_6->vsi;
 struct i40e_pf *VAR_8 = VAR_7->back;

 switch (VAR_5) {
 case 128:
  return VAR_3;
 case 129:
  return FUNC_0(VAR_4);
 case 130:
  return VAR_2 +
   (VAR_8->hw.pf_id == 0 ? VAR_1 : 0);
 default:
  return -VAR_0;
 }
}
