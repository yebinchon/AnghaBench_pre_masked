
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ice_port_info {int is_sw_lldp; scalar_t__ dcbx_status; } ;
struct TYPE_6__ {scalar_t__ sq_last_status; } ;
struct TYPE_4__ {int dcb; } ;
struct TYPE_5__ {TYPE_1__ common_cap; } ;
struct ice_hw {TYPE_3__ adminq; TYPE_2__ func_caps; struct ice_port_info* port_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ice_hw*,int,int *) ;
 int FUNC_1 (struct ice_port_info*) ;
 scalar_t__ FUNC_2 (struct ice_hw*) ;

enum ice_status FUNC_3(struct ice_hw *VAR_7, bool VAR_8)
{
 struct ice_port_info *VAR_9 = VAR_7->port_info;
 enum ice_status VAR_10 = 0;

 if (!VAR_7->func_caps.common_cap.dcb)
  return VAR_6;

 VAR_9->is_sw_lldp = 1;


 VAR_9->dcbx_status = FUNC_2(VAR_7);

 if (VAR_9->dcbx_status == VAR_2 ||
     VAR_9->dcbx_status == VAR_3 ||
     VAR_9->dcbx_status == VAR_4) {

  VAR_10 = FUNC_1(VAR_9);
  VAR_9->is_sw_lldp = (VAR_7->adminq.sq_last_status == VAR_0);
  if (VAR_10)
   return VAR_10;
 } else if (VAR_9->dcbx_status == VAR_1) {
  return VAR_5;
 }


 if (VAR_8) {
  VAR_10 = FUNC_0(VAR_7, 1, ((void*)0));
  if (!VAR_10)
   VAR_9->is_sw_lldp = 0;
 }

 return VAR_10;
}
