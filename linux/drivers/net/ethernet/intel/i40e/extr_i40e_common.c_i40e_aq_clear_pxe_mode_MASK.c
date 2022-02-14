
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_clear_pxe {int rx_cnt; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

i40e_status FUNC_3(struct i40e_hw *VAR_2,
    struct i40e_asq_cmd_details *VAR_3)
{
 i40e_status VAR_4;
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_clear_pxe *VAR_6 =
  (struct i40e_aqc_clear_pxe *)&VAR_5.params.raw;

 FUNC_1(&VAR_5,
       VAR_1);

 VAR_6->rx_cnt = 0x2;

 VAR_4 = FUNC_0(VAR_2, &VAR_5, ((void*)0), 0, VAR_3);

 FUNC_2(VAR_2, VAR_0, 0x1);

 return VAR_4;
}
