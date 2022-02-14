
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {int tog; int rpwm_check_timer; int rpwm_workitem; int SetPSModeWorkItem; scalar_t__ smart_ps; int pwr_mode; int cpwm; int mutex_lock; } ;
struct _adapter {struct pwrctrl_priv pwrctrlpriv; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct _adapter*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(struct _adapter *VAR_5)
{
 struct pwrctrl_priv *VAR_6 = &VAR_5->pwrctrlpriv;

 FUNC_1((unsigned char *)VAR_6, 0, sizeof(struct pwrctrl_priv));
 FUNC_2(&VAR_6->mutex_lock);
 VAR_6->cpwm = VAR_1;
 VAR_6->pwr_mode = VAR_0;
 VAR_6->smart_ps = 0;
 VAR_6->tog = 0x80;

 FUNC_3(VAR_5, 0x1025FE58, 0);
 FUNC_0(&VAR_6->SetPSModeWorkItem, VAR_2);
 FUNC_0(&VAR_6->rpwm_workitem, VAR_4);
 FUNC_4(&VAR_6->rpwm_check_timer, VAR_3, 0);
}
