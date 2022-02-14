
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intval; } ;
struct find_bat_param {int max_energy; int max_charge; int * bat; int * max_energy_bat; int * max_charge_bat; TYPE_1__ full; int * main; } ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,struct find_bat_param*,int ) ;
 int * VAR_2 ;
 int FUNC_2 (struct find_bat_param*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct find_bat_param VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(struct find_bat_param));
 VAR_2 = ((void*)0);
 VAR_4.main = VAR_2;

 VAR_5 = FUNC_1(VAR_3, ((void*)0), &VAR_4,
          VAR_1);
 if (VAR_5) {
  VAR_2 = VAR_4.main;
  return;
 }

 if ((VAR_4.max_energy_bat && VAR_4.max_charge_bat) &&
   (VAR_4.max_energy_bat != VAR_4.max_charge_bat)) {

  if (!FUNC_0(VAR_4.max_charge_bat, VAR_0,
         &VAR_4.full)) {
   if (VAR_4.max_energy > VAR_4.max_charge * VAR_4.full.intval)
    VAR_2 = VAR_4.max_energy_bat;
   else
    VAR_2 = VAR_4.max_charge_bat;
  } else if (!FUNC_0(VAR_4.max_energy_bat, VAR_0,
          &VAR_4.full)) {
   if (VAR_4.max_charge > VAR_4.max_energy / VAR_4.full.intval)
    VAR_2 = VAR_4.max_charge_bat;
   else
    VAR_2 = VAR_4.max_energy_bat;
  } else {

   VAR_2 = VAR_4.max_energy_bat;
  }
 } else if (VAR_4.max_charge_bat) {
  VAR_2 = VAR_4.max_charge_bat;
 } else if (VAR_4.max_energy_bat) {
  VAR_2 = VAR_4.max_energy_bat;
 } else {

  VAR_2 = VAR_4.bat;
 }
}
