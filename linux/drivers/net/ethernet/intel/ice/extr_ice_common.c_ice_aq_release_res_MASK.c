
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_req_res {int res_number; int res_id; } ;
struct TYPE_2__ {struct ice_aqc_req_res res_owner; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_ids { ____Placeholder_ice_aq_res_ids } ice_aq_res_ids ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_1, enum ice_aq_res_ids VAR_2, u8 VAR_3,
     struct ice_sq_cd *VAR_4)
{
 struct ice_aqc_req_res *VAR_5;
 struct ice_aq_desc VAR_6;

 VAR_5 = &VAR_6.params.res_owner;

 FUNC_3(&VAR_6, VAR_0);

 VAR_5->res_id = FUNC_0(VAR_2);
 VAR_5->res_number = FUNC_1(VAR_3);

 return FUNC_2(VAR_1, &VAR_6, ((void*)0), 0, VAR_4);
}
