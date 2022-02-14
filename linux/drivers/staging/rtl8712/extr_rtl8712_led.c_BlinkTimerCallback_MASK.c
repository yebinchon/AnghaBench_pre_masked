
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct LED_871x {int BlinkWorkItem; TYPE_1__* padapter; } ;
struct TYPE_2__ {scalar_t__ driver_stopped; scalar_t__ surprise_removed; } ;


 int VAR_0 ;
 struct LED_871x* FUNC_0 (int ,struct timer_list*,int ) ;
 struct LED_871x* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct LED_871x *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);




 if (VAR_3->padapter->surprise_removed || VAR_3->padapter->driver_stopped)
  return;
 FUNC_1(&VAR_3->BlinkWorkItem);
}
