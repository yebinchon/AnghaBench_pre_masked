
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_vsi_promiscuous_modes {void* seid; void* valid_flags; void* promiscuous_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

i40e_status FUNC_3(struct i40e_hw *VAR_2,
          u16 VAR_3,
          struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_set_vsi_promiscuous_modes *VAR_6 =
  (struct i40e_aqc_set_vsi_promiscuous_modes *)
  &VAR_5.params.raw;
 i40e_status VAR_7;

 FUNC_2(&VAR_5,
       VAR_1);

 VAR_6->promiscuous_flags = FUNC_0(0);
 VAR_6->valid_flags = FUNC_0(VAR_0);
 VAR_6->seid = FUNC_0(VAR_3);

 VAR_7 = FUNC_1(VAR_2, &VAR_5, ((void*)0), 0, VAR_4);

 return VAR_7;
}
