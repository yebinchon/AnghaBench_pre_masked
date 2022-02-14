
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_pkg_info_resp {int dummy; } ;
struct ice_aq_desc {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_get_pkg_info_resp*,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_1,
    struct ice_aqc_get_pkg_info_resp *VAR_2,
    u16 VAR_3, struct ice_sq_cd *VAR_4)
{
 struct ice_aq_desc VAR_5;

 FUNC_1(&VAR_5, VAR_0);

 return FUNC_0(VAR_1, &VAR_5, VAR_2, VAR_3, VAR_4);
}
