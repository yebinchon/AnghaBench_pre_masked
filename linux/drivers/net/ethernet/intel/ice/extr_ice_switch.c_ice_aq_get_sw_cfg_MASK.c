
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_sw_cfg_resp {int dummy; } ;
struct ice_aqc_get_sw_cfg {int num_elems; int element; } ;
struct TYPE_2__ {struct ice_aqc_get_sw_cfg get_sw_conf; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_get_sw_cfg_resp*,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_1, struct ice_aqc_get_sw_cfg_resp *VAR_2,
    u16 VAR_3, u16 *VAR_4, u16 *VAR_5,
    struct ice_sq_cd *VAR_6)
{
 struct ice_aqc_get_sw_cfg *VAR_7;
 enum ice_status VAR_8;
 struct ice_aq_desc VAR_9;

 FUNC_2(&VAR_9, VAR_0);
 VAR_7 = &VAR_9.params.get_sw_conf;
 VAR_7->element = FUNC_0(*VAR_4);

 VAR_8 = FUNC_1(VAR_1, &VAR_9, VAR_2, VAR_3, VAR_6);
 if (!VAR_8) {
  *VAR_4 = FUNC_3(VAR_7->element);
  *VAR_5 = FUNC_3(VAR_7->num_elems);
 }

 return VAR_8;
}
