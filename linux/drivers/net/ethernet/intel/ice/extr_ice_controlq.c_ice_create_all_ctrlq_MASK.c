
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int mailboxq; int adminq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (int *) ;

enum ice_status FUNC_2(struct ice_hw *VAR_0)
{
 FUNC_1(&VAR_0->adminq);
 FUNC_1(&VAR_0->mailboxq);

 return FUNC_0(VAR_0);
}
