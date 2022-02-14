
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_power_info {int bat_online; int ac_online; int topoff_threshold; int fast_charge; int gpm; scalar_t__ batt_detect; scalar_t__ usb_online; int no_temp_support; int no_insert_detect; } ;
struct max8925_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct max8925_power_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct max8925_chip *VAR_16,
       struct max8925_power_info *VAR_17)
{
 int VAR_18;

 FUNC_0(VAR_5, "ac-ovp");
 if (!VAR_17->no_insert_detect) {
  FUNC_0(VAR_4, "ac-remove");
  FUNC_0(VAR_6, "ac-insert");
 }
 if (!VAR_17->no_temp_support) {
  FUNC_0(VAR_12, "batt-temp-in-range");
  FUNC_0(VAR_11, "batt-temp-out-range");
 }
 FUNC_0(VAR_9, "vsys-high");
 FUNC_0(VAR_10, "vsys-low");
 FUNC_0(VAR_8, "charger-reset");
 FUNC_0(VAR_7, "charger-done");
 FUNC_0(VAR_14, "charger-topoff");
 FUNC_0(VAR_13, "charger-timer-expire");

 VAR_17->usb_online = 0;
 VAR_17->bat_online = 0;


 if (FUNC_3(VAR_17, VAR_15) * 2000 > 500000)
  VAR_17->ac_online = 1;
 else
  VAR_17->ac_online = 0;

 VAR_18 = FUNC_1(VAR_17->gpm, VAR_3);
 if (VAR_18 >= 0) {






  if (VAR_17->batt_detect)
   VAR_17->bat_online = (VAR_18 & VAR_2) ? 0 : 1;
  else
   VAR_17->bat_online = 1;
  if (VAR_18 & VAR_0)
   VAR_17->ac_online = 1;
  else
   VAR_17->ac_online = 0;
 }

 FUNC_2(VAR_17->gpm, VAR_1, 1 << 7, 1 << 7);

 FUNC_2(VAR_17->gpm, VAR_1, 3 << 5,
    VAR_17->topoff_threshold << 5);

 FUNC_2(VAR_17->gpm, VAR_1, 7, VAR_17->fast_charge);

 return 0;
}
