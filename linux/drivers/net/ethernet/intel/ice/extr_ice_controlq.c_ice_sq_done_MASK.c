
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ next_to_use; int head; } ;
struct ice_ctl_q_info {TYPE_1__ sq; } ;


 scalar_t__ FUNC_0 (struct ice_hw*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ice_hw *VAR_0, struct ice_ctl_q_info *VAR_1)
{



 return FUNC_0(VAR_0, VAR_1->sq.head) == VAR_1->sq.next_to_use;
}
