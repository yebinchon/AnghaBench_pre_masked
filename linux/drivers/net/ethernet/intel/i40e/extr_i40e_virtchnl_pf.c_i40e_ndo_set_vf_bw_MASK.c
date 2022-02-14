
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {int seid; } ;
struct i40e_vf {size_t lan_vsi_idx; int tx_rate; int vf_states; } ;
struct i40e_pf {int state; TYPE_2__* pdev; struct i40e_vsi** vsi; struct i40e_vf* vf; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i40e_vsi*,int ,int) ;
 int FUNC_4 (struct i40e_pf*,int) ;
 struct i40e_netdev_priv* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct net_device *VAR_4, int VAR_5, int VAR_6,
         int VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_5(VAR_4);
 struct i40e_pf *VAR_9 = VAR_8->vsi->back;
 struct i40e_vsi *VAR_10;
 struct i40e_vf *VAR_11;
 int VAR_12 = 0;

 if (FUNC_6(VAR_3, VAR_9->state)) {
  FUNC_2(&VAR_9->pdev->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }


 VAR_12 = FUNC_4(VAR_9, VAR_5);
 if (VAR_12)
  goto error;

 if (VAR_6) {
  FUNC_1(&VAR_9->pdev->dev, "Invalid min tx rate (%d) (greater than 0) specified for VF %d.\n",
   VAR_6, VAR_5);
  VAR_12 = -VAR_1;
  goto error;
 }

 VAR_11 = &VAR_9->vf[VAR_5];
 VAR_10 = VAR_9->vsi[VAR_11->lan_vsi_idx];
 if (!FUNC_7(VAR_2, &VAR_11->vf_states)) {
  FUNC_1(&VAR_9->pdev->dev, "VF %d still in reset. Try again.\n",
   VAR_5);
  VAR_12 = -VAR_0;
  goto error;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_10->seid, VAR_7);
 if (VAR_12)
  goto error;

 VAR_11->tx_rate = VAR_7;
error:
 FUNC_0(VAR_3, VAR_9->state);
 return VAR_12;
}
