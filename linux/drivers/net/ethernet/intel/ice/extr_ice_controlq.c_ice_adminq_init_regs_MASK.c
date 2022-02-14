
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ctl_q_info {int dummy; } ;
struct ice_hw {struct ice_ctl_q_info adminq; } ;


 int FUNC_0 (struct ice_ctl_q_info*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ice_hw *VAR_1)
{
 struct ice_ctl_q_info *VAR_2 = &VAR_1->adminq;

 FUNC_0(VAR_2, VAR_0);
}
