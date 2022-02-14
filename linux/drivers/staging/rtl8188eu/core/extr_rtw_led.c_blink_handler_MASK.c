
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
struct LED_871x {struct adapter* padapter; } ;


 int FUNC_0 (struct LED_871x*) ;

void FUNC_1(struct LED_871x *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->padapter;

 if (VAR_1->bSurpriseRemoved || VAR_1->bDriverStopped)
  return;

 FUNC_0(VAR_0);
}
