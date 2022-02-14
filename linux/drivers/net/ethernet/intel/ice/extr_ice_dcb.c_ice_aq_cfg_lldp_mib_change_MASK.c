
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_lldp_set_mib_change {int command; } ;
struct TYPE_2__ {struct ice_aqc_lldp_set_mib_change lldp_set_event; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_1 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_2, bool VAR_3,
      struct ice_sq_cd *VAR_4)
{
 struct ice_aqc_lldp_set_mib_change *VAR_5;
 struct ice_aq_desc VAR_6;

 VAR_5 = &VAR_6.params.lldp_set_event;

 FUNC_1(&VAR_6, VAR_1);

 if (!VAR_3)
  VAR_5->command |= VAR_0;

 return FUNC_0(VAR_2, &VAR_6, ((void*)0), 0, VAR_4);
}
