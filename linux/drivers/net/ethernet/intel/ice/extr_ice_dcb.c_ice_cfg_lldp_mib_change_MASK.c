
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_port_info {scalar_t__ dcbx_status; int is_sw_lldp; } ;
struct TYPE_3__ {int dcb; } ;
struct TYPE_4__ {TYPE_1__ common_cap; } ;
struct ice_hw {TYPE_2__ func_caps; struct ice_port_info* port_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_hw*,int,int *) ;
 scalar_t__ FUNC_1 (struct ice_hw*) ;

enum ice_status FUNC_2(struct ice_hw *VAR_3, bool VAR_4)
{
 struct ice_port_info *VAR_5 = VAR_3->port_info;
 enum ice_status VAR_6;

 if (!VAR_3->func_caps.common_cap.dcb)
  return VAR_2;


 VAR_5->dcbx_status = FUNC_1(VAR_3);

 if (VAR_5->dcbx_status == VAR_0)
  return VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_4, ((void*)0));
 if (!VAR_6)
  VAR_5->is_sw_lldp = !VAR_4;

 return VAR_6;
}
