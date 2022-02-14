
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_version {int api_minor; int api_major; int fw_build; int fw_minor; int fw_major; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

i40e_status FUNC_4(struct i40e_hw *VAR_1,
    u16 *VAR_2, u16 *VAR_3,
    u32 *VAR_4,
    u16 *VAR_5, u16 *VAR_6,
    struct i40e_asq_cmd_details *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aqc_get_version *VAR_9 =
  (struct i40e_aqc_get_version *)&VAR_8.params.raw;
 i40e_status VAR_10;

 FUNC_1(&VAR_8, VAR_0);

 VAR_10 = FUNC_0(VAR_1, &VAR_8, ((void*)0), 0, VAR_7);

 if (!VAR_10) {
  if (VAR_2)
   *VAR_2 = FUNC_2(VAR_9->fw_major);
  if (VAR_3)
   *VAR_3 = FUNC_2(VAR_9->fw_minor);
  if (VAR_4)
   *VAR_4 = FUNC_3(VAR_9->fw_build);
  if (VAR_5)
   *VAR_5 = FUNC_2(VAR_9->api_major);
  if (VAR_6)
   *VAR_6 = FUNC_2(VAR_9->api_minor);
 }

 return VAR_10;
}
