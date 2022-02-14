
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef char* u16 ;
struct virtchnl_vlan_filter_list {int num_elements; scalar_t__* vlan_id; int vsi_id; } ;
struct TYPE_3__ {scalar_t__ pvid; } ;
struct ice_vsi {int vsi_num; int idx; TYPE_1__ info; } ;
struct ice_vf {scalar_t__ num_vlan; size_t lan_vsi_idx; int vf_id; int vf_states; struct ice_pf* pf; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {TYPE_2__* pdev; struct ice_vsi** vsi; struct ice_hw hw; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct ice_vsi*,int,int) ;
 int FUNC_3 (struct ice_hw*,int ,int,char*) ;
 int FUNC_4 (struct ice_vf*) ;
 int FUNC_5 (struct ice_hw*,int ,int,char*) ;
 int FUNC_6 (struct ice_vf*,int ) ;
 int FUNC_7 (struct ice_vf*,int ,int,int *,int ) ;
 scalar_t__ FUNC_8 (struct ice_vsi*,char*) ;
 scalar_t__ FUNC_9 (struct ice_vsi*,char*) ;
 scalar_t__ FUNC_10 (struct ice_vsi*,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ice_vf *VAR_11, u8 *VAR_12, bool VAR_13)
{
 enum virtchnl_status_code VAR_14 = VAR_10;
 struct virtchnl_vlan_filter_list *VAR_15 =
     (struct virtchnl_vlan_filter_list *)VAR_12;
 struct ice_pf *VAR_16 = VAR_11->pf;
 bool VAR_17 = 0;
 struct ice_vsi *VAR_18;
 struct ice_hw *VAR_19;
 int VAR_20 = 0;
 u8 VAR_21;
 int VAR_22;

 if (!FUNC_11(VAR_4, VAR_11->vf_states)) {
  VAR_14 = VAR_9;
  goto error_param;
 }

 if (!FUNC_6(VAR_11, VAR_15->vsi_id)) {
  VAR_14 = VAR_9;
  goto error_param;
 }

 if (VAR_13 && !FUNC_4(VAR_11) &&
     VAR_11->num_vlan >= VAR_1) {
  FUNC_1(&VAR_16->pdev->dev,
    "VF-%d is not trusted, switch the VF to trusted mode, in order to add more VLAN addresses\n",
    VAR_11->vf_id);



  goto error_param;
 }

 for (VAR_22 = 0; VAR_22 < VAR_15->num_elements; VAR_22++) {
  if (VAR_15->vlan_id[VAR_22] > VAR_0) {
   VAR_14 = VAR_9;
   FUNC_0(&VAR_16->pdev->dev,
    "invalid VF VLAN id %d\n", VAR_15->vlan_id[VAR_22]);
   goto error_param;
  }
 }

 VAR_19 = &VAR_16->hw;
 VAR_18 = VAR_16->vsi[VAR_11->lan_vsi_idx];
 if (!VAR_18) {
  VAR_14 = VAR_9;
  goto error_param;
 }

 if (VAR_18->info.pvid) {
  VAR_14 = VAR_9;
  goto error_param;
 }

 if (FUNC_10(VAR_18, VAR_13)) {
  FUNC_0(&VAR_16->pdev->dev,
   "%sable VLAN stripping failed for VSI %i\n",
    VAR_13 ? "en" : "dis", VAR_18->vsi_num);
  VAR_14 = VAR_9;
  goto error_param;
 }

 if (FUNC_11(VAR_6, VAR_11->vf_states) ||
     FUNC_11(VAR_5, VAR_11->vf_states))
  VAR_17 = 1;

 if (VAR_13) {
  for (VAR_22 = 0; VAR_22 < VAR_15->num_elements; VAR_22++) {
   u16 VAR_23 = VAR_15->vlan_id[VAR_22];

   if (!FUNC_4(VAR_11) &&
       VAR_11->num_vlan >= VAR_1) {
    FUNC_1(&VAR_16->pdev->dev,
      "VF-%d is not trusted, switch the VF to trusted mode, in order to add more VLAN addresses\n",
      VAR_11->vf_id);




    goto error_param;
   }

   if (FUNC_8(VAR_18, VAR_23)) {
    VAR_14 = VAR_9;
    goto error_param;
   }

   VAR_11->num_vlan++;

   if (!VAR_17) {
    VAR_20 = FUNC_2(VAR_18, 1, 0);
    if (VAR_20) {
     VAR_14 = VAR_9;
     FUNC_0(&VAR_16->pdev->dev,
      "Enable VLAN pruning on VLAN ID: %d failed error-%d\n",
      VAR_23, VAR_20);
     goto error_param;
    }
   } else {

    VAR_21 = VAR_3 |
         VAR_2;

    VAR_20 = FUNC_5(VAR_19, VAR_18->idx,
            VAR_21, VAR_23);
    if (VAR_20) {
     VAR_14 = VAR_9;
     FUNC_0(&VAR_16->pdev->dev,
      "Enable Unicast/multicast promiscuous mode on VLAN ID:%d failed error-%d\n",
      VAR_23, VAR_20);
    }
   }
  }
 } else {







  int VAR_24;

  VAR_24 = VAR_11->num_vlan;
  for (VAR_22 = 0; VAR_22 < VAR_15->num_elements && VAR_22 < VAR_24; VAR_22++) {
   u16 VAR_25 = VAR_15->vlan_id[VAR_22];




   if (FUNC_9(VAR_18, VAR_25)) {
    VAR_14 = VAR_9;
    goto error_param;
   }

   VAR_11->num_vlan--;

   if (!VAR_11->num_vlan)
    FUNC_2(VAR_18, 0, 0);


   if (VAR_17) {
    VAR_21 = VAR_3 |
         VAR_2;

    FUNC_3(VAR_19, VAR_18->idx,
            VAR_21, VAR_25);
   }
  }
 }

error_param:

 if (VAR_13)
  return FUNC_7(VAR_11, VAR_7, VAR_14,
          ((void*)0), 0);
 else
  return FUNC_7(VAR_11, VAR_8, VAR_14,
          ((void*)0), 0);
}
