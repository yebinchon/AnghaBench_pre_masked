
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_vsi_list_map_info {int list_entry; int vsi_map; } ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {int hw_vsi_id; int vsi_list_id; } ;
struct ice_fltr_info {scalar_t__ fltr_act; int lkup_type; TYPE_1__ fwd_id; int vsi_handle; } ;
struct ice_fltr_mgmt_list_entry {scalar_t__ vsi_count; struct ice_vsi_list_map_info* vsi_list_info; struct ice_fltr_info fltr_info; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ice_vsi_list_map_info*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct ice_hw*,int ,char*,int ,int) ;
 int FUNC_4 (struct ice_hw*,int ) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_hw*,int ) ;
 int FUNC_7 (struct ice_hw*,int ,int) ;
 int FUNC_8 (struct ice_hw*,struct ice_fltr_info*) ;
 int FUNC_9 (struct ice_hw*,int *,int,int ,int,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static enum ice_status
FUNC_12(struct ice_hw *VAR_9, u16 VAR_10,
   struct ice_fltr_mgmt_list_entry *VAR_11)
{
 enum ice_sw_lkup_type VAR_12;
 enum ice_status VAR_13 = 0;
 u16 VAR_14;

 if (VAR_11->fltr_info.fltr_act != VAR_5 ||
     VAR_11->vsi_count == 0)
  return VAR_3;


 if (!FUNC_11(VAR_10, VAR_11->vsi_list_info->vsi_map))
  return VAR_1;

 VAR_12 = VAR_11->fltr_info.lkup_type;
 VAR_14 = VAR_11->fltr_info.fwd_id.vsi_list_id;
 VAR_13 = FUNC_9(VAR_9, &VAR_10, 1, VAR_14, 1,
       VAR_8,
       VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_11->vsi_count--;
 FUNC_0(VAR_10, VAR_11->vsi_list_info->vsi_map);

 if (VAR_11->vsi_count == 1 && VAR_12 != VAR_7) {
  struct ice_fltr_info VAR_15 = VAR_11->fltr_info;
  struct ice_vsi_list_map_info *VAR_16 =
   VAR_11->vsi_list_info;
  u16 VAR_17;

  VAR_17 = FUNC_2(VAR_16->vsi_map,
      VAR_6);
  if (!FUNC_6(VAR_9, VAR_17))
   return VAR_2;


  VAR_13 = FUNC_9(VAR_9, &VAR_17, 1,
        VAR_14, 1,
        VAR_8,
        VAR_12);
  if (VAR_13)
   return VAR_13;

  VAR_15.fltr_act = VAR_4;
  VAR_15.fwd_id.hw_vsi_id =
   FUNC_4(VAR_9, VAR_17);
  VAR_15.vsi_handle = VAR_17;
  VAR_13 = FUNC_8(VAR_9, &VAR_15);
  if (VAR_13) {
   FUNC_3(VAR_9, VAR_0,
      "Failed to update pkt fwd rule to FWD_TO_VSI on HW VSI %d, error %d\n",
      VAR_15.fwd_id.hw_vsi_id, VAR_13);
   return VAR_13;
  }

  VAR_11->fltr_info = VAR_15;
 }

 if ((VAR_11->vsi_count == 1 && VAR_12 != VAR_7) ||
     (VAR_11->vsi_count == 0 && VAR_12 == VAR_7)) {
  struct ice_vsi_list_map_info *VAR_18 =
   VAR_11->vsi_list_info;


  VAR_13 = FUNC_7(VAR_9, VAR_14, VAR_12);
  if (VAR_13) {
   FUNC_3(VAR_9, VAR_0,
      "Failed to remove VSI list %d, error %d\n",
      VAR_14, VAR_13);
   return VAR_13;
  }

  FUNC_10(&VAR_18->list_entry);
  FUNC_1(FUNC_5(VAR_9), VAR_18);
  VAR_11->vsi_list_info = ((void*)0);
 }

 return VAR_13;
}
