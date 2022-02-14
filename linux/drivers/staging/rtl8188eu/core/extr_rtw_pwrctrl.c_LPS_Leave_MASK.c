
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ pwr_mode; int bpower_saving; scalar_t__ bLeisurePs; } ;
struct adapter {struct pwrctrl_priv pwrctrlpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct adapter*,scalar_t__,int ,int ) ;

void FUNC_2(struct adapter *VAR_2)
{
 struct pwrctrl_priv *VAR_3 = &VAR_2->pwrctrlpriv;

 if (VAR_3->bLeisurePs) {
  if (VAR_3->pwr_mode != VAR_1) {
   FUNC_1(VAR_2, VAR_1, 0, 0);

   if (VAR_3->pwr_mode == VAR_1)
    FUNC_0(VAR_2, VAR_0);
  }
 }

 VAR_3->bpower_saving = 0;
}
