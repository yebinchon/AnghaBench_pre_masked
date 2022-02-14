
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int safety_timer_expired; } ;
struct TYPE_5__ {int charger_type; } ;
struct abx500_chargalg {int safety_timer; TYPE_1__ events; int dev; TYPE_3__* bm; TYPE_2__ chg_info; } ;
struct TYPE_6__ {int main_safety_tmr_h; int usb_safety_tmr_h; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct abx500_chargalg *VAR_3)
{

 int VAR_4 = 0;

 switch (VAR_3->chg_info.charger_type) {
 case 129:
  VAR_4 = VAR_3->bm->main_safety_tmr_h;
  break;

 case 128:
  VAR_4 = VAR_3->bm->usb_safety_tmr_h;
  break;

 default:
  FUNC_0(VAR_3->dev, "Unknown charger to charge from\n");
  break;
 }

 VAR_3->events.safety_timer_expired = 0;
 FUNC_1(&VAR_3->safety_timer,
  FUNC_3(VAR_4 * VAR_2, 0),
  FUNC_3(VAR_0, 0));
 FUNC_2(&VAR_3->safety_timer, VAR_1);
}
