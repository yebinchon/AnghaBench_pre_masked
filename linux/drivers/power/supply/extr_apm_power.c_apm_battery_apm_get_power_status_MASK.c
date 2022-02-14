
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {scalar_t__ intval; } ;
struct apm_power_info {int battery_life; int time; int units; int battery_status; int battery_flag; int ac_line_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,union power_supply_propval*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_21 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct apm_power_info *VAR_22)
{
 union power_supply_propval VAR_23;
 union power_supply_propval VAR_24, VAR_25, VAR_26;

 FUNC_4(&VAR_20);
 FUNC_3();
 if (!VAR_21) {
  FUNC_5(&VAR_20);
  return;
 }



 if (FUNC_0(VAR_15, &VAR_23))
  VAR_23.intval = VAR_11;



 if ((VAR_23.intval == VAR_8) ||
     (VAR_23.intval == VAR_10) ||
     (VAR_23.intval == VAR_9))
  VAR_22->ac_line_status = VAR_1;
 else
  VAR_22->ac_line_status = VAR_0;



 if (FUNC_0(VAR_7, &VAR_24) == 0) {
  VAR_22->battery_life = VAR_24.intval;
 } else {

  VAR_22->battery_life = FUNC_1(VAR_13);

  if (VAR_22->battery_life == -1)
   VAR_22->battery_life = FUNC_1(VAR_12);
  if (VAR_22->battery_life == -1)
   VAR_22->battery_life = FUNC_1(VAR_14);
 }



 if (VAR_23.intval == VAR_8) {
  VAR_22->battery_status = VAR_2;
 } else {
  if (VAR_22->battery_life > 50)
   VAR_22->battery_status = VAR_4;
  else if (VAR_22->battery_life > 5)
   VAR_22->battery_status = VAR_5;
  else
   VAR_22->battery_status = VAR_3;
 }
 VAR_22->battery_flag = VAR_22->battery_status;



 VAR_22->units = VAR_6;

 if (VAR_23.intval == VAR_8) {
  if (!FUNC_0(VAR_18, &VAR_25) ||
    !FUNC_0(VAR_19, &VAR_25))
   VAR_22->time = VAR_25.intval / 60;
  else
   VAR_22->time = FUNC_2(VAR_23.intval);
 } else {
  if (!FUNC_0(VAR_16, &VAR_26) ||
         !FUNC_0(VAR_17, &VAR_26))
   VAR_22->time = VAR_26.intval / 60;
  else
   VAR_22->time = FUNC_2(VAR_23.intval);
 }

 FUNC_5(&VAR_20);
}
