
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct i40e_pf {int dummy; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;


 int FUNC_0 (struct i40e_pf*,struct ifreq*) ;
 int FUNC_1 (struct i40e_pf*,struct ifreq*) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_2(VAR_1);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;

 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_5, VAR_2);
 case 128:
  return FUNC_1(VAR_5, VAR_2);
 default:
  return -VAR_0;
 }
}
