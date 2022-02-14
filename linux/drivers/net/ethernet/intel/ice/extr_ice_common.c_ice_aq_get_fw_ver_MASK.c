
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_sq_cd {int dummy; } ;
struct ice_hw {int api_patch; int api_min_ver; int api_maj_ver; int api_branch; int fw_build; int fw_patch; int fw_min_ver; int fw_maj_ver; int fw_branch; } ;
struct ice_aqc_get_ver {int api_patch; int api_minor; int api_major; int api_branch; int fw_build; int fw_patch; int fw_minor; int fw_major; int fw_branch; } ;
struct TYPE_2__ {struct ice_aqc_get_ver get_ver; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;
 int FUNC_2 (int ) ;

enum ice_status FUNC_3(struct ice_hw *VAR_1, struct ice_sq_cd *VAR_2)
{
 struct ice_aqc_get_ver *VAR_3;
 struct ice_aq_desc VAR_4;
 enum ice_status VAR_5;

 VAR_3 = &VAR_4.params.get_ver;

 FUNC_1(&VAR_4, VAR_0);

 VAR_5 = FUNC_0(VAR_1, &VAR_4, ((void*)0), 0, VAR_2);

 if (!VAR_5) {
  VAR_1->fw_branch = VAR_3->fw_branch;
  VAR_1->fw_maj_ver = VAR_3->fw_major;
  VAR_1->fw_min_ver = VAR_3->fw_minor;
  VAR_1->fw_patch = VAR_3->fw_patch;
  VAR_1->fw_build = FUNC_2(VAR_3->fw_build);
  VAR_1->api_branch = VAR_3->api_branch;
  VAR_1->api_maj_ver = VAR_3->api_major;
  VAR_1->api_min_ver = VAR_3->api_minor;
  VAR_1->api_patch = VAR_3->api_patch;
 }

 return VAR_5;
}
