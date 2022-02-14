
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct power_supply {int dummy; } ;
struct TYPE_3__ {scalar_t__ charger_connected; } ;
struct TYPE_4__ {scalar_t__ charger_connected; } ;
struct ab8500_charger {int autopower; TYPE_1__ usb; TYPE_2__ ac; scalar_t__ autopower_cfg; } ;


 int FUNC_0 (struct ab8500_charger*,int) ;
 int FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct ab8500_charger *VAR_0,
     struct power_supply *VAR_1)
{
 if (VAR_0->autopower_cfg) {
  if (!VAR_0->usb.charger_connected &&
      !VAR_0->ac.charger_connected &&
      VAR_0->autopower) {
   VAR_0->autopower = 0;
   FUNC_0(VAR_0, 0);
  } else if (!VAR_0->autopower &&
      (VAR_0->ac.charger_connected ||
       VAR_0->usb.charger_connected)) {
   VAR_0->autopower = 1;
   FUNC_0(VAR_0, 1);
  }
 }
 FUNC_1(VAR_1);
}
