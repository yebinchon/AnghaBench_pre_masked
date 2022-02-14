
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_cee_dcb_cfg_resp {int dummy; } ;
struct ice_aq_desc {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,void*,int,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_1,
         struct ice_aqc_get_cee_dcb_cfg_resp *VAR_2,
         struct ice_sq_cd *VAR_3)
{
 struct ice_aq_desc VAR_4;

 FUNC_1(&VAR_4, VAR_0);

 return FUNC_0(VAR_1, &VAR_4, (void *)VAR_2, sizeof(*VAR_2), VAR_3);
}
