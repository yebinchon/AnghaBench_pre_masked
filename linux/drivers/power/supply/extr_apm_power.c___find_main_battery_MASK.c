
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ intval; } ;
struct find_bat_param {scalar_t__ max_charge; scalar_t__ max_energy; TYPE_4__ full; TYPE_2__* bat; TYPE_2__* max_energy_bat; TYPE_2__* max_charge_bat; TYPE_2__* main; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* desc; } ;
struct TYPE_5__ {scalar_t__ use_for_apm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_4__*) ;
 TYPE_2__* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, void *VAR_5)
{
 struct find_bat_param *VAR_6 = (struct find_bat_param *)VAR_5;

 VAR_6->bat = FUNC_1(VAR_4);

 if (VAR_6->bat->desc->use_for_apm) {

  VAR_6->main = VAR_6->bat;
  return 1;
 }

 if (!FUNC_0(VAR_6->bat, VAR_1, &VAR_6->full) ||
   !FUNC_0(VAR_6->bat, VAR_0, &VAR_6->full)) {
  if (VAR_6->full.intval > VAR_6->max_charge) {
   VAR_6->max_charge_bat = VAR_6->bat;
   VAR_6->max_charge = VAR_6->full.intval;
  }
 } else if (!FUNC_0(VAR_6->bat, VAR_3, &VAR_6->full) ||
   !FUNC_0(VAR_6->bat, VAR_2, &VAR_6->full)) {
  if (VAR_6->full.intval > VAR_6->max_energy) {
   VAR_6->max_energy_bat = VAR_6->bat;
   VAR_6->max_energy = VAR_6->full.intval;
  }
 }
 return 0;
}
