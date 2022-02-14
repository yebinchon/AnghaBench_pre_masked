
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ cpwm; int mutex_lock; } ;
struct _adapter {struct pwrctrl_priv pwrctrlpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _adapter*,int ) ;
 int FUNC_3 (struct pwrctrl_priv*,int ) ;

int FUNC_4(struct _adapter *VAR_4)
{
 int VAR_5 = 0;
 struct pwrctrl_priv *VAR_6 = &VAR_4->pwrctrlpriv;

 FUNC_0(&VAR_6->mutex_lock);
 FUNC_3(VAR_6, VAR_0);
 if (VAR_6->cpwm < VAR_2) {
  FUNC_2(VAR_4, VAR_3);
  VAR_5 = -VAR_1;
 }
 FUNC_1(&VAR_6->mutex_lock);
 return VAR_5;
}
