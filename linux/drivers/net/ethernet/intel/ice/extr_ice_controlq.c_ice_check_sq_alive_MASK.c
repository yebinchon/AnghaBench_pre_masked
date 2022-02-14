
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_2__ {int len_mask; int len_ena_mask; scalar_t__ len; } ;
struct ice_ctl_q_info {int num_sq_entries; TYPE_1__ sq; } ;


 int FUNC_0 (struct ice_hw*,scalar_t__) ;

bool FUNC_1(struct ice_hw *VAR_0, struct ice_ctl_q_info *VAR_1)
{

 if (VAR_1->sq.len && VAR_1->sq.len_mask && VAR_1->sq.len_ena_mask)
  return (FUNC_0(VAR_0, VAR_1->sq.len) & (VAR_1->sq.len_mask |
      VAR_1->sq.len_ena_mask)) ==
   (VAR_1->num_sq_entries | VAR_1->sq.len_ena_mask);

 return 0;
}
