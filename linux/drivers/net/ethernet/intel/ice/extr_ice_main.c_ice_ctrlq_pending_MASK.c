
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {int head_mask; scalar_t__ next_to_clean; int head; } ;
struct ice_ctl_q_info {TYPE_1__ rq; } ;


 int FUNC_0 (struct ice_hw*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ice_hw *VAR_0, struct ice_ctl_q_info *VAR_1)
{
 u16 VAR_2;

 VAR_2 = (u16)(FUNC_0(VAR_0, VAR_1->rq.head) & VAR_1->rq.head_mask);
 return VAR_1->rq.next_to_clean != VAR_2;
}
