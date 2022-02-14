
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_mac_address_read_data {int dummy; } ;
struct i40e_aqc_mac_address_read {int command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_mac_address_read_data*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_2,
       u16 *VAR_3,
       struct i40e_aqc_mac_address_read_data *VAR_4,
       struct i40e_asq_cmd_details *VAR_5)
{
 struct i40e_aq_desc VAR_6;
 struct i40e_aqc_mac_address_read *VAR_7 =
  (struct i40e_aqc_mac_address_read *)&VAR_6.params.raw;
 i40e_status VAR_8;

 FUNC_2(&VAR_6, VAR_1);
 VAR_6.flags |= FUNC_0(VAR_0);

 VAR_8 = FUNC_1(VAR_2, &VAR_6, VAR_4,
           sizeof(*VAR_4), VAR_5);
 *VAR_3 = FUNC_3(VAR_7->command_flags);

 return VAR_8;
}
