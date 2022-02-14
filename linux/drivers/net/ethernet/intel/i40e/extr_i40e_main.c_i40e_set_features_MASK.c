
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct i40e_vsi {scalar_t__ macvlan_cnt; struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; scalar_t__ num_cloud_filters; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_pf*,int ,int) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*,int) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_vsi*) ;
 struct i40e_netdev_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6,
        netdev_features_t VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_8(VAR_6);
 struct i40e_vsi *VAR_9 = VAR_8->vsi;
 struct i40e_pf *VAR_10 = VAR_9->back;
 bool VAR_11;

 if (VAR_7 & VAR_5 && !(VAR_6->features & VAR_5))
  FUNC_4(VAR_10);
 else if (!(VAR_7 & VAR_5) &&
   VAR_6->features & VAR_5)
  FUNC_1(VAR_9);

 if (VAR_7 & VAR_4)
  FUNC_7(VAR_9);
 else
  FUNC_6(VAR_9);

 if (!(VAR_7 & VAR_3) && VAR_10->num_cloud_filters) {
  FUNC_0(&VAR_10->pdev->dev,
   "Offloaded tc filters active, can't turn hw_tc_offload off");
  return -VAR_0;
 }

 if (!(VAR_7 & VAR_2) && VAR_9->macvlan_cnt)
  FUNC_2(VAR_9);

 VAR_11 = FUNC_5(VAR_10, VAR_7);

 if (VAR_11)
  FUNC_3(VAR_10, VAR_1, 1);

 return 0;
}
