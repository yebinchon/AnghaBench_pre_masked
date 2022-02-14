
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_lldp_stop_start_specific_agent {scalar_t__ command; } ;
struct TYPE_2__ {struct ice_aqc_lldp_stop_start_specific_agent lldp_agent_ctrl; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_1 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

enum ice_status
FUNC_2(struct ice_hw *VAR_2, bool VAR_3,
         bool *VAR_4, struct ice_sq_cd *VAR_5)
{
 struct ice_aqc_lldp_stop_start_specific_agent *VAR_6;
 enum ice_status VAR_7;
 struct ice_aq_desc VAR_8;
 u16 VAR_9;

 VAR_6 = &VAR_8.params.lldp_agent_ctrl;

 VAR_9 = VAR_1;

 FUNC_1(&VAR_8, VAR_9);

 if (VAR_3)
  VAR_6->command = VAR_0;

 VAR_7 = FUNC_0(VAR_2, &VAR_8, ((void*)0), 0, VAR_5);

 *VAR_4 = 0;

 if (!VAR_7 &&
     VAR_6->command == VAR_0)
  *VAR_4 = 1;

 return VAR_7;
}
