
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tiqn {int tiqn_state_lock; int tiqn_access_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iscsi_tiqn *VAR_0)
{
 FUNC_0(&VAR_0->tiqn_state_lock);
 VAR_0->tiqn_access_count--;
 FUNC_1(&VAR_0->tiqn_state_lock);
}
