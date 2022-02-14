
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_vlan_filter_list {int num_elements; scalar_t__* vlan_id; int vsi_id; } ;
struct TYPE_3__ {scalar_t__ pvid; } ;
struct i40e_vsi {int seid; TYPE_1__ info; } ;
struct i40e_vf {scalar_t__ num_vlan; size_t lan_vsi_idx; int vf_id; int vf_states; int vf_caps; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_2__* pdev; int hw; struct i40e_vsi** vsi; } ;
typedef int i40e_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int,scalar_t__,int *) ;
 int FUNC_2 (int *,int ,int,scalar_t__,int *) ;
 int FUNC_3 (struct i40e_vf*,int ) ;
 int FUNC_4 (struct i40e_vf*,int ,int ) ;
 int FUNC_5 (struct i40e_vsi*) ;
 int FUNC_6 (struct i40e_vsi*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct i40e_vf *VAR_8, u8 *VAR_9)
{
 struct virtchnl_vlan_filter_list *VAR_10 =
     (struct virtchnl_vlan_filter_list *)VAR_9;
 struct i40e_pf *VAR_11 = VAR_8->pf;
 struct i40e_vsi *VAR_12 = ((void*)0);
 i40e_status VAR_13 = 0;
 int VAR_14;

 if ((VAR_8->num_vlan >= VAR_2) &&
     !FUNC_7(VAR_6, &VAR_8->vf_caps)) {
  FUNC_0(&VAR_11->pdev->dev,
   "VF is not trusted, switch the VF to trusted to add more VLAN addresses\n");
  goto error_param;
 }
 if (!FUNC_7(VAR_3, &VAR_8->vf_states) ||
     !FUNC_3(VAR_8, VAR_10->vsi_id)) {
  VAR_13 = VAR_0;
  goto error_param;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->num_elements; VAR_14++) {
  if (VAR_10->vlan_id[VAR_14] > VAR_1) {
   VAR_13 = VAR_0;
   FUNC_0(&VAR_11->pdev->dev,
    "invalid VF VLAN id %d\n", VAR_10->vlan_id[VAR_14]);
   goto error_param;
  }
 }
 VAR_12 = VAR_11->vsi[VAR_8->lan_vsi_idx];
 if (VAR_12->info.pvid) {
  VAR_13 = VAR_0;
  goto error_param;
 }

 FUNC_5(VAR_12);
 for (VAR_14 = 0; VAR_14 < VAR_10->num_elements; VAR_14++) {

  int VAR_15 = FUNC_6(VAR_12, VAR_10->vlan_id[VAR_14]);
  if (!VAR_15)
   VAR_8->num_vlan++;

  if (FUNC_7(VAR_5, &VAR_8->vf_states))
   FUNC_2(&VAR_11->hw, VAR_12->seid,
          1,
          VAR_10->vlan_id[VAR_14],
          ((void*)0));
  if (FUNC_7(VAR_4, &VAR_8->vf_states))
   FUNC_1(&VAR_11->hw, VAR_12->seid,
          1,
          VAR_10->vlan_id[VAR_14],
          ((void*)0));

  if (VAR_15)
   FUNC_0(&VAR_11->pdev->dev,
    "Unable to add VLAN filter %d for VF %d, error %d\n",
    VAR_10->vlan_id[VAR_14], VAR_8->vf_id, VAR_15);
 }

error_param:

 return FUNC_4(VAR_8, VAR_7, VAR_13);
}
