
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {scalar_t__ port_info; int mailboxq; } ;
struct ice_pf {int num_alloc_vfs; int state; int * vf; struct ice_hw hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ice_hw*,int *) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (struct ice_pf*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_pf*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct ice_pf *VAR_1)
{
 struct ice_hw *VAR_2 = &VAR_1->hw;
 int VAR_3;


 if (FUNC_8(VAR_0, VAR_1->state))
  return;


 if (FUNC_0(VAR_2, &VAR_2->mailboxq))
  FUNC_6(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_1->num_alloc_vfs; VAR_3++)
  FUNC_4(&VAR_1->vf[VAR_3]);


 FUNC_1(VAR_2);

 FUNC_2(VAR_1, 0);

 if (VAR_2->port_info)
  FUNC_3(VAR_2->port_info);

 FUNC_5(VAR_2);

 FUNC_7(VAR_0, VAR_1->state);
}
