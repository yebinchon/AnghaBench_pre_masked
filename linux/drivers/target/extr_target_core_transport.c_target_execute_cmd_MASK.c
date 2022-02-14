
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state_lock; int t_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct se_cmd*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct se_cmd*) ;
 scalar_t__ FUNC_4 (struct se_cmd*) ;
 scalar_t__ FUNC_5 (struct se_cmd*) ;

void FUNC_6(struct se_cmd *VAR_3)
{






 if (FUNC_3(VAR_3))
  return;

 FUNC_1(&VAR_3->t_state_lock);
 VAR_3->t_state = VAR_2;
 VAR_3->transport_state |= VAR_0 | VAR_1;
 FUNC_2(&VAR_3->t_state_lock);

 if (FUNC_5(VAR_3))
  return;

 if (FUNC_4(VAR_3)) {
  FUNC_1(&VAR_3->t_state_lock);
  VAR_3->transport_state &= ~VAR_1;
  FUNC_2(&VAR_3->t_state_lock);
  return;
 }

 FUNC_0(VAR_3, 1);
}
