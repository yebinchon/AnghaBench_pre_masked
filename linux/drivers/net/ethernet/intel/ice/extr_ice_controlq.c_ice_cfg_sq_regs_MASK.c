
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int dummy; } ;
struct ice_ctl_q_info {int num_sq_entries; int sq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,int *,int ) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_hw *VAR_0, struct ice_ctl_q_info *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->sq, VAR_1->num_sq_entries);
}
