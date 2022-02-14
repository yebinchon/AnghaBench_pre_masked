
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ cpwm; scalar_t__ pwr_mode; scalar_t__ alives; int mutex_lock; } ;
struct _adapter {int mlmepriv; struct pwrctrl_priv pwrctrlpriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct _adapter*,int ) ;
 int FUNC_4 (struct pwrctrl_priv*,int ) ;

void FUNC_5(struct _adapter *VAR_5)
{
 struct pwrctrl_priv *VAR_6 = &VAR_5->pwrctrlpriv;

 FUNC_1(&VAR_6->mutex_lock);
 FUNC_4(VAR_6, VAR_0);
 if ((VAR_6->cpwm > VAR_3) &&
    (VAR_6->pwr_mode > VAR_1)) {
  if ((VAR_6->alives == 0) &&
      (FUNC_0(&VAR_5->mlmepriv,
       VAR_4) != 1)) {
   FUNC_3(VAR_5, VAR_2);
  }
 }
 FUNC_2(&VAR_6->mutex_lock);
}
