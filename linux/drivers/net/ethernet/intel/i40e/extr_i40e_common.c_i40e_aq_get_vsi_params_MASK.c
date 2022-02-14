
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct i40e_vsi_context {void* vsis_unallocated; void* vsis_allocated; void* vsi_number; void* seid; int info; } ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_add_get_update_vsi_completion {int vsi_free; int vsi_used; int vsi_number; int seid; } ;
struct i40e_aqc_add_get_update_vsi {int uplink_seid; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int,int *) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;
 void* FUNC_3 (int ) ;

i40e_status FUNC_4(struct i40e_hw *VAR_2,
    struct i40e_vsi_context *VAR_3,
    struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_add_get_update_vsi *VAR_6 =
  (struct i40e_aqc_add_get_update_vsi *)&VAR_5.params.raw;
 struct i40e_aqc_add_get_update_vsi_completion *VAR_7 =
  (struct i40e_aqc_add_get_update_vsi_completion *)
  &VAR_5.params.raw;
 i40e_status VAR_8;

 FUNC_2(&VAR_5,
       VAR_1);

 VAR_6->uplink_seid = FUNC_0(VAR_3->seid);

 VAR_5.flags |= FUNC_0((u16)VAR_0);

 VAR_8 = FUNC_1(VAR_2, &VAR_5, &VAR_3->info,
        sizeof(VAR_3->info), ((void*)0));

 if (VAR_8)
  goto aq_get_vsi_params_exit;

 VAR_3->seid = FUNC_3(VAR_7->seid);
 VAR_3->vsi_number = FUNC_3(VAR_7->vsi_number);
 VAR_3->vsis_allocated = FUNC_3(VAR_7->vsi_used);
 VAR_3->vsis_unallocated = FUNC_3(VAR_7->vsi_free);

aq_get_vsi_params_exit:
 return VAR_8;
}
