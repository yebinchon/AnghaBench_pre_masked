
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi_ctx {int vsi_num; void* vsis_unallocated; void* vsis_allocd; } ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_add_update_free_vsi_resp {int vsi_free; int vsi_used; } ;
struct ice_aqc_add_get_update_free_vsi {void* cmd_flags; void* vsi_num; } ;
struct TYPE_2__ {struct ice_aqc_add_update_free_vsi_resp add_update_free_vsi_res; struct ice_aqc_add_get_update_free_vsi vsi_cmd; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_2 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_3, struct ice_vsi_ctx *VAR_4,
  bool VAR_5, struct ice_sq_cd *VAR_6)
{
 struct ice_aqc_add_update_free_vsi_resp *VAR_7;
 struct ice_aqc_add_get_update_free_vsi *VAR_8;
 struct ice_aq_desc VAR_9;
 enum ice_status VAR_10;

 VAR_8 = &VAR_9.params.vsi_cmd;
 VAR_7 = &VAR_9.params.add_update_free_vsi_res;

 FUNC_2(&VAR_9, VAR_2);

 VAR_8->vsi_num = FUNC_0(VAR_4->vsi_num | VAR_0);
 if (VAR_5)
  VAR_8->cmd_flags = FUNC_0(VAR_1);

 VAR_10 = FUNC_1(VAR_3, &VAR_9, ((void*)0), 0, VAR_6);
 if (!VAR_10) {
  VAR_4->vsis_allocd = FUNC_3(VAR_7->vsi_used);
  VAR_4->vsis_unallocated = FUNC_3(VAR_7->vsi_free);
 }

 return VAR_10;
}
