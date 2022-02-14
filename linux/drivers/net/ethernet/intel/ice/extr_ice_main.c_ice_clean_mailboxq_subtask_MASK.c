
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int mailboxq; } ;
struct ice_pf {int state; struct ice_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ice_pf*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ice_hw*,int *) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ice_pf *VAR_2)
{
 struct ice_hw *VAR_3 = &VAR_2->hw;

 if (!FUNC_4(VAR_1, VAR_2->state))
  return;

 if (FUNC_0(VAR_2, VAR_0))
  return;

 FUNC_1(VAR_1, VAR_2->state);

 if (FUNC_2(VAR_3, &VAR_3->mailboxq))
  FUNC_0(VAR_2, VAR_0);

 FUNC_3(VAR_3);
}
