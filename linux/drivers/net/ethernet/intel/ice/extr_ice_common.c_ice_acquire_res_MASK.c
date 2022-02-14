
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_ids { ____Placeholder_ice_aq_res_ids } ice_aq_res_ids ;
typedef enum ice_aq_res_access_type { ____Placeholder_ice_aq_res_access_type } ice_aq_res_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_hw*,int,int,int ,scalar_t__*,int *) ;
 int FUNC_1 (struct ice_hw*,int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;

enum ice_status
FUNC_3(struct ice_hw *VAR_4, enum ice_aq_res_ids VAR_5,
  enum ice_aq_res_access_type VAR_6, u32 VAR_7)
{

 u32 VAR_8 = 10;
 u32 VAR_9 = VAR_7;
 enum ice_status VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, 0, &VAR_9, ((void*)0));






 if (VAR_10 == VAR_1)
  goto ice_acquire_res_exit;

 if (VAR_10)
  FUNC_1(VAR_4, VAR_0,
     "resource %d acquire type %d failed.\n", VAR_5, VAR_6);


 VAR_7 = VAR_9;
 while (VAR_10 && VAR_7 && VAR_9) {
  FUNC_2(VAR_8);
  VAR_7 = (VAR_7 > VAR_8) ? VAR_7 - VAR_8 : 0;
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, 0, &VAR_9, ((void*)0));

  if (VAR_10 == VAR_1)

   break;

  if (!VAR_10)

   break;
 }
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_1(VAR_4, VAR_0, "resource acquire timed out.\n");

ice_acquire_res_exit:
 if (VAR_10 == VAR_1) {
  if (VAR_6 == VAR_3)
   FUNC_1(VAR_4, VAR_0,
      "resource indicates no work to do.\n");
  else
   FUNC_1(VAR_4, VAR_0,
      "Warning: ICE_ERR_AQ_NO_WORK not expected\n");
 }
 return VAR_10;
}
