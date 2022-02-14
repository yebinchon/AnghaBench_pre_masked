
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tiqn {scalar_t__ tiqn_access_count; int tiqn_state_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iscsi_tiqn *VAR_0)
{



 FUNC_1(&VAR_0->tiqn_state_lock);
 while (VAR_0->tiqn_access_count != 0) {
  FUNC_2(&VAR_0->tiqn_state_lock);
  FUNC_0(10);
  FUNC_1(&VAR_0->tiqn_state_lock);
 }
 FUNC_2(&VAR_0->tiqn_state_lock);
}
