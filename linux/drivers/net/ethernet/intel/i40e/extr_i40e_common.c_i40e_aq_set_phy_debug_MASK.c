
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_phy_debug {int command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;

i40e_status FUNC_2(struct i40e_hw *VAR_1, u8 VAR_2,
      struct i40e_asq_cmd_details *VAR_3)
{
 struct i40e_aq_desc VAR_4;
 struct i40e_aqc_set_phy_debug *VAR_5 =
  (struct i40e_aqc_set_phy_debug *)&VAR_4.params.raw;
 i40e_status VAR_6;

 FUNC_1(&VAR_4,
       VAR_0);

 VAR_5->command_flags = VAR_2;

 VAR_6 = FUNC_0(VAR_1, &VAR_4, ((void*)0), 0, VAR_3);

 return VAR_6;
}
