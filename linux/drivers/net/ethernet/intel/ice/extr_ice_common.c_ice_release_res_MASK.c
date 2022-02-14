
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ sq_cmd_timeout; } ;
struct ice_hw {TYPE_1__ adminq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_ids { ____Placeholder_ice_aq_res_ids } ice_aq_res_ids ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int,int ,int *) ;
 int FUNC_1 (int) ;

void FUNC_2(struct ice_hw *VAR_1, enum ice_aq_res_ids VAR_2)
{
 enum ice_status VAR_3;
 u32 VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0, ((void*)0));




 while ((VAR_3 == VAR_0) &&
        (VAR_4 < VAR_1->adminq.sq_cmd_timeout)) {
  FUNC_1(1);
  VAR_3 = FUNC_0(VAR_1, VAR_2, 0, ((void*)0));
  VAR_4++;
 }
}
