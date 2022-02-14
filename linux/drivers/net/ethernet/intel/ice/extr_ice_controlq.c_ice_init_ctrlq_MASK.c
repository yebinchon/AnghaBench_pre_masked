
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ctl_q_info {int qtype; int sq_cmd_timeout; int sq_buf_size; int rq_buf_size; int num_sq_entries; int num_rq_entries; } ;
struct ice_hw {struct ice_ctl_q_info mailboxq; struct ice_ctl_q_info adminq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_ctl_q { ____Placeholder_ice_ctl_q } ice_ctl_q ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_2 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (struct ice_hw*,struct ice_ctl_q_info*) ;

__attribute__((used)) static enum ice_status FUNC_5(struct ice_hw *VAR_3, enum ice_ctl_q VAR_4)
{
 struct ice_ctl_q_info *VAR_5;
 enum ice_status VAR_6;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_3);
  VAR_5 = &VAR_3->adminq;
  break;
 case 128:
  FUNC_3(VAR_3);
  VAR_5 = &VAR_3->mailboxq;
  break;
 default:
  return VAR_2;
 }
 VAR_5->qtype = VAR_4;


 if (!VAR_5->num_rq_entries || !VAR_5->num_sq_entries ||
     !VAR_5->rq_buf_size || !VAR_5->sq_buf_size) {
  return VAR_1;
 }


 VAR_5->sq_cmd_timeout = VAR_0;


 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6)
  goto init_ctrlq_free_sq;


 return 0;

init_ctrlq_free_sq:
 FUNC_4(VAR_3, VAR_5);
 return VAR_6;
}
