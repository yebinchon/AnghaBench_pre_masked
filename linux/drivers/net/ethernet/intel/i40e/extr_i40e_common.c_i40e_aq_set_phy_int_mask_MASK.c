
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_phy_int_mask {int event_mask; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

i40e_status FUNC_3(struct i40e_hw *VAR_1,
         u16 VAR_2,
         struct i40e_asq_cmd_details *VAR_3)
{
 struct i40e_aq_desc VAR_4;
 struct i40e_aqc_set_phy_int_mask *VAR_5 =
  (struct i40e_aqc_set_phy_int_mask *)&VAR_4.params.raw;
 i40e_status VAR_6;

 FUNC_2(&VAR_4,
       VAR_0);

 VAR_5->event_mask = FUNC_0(VAR_2);

 VAR_6 = FUNC_1(VAR_1, &VAR_4, ((void*)0), 0, VAR_3);

 return VAR_6;
}
