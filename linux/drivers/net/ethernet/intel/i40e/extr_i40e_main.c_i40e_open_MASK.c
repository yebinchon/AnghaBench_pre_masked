
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int hw; int state; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i40e_pf*,int) ;
 int FUNC_2 (struct i40e_vsi*) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,int ,int) ;

int FUNC_8(struct net_device *VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_3(VAR_10);
 struct i40e_vsi *VAR_12 = VAR_11->vsi;
 struct i40e_pf *VAR_13 = VAR_12->back;
 int VAR_14;


 if (FUNC_5(VAR_9, VAR_13->state) ||
     FUNC_5(VAR_8, VAR_13->state))
  return -VAR_1;

 FUNC_4(VAR_10);

 if (FUNC_1(VAR_13, 1))
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_12);
 if (VAR_14)
  return VAR_14;


 FUNC_7(&VAR_13->hw, VAR_2, FUNC_0(VAR_7 |
             VAR_6) >> 16);
 FUNC_7(&VAR_13->hw, VAR_4, FUNC_0(VAR_7 |
             VAR_6 |
             VAR_5) >> 16);
 FUNC_7(&VAR_13->hw, VAR_3, FUNC_0(VAR_5) >> 16);

 FUNC_6(VAR_10);

 return 0;
}
