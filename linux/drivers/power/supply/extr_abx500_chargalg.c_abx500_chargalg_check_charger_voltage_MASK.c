
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ usb_volt; int usb_chg_ok; scalar_t__ ac_volt; int ac_chg_ok; } ;
struct abx500_chargalg {TYPE_3__ chg_info; TYPE_2__* bm; } ;
struct TYPE_5__ {TYPE_1__* chg_params; } ;
struct TYPE_4__ {scalar_t__ usb_volt_max; scalar_t__ ac_volt_max; } ;



__attribute__((used)) static void FUNC_0(struct abx500_chargalg *VAR_0)
{
 if (VAR_0->chg_info.usb_volt > VAR_0->bm->chg_params->usb_volt_max)
  VAR_0->chg_info.usb_chg_ok = 0;
 else
  VAR_0->chg_info.usb_chg_ok = 1;

 if (VAR_0->chg_info.ac_volt > VAR_0->bm->chg_params->ac_volt_max)
  VAR_0->chg_info.ac_chg_ok = 0;
 else
  VAR_0->chg_info.ac_chg_ok = 1;

}
