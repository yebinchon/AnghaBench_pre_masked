
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {int tail; } ;
struct ice_ctl_q_info {int num_rq_entries; TYPE_1__ rq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,TYPE_1__*,int) ;
 int FUNC_1 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_0, struct ice_ctl_q_info *VAR_1)
{
 enum ice_status VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->rq, VAR_1->num_rq_entries);
 if (VAR_2)
  return VAR_2;


 FUNC_1(VAR_0, VAR_1->rq.tail, (u32)(VAR_1->num_rq_entries - 1));

 return 0;
}
