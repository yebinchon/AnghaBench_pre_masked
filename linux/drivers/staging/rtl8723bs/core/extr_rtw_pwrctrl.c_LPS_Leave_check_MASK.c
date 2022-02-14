
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {scalar_t__ pwr_mode; int lock; } ;
struct adapter {int hw_init_completed; scalar_t__ bSurpriseRemoved; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 () ;
 unsigned long VAR_1 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(
 struct adapter *VAR_2)
{
 struct pwrctrl_priv *VAR_3;
 unsigned long VAR_4;
 u8 VAR_5;

 VAR_3 = FUNC_1(VAR_2);

 VAR_5 = 0;
 VAR_4 = VAR_1;

 FUNC_2();

 while (1) {
  FUNC_5(&VAR_3->lock);

  if (VAR_2->bSurpriseRemoved
   || !(VAR_2->hw_init_completed)
   || (VAR_3->pwr_mode == VAR_0))
   VAR_5 = 1;

  FUNC_6(&VAR_3->lock);

  if (VAR_5)
   break;

  if (FUNC_3(VAR_1 - VAR_4) > 100) {
   FUNC_0("Wait for cpwm event  than 100 ms!!!\n");
   break;
  }
  FUNC_4(1);
 }
}
