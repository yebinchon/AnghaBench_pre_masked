
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int mailboxq; int adminq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ice_hw*) ;

void FUNC_2(struct ice_hw *VAR_0)
{

 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->adminq);
 FUNC_0(&VAR_0->mailboxq);
}
