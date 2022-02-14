
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fw_maj_ver; int fw_min_ver; scalar_t__ asq_last_status; } ;
struct TYPE_7__ {int tlv_status; void* dcbx_mode; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ aq; int remote_dcbx_config; int desired_dcbx_config; TYPE_3__ local_dcbx_config; TYPE_1__ mac; } ;
struct i40e_aqc_get_cee_dcb_cfg_v1_resp {int tlv_status; } ;
struct i40e_aqc_get_cee_dcb_cfg_resp {int tlv_status; } ;
typedef scalar_t__ i40e_status ;
typedef int cee_v1_cfg ;
typedef int cee_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,int,int *) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_2 (struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,TYPE_3__*) ;
 int FUNC_3 (struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

i40e_status FUNC_7(struct i40e_hw *VAR_6)
{
 i40e_status VAR_7 = 0;
 struct i40e_aqc_get_cee_dcb_cfg_resp VAR_8;
 struct i40e_aqc_get_cee_dcb_cfg_v1_resp VAR_9;


 if ((VAR_6->mac.type == VAR_5) &&
     (((VAR_6->aq.fw_maj_ver == 4) && (VAR_6->aq.fw_min_ver < 33)) ||
       (VAR_6->aq.fw_maj_ver < 4)))
  return FUNC_4(VAR_6);


 if ((VAR_6->mac.type == VAR_5) &&
     ((VAR_6->aq.fw_maj_ver == 4) && (VAR_6->aq.fw_min_ver == 33))) {
  VAR_7 = FUNC_0(VAR_6, &VAR_9,
       sizeof(VAR_9), ((void*)0));
  if (!VAR_7) {

   VAR_6->local_dcbx_config.dcbx_mode = VAR_4;
   VAR_6->local_dcbx_config.tlv_status =
     FUNC_5(VAR_9.tlv_status);
   FUNC_3(&VAR_9,
        &VAR_6->local_dcbx_config);
  }
 } else {
  VAR_7 = FUNC_0(VAR_6, &VAR_8,
       sizeof(VAR_8), ((void*)0));
  if (!VAR_7) {

   VAR_6->local_dcbx_config.dcbx_mode = VAR_4;
   VAR_6->local_dcbx_config.tlv_status =
     FUNC_6(VAR_8.tlv_status);
   FUNC_2(&VAR_8,
            &VAR_6->local_dcbx_config);
  }
 }


 if (VAR_6->aq.asq_last_status == VAR_3)
  return FUNC_4(VAR_6);

 if (VAR_7)
  goto out;


 VAR_7 = FUNC_1(VAR_6, VAR_1, 0,
         &VAR_6->desired_dcbx_config);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_1(VAR_6, VAR_2,
         VAR_0,
         &VAR_6->remote_dcbx_config);

 if (VAR_6->aq.asq_last_status == VAR_3)
  VAR_7 = 0;

out:
 return VAR_7;
}
