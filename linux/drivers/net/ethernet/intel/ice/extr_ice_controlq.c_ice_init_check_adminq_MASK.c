
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ctl_q_info {int dummy; } ;
struct ice_hw {struct ice_ctl_q_info adminq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int *) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_3 (struct ice_hw*,struct ice_ctl_q_info*) ;

__attribute__((used)) static enum ice_status FUNC_4(struct ice_hw *VAR_1)
{
 struct ice_ctl_q_info *VAR_2 = &VAR_1->adminq;
 enum ice_status VAR_3;

 VAR_3 = FUNC_0(VAR_1, ((void*)0));
 if (VAR_3)
  goto init_ctrlq_free_rq;

 if (!FUNC_1(VAR_1)) {
  VAR_3 = VAR_0;
  goto init_ctrlq_free_rq;
 }

 return 0;

init_ctrlq_free_rq:
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 return VAR_3;
}
