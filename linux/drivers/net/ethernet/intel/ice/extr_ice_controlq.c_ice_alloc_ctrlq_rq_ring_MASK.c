
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_4__ {size_t size; int va; int pa; } ;
struct TYPE_3__ {TYPE_2__ desc_buf; } ;
struct ice_ctl_q_info {int num_rq_entries; TYPE_1__ rq; } ;
struct ice_aq_desc {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t,int *,int) ;
 int FUNC_1 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_3, struct ice_ctl_q_info *VAR_4)
{
 size_t VAR_5 = VAR_4->num_rq_entries * sizeof(struct ice_aq_desc);

 VAR_4->rq.desc_buf.va = FUNC_0(FUNC_1(VAR_3), VAR_5,
       &VAR_4->rq.desc_buf.pa,
       VAR_0 | VAR_2);
 if (!VAR_4->rq.desc_buf.va)
  return VAR_1;
 VAR_4->rq.desc_buf.size = VAR_5;
 return 0;
}
