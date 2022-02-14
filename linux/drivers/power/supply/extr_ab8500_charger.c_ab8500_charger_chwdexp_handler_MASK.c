
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psy; } ;
struct TYPE_8__ {int wd_expired; scalar_t__ charger_online; } ;
struct TYPE_7__ {int psy; } ;
struct TYPE_6__ {int wd_expired; scalar_t__ charger_online; } ;
struct ab8500_charger {TYPE_1__ usb_chg; TYPE_4__ usb; TYPE_3__ ac_chg; TYPE_2__ ac; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ab8500_charger*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ab8500_charger *VAR_3 = VAR_2;

 FUNC_1(VAR_3->dev, "Charger watchdog expired\n");





 if (VAR_3->ac.charger_online) {
  VAR_3->ac.wd_expired = 1;
  FUNC_0(VAR_3, VAR_3->ac_chg.psy);
 }
 if (VAR_3->usb.charger_online) {
  VAR_3->usb.wd_expired = 1;
  FUNC_0(VAR_3, VAR_3->usb_chg.psy);
 }

 return VAR_0;
}
