
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
struct LED_871x {int BlinkWorkItem; struct adapter* padapter; } ;


 int VAR_0 ;
 struct LED_871x* FUNC_0 (int ,struct timer_list*,int ) ;
 struct LED_871x* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct LED_871x *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct adapter *VAR_4 = VAR_3->padapter;

 if (VAR_4->bSurpriseRemoved || VAR_4->bDriverStopped)
  return;

 FUNC_1(&VAR_3->BlinkWorkItem);
}
