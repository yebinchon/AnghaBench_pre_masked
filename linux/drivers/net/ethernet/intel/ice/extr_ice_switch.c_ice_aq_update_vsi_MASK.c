
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi_ctx {int vsi_num; void* vsis_unallocated; void* vsis_allocd; int info; } ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_add_update_free_vsi_resp {int vsi_free; int vsi_used; } ;
struct ice_aqc_add_get_update_free_vsi {int vsi_num; } ;
struct TYPE_2__ {struct ice_aqc_add_update_free_vsi_resp add_update_free_vsi_res; struct ice_aqc_add_get_update_free_vsi vsi_cmd; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,int *,int,struct ice_sq_cd*) ;
 int VAR_2 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_3, struct ice_vsi_ctx *VAR_4,
    struct ice_sq_cd *VAR_5)
{
 struct ice_aqc_add_update_free_vsi_resp *VAR_6;
 struct ice_aqc_add_get_update_free_vsi *VAR_7;
 struct ice_aq_desc VAR_8;
 enum ice_status VAR_9;

 VAR_7 = &VAR_8.params.vsi_cmd;
 VAR_6 = &VAR_8.params.add_update_free_vsi_res;

 FUNC_2(&VAR_8, VAR_2);

 VAR_7->vsi_num = FUNC_0(VAR_4->vsi_num | VAR_1);

 VAR_8.flags |= FUNC_0(VAR_0);

 VAR_9 = FUNC_1(VAR_3, &VAR_8, &VAR_4->info,
     sizeof(VAR_4->info), VAR_5);

 if (!VAR_9) {
  VAR_4->vsis_allocd = FUNC_3(VAR_6->vsi_used);
  VAR_4->vsis_unallocated = FUNC_3(VAR_6->vsi_free);
 }

 return VAR_9;
}
