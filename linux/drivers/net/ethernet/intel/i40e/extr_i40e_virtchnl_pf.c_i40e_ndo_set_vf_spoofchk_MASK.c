
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int sec_flags; int valid_sections; } ;
struct i40e_vsi_context {TYPE_2__ info; int pf_num; int seid; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_vf {int spoofchk; size_t lan_vsi_idx; int vf_states; } ;
struct i40e_hw {int pf_id; } ;
struct i40e_pf {int num_alloc_vfs; int state; TYPE_3__* pdev; struct i40e_hw hw; TYPE_1__** vsi; struct i40e_vf* vf; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
typedef int ctxt ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int seid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_vsi_context*,int *) ;
 int FUNC_5 (struct i40e_vsi_context*,int ,int) ;
 struct i40e_netdev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct net_device *VAR_8, int VAR_9, bool VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_6(VAR_8);
 struct i40e_vsi *VAR_12 = VAR_11->vsi;
 struct i40e_pf *VAR_13 = VAR_12->back;
 struct i40e_vsi_context VAR_14;
 struct i40e_hw *VAR_15 = &VAR_13->hw;
 struct i40e_vf *VAR_16;
 int VAR_17 = 0;

 if (FUNC_7(VAR_7, VAR_13->state)) {
  FUNC_3(&VAR_13->pdev->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }


 if (VAR_9 >= VAR_13->num_alloc_vfs) {
  FUNC_2(&VAR_13->pdev->dev, "Invalid VF Identifier %d\n", VAR_9);
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_16 = &(VAR_13->vf[VAR_9]);
 if (!FUNC_8(VAR_6, &VAR_16->vf_states)) {
  FUNC_2(&VAR_13->pdev->dev, "VF %d still in reset. Try again.\n",
   VAR_9);
  VAR_17 = -VAR_0;
  goto out;
 }

 if (VAR_10 == VAR_16->spoofchk)
  goto out;

 VAR_16->spoofchk = VAR_10;
 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.seid = VAR_13->vsi[VAR_16->lan_vsi_idx]->seid;
 VAR_14.pf_num = VAR_13->hw.pf_id;
 VAR_14.info.valid_sections = FUNC_1(VAR_3);
 if (VAR_10)
  VAR_14.info.sec_flags |= (VAR_5 |
     VAR_4);
 VAR_17 = FUNC_4(VAR_15, &VAR_14, ((void*)0));
 if (VAR_17) {
  FUNC_2(&VAR_13->pdev->dev, "Error %d updating VSI parameters\n",
   VAR_17);
  VAR_17 = -VAR_2;
 }
out:
 FUNC_0(VAR_7, VAR_13->state);
 return VAR_17;
}
