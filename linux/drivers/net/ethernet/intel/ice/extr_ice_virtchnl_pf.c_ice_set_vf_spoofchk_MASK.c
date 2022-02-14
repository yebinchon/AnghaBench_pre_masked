
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int sw_flags2; int sec_flags; int valid_sections; } ;
struct ice_vsi_ctx {TYPE_2__ info; } ;
struct TYPE_4__ {int sw_flags2; int sec_flags; } ;
struct ice_vsi {TYPE_1__ info; int idx; struct ice_pf* back; } ;
struct ice_vf {int spoofchk; int vf_states; } ;
struct ice_pf {int num_alloc_vfs; TYPE_3__* pdev; int hw; struct ice_vf* vf; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,struct ice_vsi_ctx*,int *) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct ice_netdev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct net_device *VAR_9, int VAR_10, bool VAR_11)
{
 struct ice_netdev_priv *VAR_12 = FUNC_6(VAR_9);
 struct ice_vsi *VAR_13 = VAR_12->vsi;
 struct ice_pf *VAR_14 = VAR_13->back;
 struct ice_vsi_ctx *VAR_15;
 enum ice_status VAR_16;
 struct ice_vf *VAR_17;
 int VAR_18 = 0;


 if (VAR_10 >= VAR_14->num_alloc_vfs) {
  FUNC_5(VAR_9, "invalid VF id: %d\n", VAR_10);
  return -VAR_1;
 }

 VAR_17 = &VAR_14->vf[VAR_10];
 if (!FUNC_7(VAR_8, VAR_17->vf_states)) {
  FUNC_5(VAR_9, "VF %d in reset. Try again.\n", VAR_10);
  return -VAR_0;
 }

 if (VAR_11 == VAR_17->spoofchk) {
  FUNC_1(&VAR_14->pdev->dev, "VF spoofchk already %s\n",
   VAR_11 ? "ON" : "OFF");
  return 0;
 }

 VAR_15 = FUNC_3(&VAR_14->pdev->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->info.valid_sections = FUNC_0(VAR_5);

 if (VAR_11) {
  VAR_15->info.sec_flags |= VAR_6;
  VAR_15->info.sw_flags2 |= VAR_7;
 }

 VAR_16 = FUNC_4(&VAR_14->hw, VAR_13->idx, VAR_15, ((void*)0));
 if (VAR_16) {
  FUNC_1(&VAR_14->pdev->dev,
   "Error %d, failed to update VSI* parameters\n", VAR_16);
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_17->spoofchk = VAR_11;
 VAR_13->info.sec_flags = VAR_15->info.sec_flags;
 VAR_13->info.sw_flags2 = VAR_15->info.sw_flags2;
out:
 FUNC_2(&VAR_14->pdev->dev, VAR_15);
 return VAR_18;
}
