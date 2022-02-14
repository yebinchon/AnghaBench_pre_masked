
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_switch_seid {int seid; } ;
struct i40e_aqc_get_switch_config_resp {int dummy; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef int i40e_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_get_switch_config_resp*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;
 int FUNC_3 (int ) ;

i40e_status FUNC_4(struct i40e_hw *VAR_4,
    struct i40e_aqc_get_switch_config_resp *VAR_5,
    u16 VAR_6, u16 *VAR_7,
    struct i40e_asq_cmd_details *VAR_8)
{
 struct i40e_aq_desc VAR_9;
 struct i40e_aqc_switch_seid *VAR_10 =
  (struct i40e_aqc_switch_seid *)&VAR_9.params.raw;
 i40e_status VAR_11;

 FUNC_2(&VAR_9,
       VAR_3);
 VAR_9.flags |= FUNC_0((u16)VAR_0);
 if (VAR_6 > VAR_2)
  VAR_9.flags |= FUNC_0((u16)VAR_1);
 VAR_10->seid = FUNC_0(*VAR_7);

 VAR_11 = FUNC_1(VAR_4, &VAR_9, VAR_5, VAR_6, VAR_8);
 *VAR_7 = FUNC_3(VAR_10->seid);

 return VAR_11;
}
