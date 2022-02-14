
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reportpwrstate_parm {int state; } ;
struct pwrctrl_priv {int cpwm_tog; int cpwm; int alives; int mutex_lock; int rpwm_check_timer; } ;
struct cmd_priv {int cmd_queue_comp; } ;
struct _adapter {struct pwrctrl_priv pwrctrlpriv; struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct _adapter *VAR_2,
   struct reportpwrstate_parm *VAR_3)
{
 struct pwrctrl_priv *VAR_4 = &(VAR_2->pwrctrlpriv);
 struct cmd_priv *VAR_5 = &(VAR_2->cmdpriv);

 if (VAR_4->cpwm_tog == ((VAR_3->state) & 0x80))
  return;
 FUNC_1(&VAR_2->pwrctrlpriv.rpwm_check_timer);
 FUNC_2(&VAR_4->mutex_lock);
 VAR_4->cpwm = (VAR_3->state) & 0xf;
 if (VAR_4->cpwm >= VAR_1) {
  if (VAR_4->alives & VAR_0)
   FUNC_0(&(VAR_5->cmd_queue_comp));
 }
 VAR_4->cpwm_tog = (VAR_3->state) & 0x80;
 FUNC_3(&VAR_4->mutex_lock);
}
