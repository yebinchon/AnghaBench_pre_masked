
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_sched_elem_cmd {int num_elem_resp; int num_elem_req; } ;
struct TYPE_2__ {struct ice_aqc_sched_elem_cmd sched_elem_cmd; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,void*,int ,struct ice_sq_cd*) ;
 int FUNC_2 (struct ice_aq_desc*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_1, enum ice_adminq_opc VAR_2,
       u16 VAR_3, void *VAR_4, u16 VAR_5,
       u16 *VAR_6, struct ice_sq_cd *VAR_7)
{
 struct ice_aqc_sched_elem_cmd *VAR_8;
 struct ice_aq_desc VAR_9;
 enum ice_status VAR_10;

 VAR_8 = &VAR_9.params.sched_elem_cmd;
 FUNC_2(&VAR_9, VAR_2);
 VAR_8->num_elem_req = FUNC_0(VAR_3);
 VAR_9.flags |= FUNC_0(VAR_0);
 VAR_10 = FUNC_1(VAR_1, &VAR_9, VAR_4, VAR_5, VAR_7);
 if (!VAR_10 && VAR_6)
  *VAR_6 = FUNC_3(VAR_8->num_elem_resp);

 return VAR_10;
}
