
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_4__ {scalar_t__ sq_last_status; } ;
struct ice_hw {TYPE_2__ adminq; } ;
struct ice_aqc_req_res {void* timeout; int status; void* res_number; void* access_type; void* res_id; } ;
struct TYPE_3__ {struct ice_aqc_req_res res_owner; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_ids { ____Placeholder_ice_aq_res_ids } ice_aq_res_ids ;
typedef enum ice_aq_res_access_type { ____Placeholder_ice_aq_res_access_type } ice_aq_res_access_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_7 ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static enum ice_status
FUNC_6(struct ice_hw *VAR_8, enum ice_aq_res_ids VAR_9,
        enum ice_aq_res_access_type VAR_10, u8 VAR_11, u32 *VAR_12,
        struct ice_sq_cd *VAR_13)
{
 struct ice_aqc_req_res *VAR_14;
 struct ice_aq_desc VAR_15;
 enum ice_status VAR_16;

 VAR_14 = &VAR_15.params.res_owner;

 FUNC_3(&VAR_15, VAR_7);

 VAR_14->res_id = FUNC_0(VAR_9);
 VAR_14->access_type = FUNC_0(VAR_10);
 VAR_14->res_number = FUNC_1(VAR_11);
 VAR_14->timeout = FUNC_1(*VAR_12);
 *VAR_12 = 0;

 VAR_16 = FUNC_2(VAR_8, &VAR_15, ((void*)0), 0, VAR_13);
 if (VAR_9 == VAR_6) {
  if (FUNC_4(VAR_14->status) == VAR_3) {
   *VAR_12 = FUNC_5(VAR_14->timeout);
   return 0;
  } else if (FUNC_4(VAR_14->status) ==
      VAR_2) {
   *VAR_12 = FUNC_5(VAR_14->timeout);
   return VAR_4;
  } else if (FUNC_4(VAR_14->status) ==
      VAR_1) {
   return VAR_5;
  }


  *VAR_12 = 0;
  return VAR_4;
 }





 if (!VAR_16 || VAR_8->adminq.sq_last_status == VAR_0)
  *VAR_12 = FUNC_5(VAR_14->timeout);

 return VAR_16;
}
