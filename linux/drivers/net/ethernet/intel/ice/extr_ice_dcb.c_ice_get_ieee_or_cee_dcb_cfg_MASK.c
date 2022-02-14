
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ice_dcbx_cfg {int dummy; } ;
struct ice_port_info {TYPE_2__* hw; struct ice_dcbx_cfg remote_dcbx_cfg; struct ice_dcbx_cfg desired_dcbx_cfg; struct ice_dcbx_cfg local_dcbx_cfg; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {scalar_t__ sq_last_status; } ;
struct TYPE_4__ {TYPE_1__ adminq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int ,struct ice_dcbx_cfg*) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_port_info *VAR_7, u8 VAR_8)
{
 struct ice_dcbx_cfg *VAR_9 = ((void*)0);
 enum ice_status VAR_10;

 if (!VAR_7)
  return VAR_6;

 if (VAR_8 == VAR_5)
  VAR_9 = &VAR_7->local_dcbx_cfg;
 else if (VAR_8 == VAR_4)
  VAR_9 = &VAR_7->desired_dcbx_cfg;




 VAR_10 = FUNC_0(VAR_7->hw, VAR_1,
     VAR_0, VAR_9);
 if (VAR_10)
  goto out;


 VAR_9 = &VAR_7->remote_dcbx_cfg;
 VAR_10 = FUNC_0(VAR_7->hw, VAR_2,
     VAR_0, VAR_9);

 if (VAR_7->hw->adminq.sq_last_status == VAR_3)
  VAR_10 = 0;

out:
 return VAR_10;
}
