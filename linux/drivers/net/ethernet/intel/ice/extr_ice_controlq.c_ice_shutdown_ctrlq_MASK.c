
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ctl_q_info {int dummy; } ;
struct ice_hw {struct ice_ctl_q_info mailboxq; struct ice_ctl_q_info adminq; } ;
typedef enum ice_ctl_q { ____Placeholder_ice_ctl_q } ice_ctl_q ;




 int FUNC_0 (struct ice_hw*,int) ;
 int FUNC_1 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_2 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_3 (struct ice_hw*,struct ice_ctl_q_info*) ;

__attribute__((used)) static void FUNC_4(struct ice_hw *VAR_0, enum ice_ctl_q VAR_1)
{
 struct ice_ctl_q_info *VAR_2;

 switch (VAR_1) {
 case 129:
  VAR_2 = &VAR_0->adminq;
  if (FUNC_1(VAR_0, VAR_2))
   FUNC_0(VAR_0, 1);
  break;
 case 128:
  VAR_2 = &VAR_0->mailboxq;
  break;
 default:
  return;
 }

 FUNC_3(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_2);
}
