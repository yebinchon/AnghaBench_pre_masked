
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_dcbx_cfg {void* dcbx_mode; int tlv_status; } ;
struct ice_port_info {struct ice_dcbx_cfg local_dcbx_cfg; TYPE_2__* hw; } ;
struct ice_aqc_get_cee_dcb_cfg_resp {int tlv_status; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {scalar_t__ sq_last_status; } ;
struct TYPE_4__ {TYPE_1__ adminq; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct ice_aqc_get_cee_dcb_cfg_resp*,int *) ;
 int FUNC_1 (struct ice_aqc_get_cee_dcb_cfg_resp*,struct ice_dcbx_cfg*) ;
 int FUNC_2 (struct ice_port_info*,void*) ;
 int FUNC_3 (int ) ;

enum ice_status FUNC_4(struct ice_port_info *VAR_4)
{
 struct ice_aqc_get_cee_dcb_cfg_resp VAR_5;
 struct ice_dcbx_cfg *VAR_6;
 enum ice_status VAR_7;

 if (!VAR_4)
  return VAR_3;

 VAR_7 = FUNC_0(VAR_4->hw, &VAR_5, ((void*)0));
 if (!VAR_7) {

  VAR_6 = &VAR_4->local_dcbx_cfg;
  VAR_6->dcbx_mode = VAR_1;
  VAR_6->tlv_status = FUNC_3(VAR_5.tlv_status);
  FUNC_1(&VAR_5, VAR_6);
  VAR_7 = FUNC_2(VAR_4, VAR_1);
 } else if (VAR_4->hw->adminq.sq_last_status == VAR_0) {

  VAR_6 = &VAR_4->local_dcbx_cfg;
  VAR_6->dcbx_mode = VAR_2;
  VAR_7 = FUNC_2(VAR_4, VAR_2);
 }

 return VAR_7;
}
