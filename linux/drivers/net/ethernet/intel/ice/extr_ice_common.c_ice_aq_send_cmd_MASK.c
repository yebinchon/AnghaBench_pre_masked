
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int adminq; } ;
struct ice_aqc_req_res {int res_id; } ;
struct TYPE_2__ {struct ice_aqc_req_res res_owner; } ;
struct ice_aq_desc {int opcode; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,int *,struct ice_aq_desc*,void*,int ,struct ice_sq_cd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

enum ice_status
FUNC_4(struct ice_hw *VAR_2, struct ice_aq_desc *VAR_3, void *VAR_4,
  u16 VAR_5, struct ice_sq_cd *VAR_6)
{
 struct ice_aqc_req_res *VAR_7 = &VAR_3->params.res_owner;
 bool VAR_8 = 0;
 enum ice_status VAR_9;
 switch (FUNC_1(VAR_3->opcode)) {
 case 131:
 case 130:
 case 129:
  break;
 case 128:
  if (FUNC_1(VAR_7->res_id) == VAR_0)
   break;

 default:
  FUNC_2(&VAR_1);
  VAR_8 = 1;
  break;
 }

 VAR_9 = FUNC_0(VAR_2, &VAR_2->adminq, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  FUNC_3(&VAR_1);

 return VAR_9;
}
