
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tiqn {scalar_t__ tiqn_state; int tiqn_state_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iscsi_tiqn *VAR_2)
{
 FUNC_0(&VAR_2->tiqn_state_lock);
 if (VAR_2->tiqn_state == VAR_0) {
  VAR_2->tiqn_state = VAR_1;
  FUNC_1(&VAR_2->tiqn_state_lock);
  return 0;
 }
 FUNC_1(&VAR_2->tiqn_state_lock);

 return -1;
}
