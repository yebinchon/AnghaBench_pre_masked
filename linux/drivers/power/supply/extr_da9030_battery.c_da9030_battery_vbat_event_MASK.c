
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vbat_low; scalar_t__ vbat_crit; } ;
struct TYPE_4__ {scalar_t__ vbat_res; } ;
struct da9030_charger {int (* battery_critical ) () ;TYPE_1__ thresholds; TYPE_2__ adc; int (* battery_low ) () ;int master; scalar_t__ is_on; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9030_charger*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct da9030_charger *VAR_1)
{
 FUNC_0(VAR_1, &VAR_1->adc);

 if (VAR_1->is_on)
  return;

 if (VAR_1->adc.vbat_res < VAR_1->thresholds.vbat_low) {

  FUNC_1(VAR_1->master, VAR_0,
        VAR_1->thresholds.vbat_crit);
  if (VAR_1->battery_low)
   VAR_1->battery_low();
 } else if (VAR_1->adc.vbat_res <
     VAR_1->thresholds.vbat_crit) {

  if (VAR_1->battery_critical)
   VAR_1->battery_critical();
 }
}
