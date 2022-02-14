
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vf {int trusted; scalar_t__ adq_enabled; } ;
struct i40e_pf {int num_alloc_vfs; int flags; int state; TYPE_2__* pdev; struct i40e_vf* vf; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct i40e_vf*) ;
 int FUNC_5 (struct i40e_vf*) ;
 struct i40e_netdev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(struct net_device *VAR_4, int VAR_5, bool VAR_6)
{
 struct i40e_netdev_priv *VAR_7 = FUNC_6(VAR_4);
 struct i40e_pf *VAR_8 = VAR_7->vsi->back;
 struct i40e_vf *VAR_9;
 int VAR_10 = 0;

 if (FUNC_7(VAR_3, VAR_8->state)) {
  FUNC_3(&VAR_8->pdev->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }


 if (VAR_5 >= VAR_8->num_alloc_vfs) {
  FUNC_1(&VAR_8->pdev->dev, "Invalid VF Identifier %d\n", VAR_5);
  VAR_10 = -VAR_1;
  goto out;
 }

 if (VAR_8->flags & VAR_2) {
  FUNC_1(&VAR_8->pdev->dev, "Trusted VF not supported in MFP mode.\n");
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_9 = &VAR_8->vf[VAR_5];

 if (VAR_6 == VAR_9->trusted)
  goto out;

 VAR_9->trusted = VAR_6;
 FUNC_5(VAR_9);
 FUNC_2(&VAR_8->pdev->dev, "VF %u is now %strusted\n",
   VAR_5, VAR_6 ? "" : "un");

 if (VAR_9->adq_enabled) {
  if (!VAR_9->trusted) {
   FUNC_2(&VAR_8->pdev->dev,
     "VF %u no longer Trusted, deleting all cloud filters\n",
     VAR_5);
   FUNC_4(VAR_9);
  }
 }

out:
 FUNC_0(VAR_3, VAR_8->state);
 return VAR_10;
}
