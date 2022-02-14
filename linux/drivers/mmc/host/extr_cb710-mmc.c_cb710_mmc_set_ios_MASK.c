
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {scalar_t__ power_mode; scalar_t__ bus_width; int clock; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {scalar_t__ last_power_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct cb710_slot*,int) ;
 int FUNC_1 (struct cb710_slot*,int ,int ) ;
 int FUNC_2 (struct cb710_slot*) ;
 int FUNC_3 (struct cb710_slot*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 struct cb710_slot* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct cb710_slot*) ;
 int FUNC_7 (int ,char*,int) ;
 struct cb710_mmc_reader* FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct cb710_slot *VAR_4 = FUNC_5(VAR_2);
 struct cb710_mmc_reader *VAR_5 = FUNC_8(VAR_2);
 int VAR_6;

 FUNC_4(VAR_2, VAR_3->clock);

 if (VAR_3->power_mode != VAR_5->last_power_mode) {
  switch (VAR_3->power_mode) {
  case 129:
   VAR_6 = FUNC_3(VAR_4);
   if (VAR_6) {
    FUNC_7(FUNC_6(VAR_4),
     "powerup failed (%d)- retrying\n", VAR_6);
    FUNC_2(VAR_4);
    FUNC_9(1);
    VAR_6 = FUNC_3(VAR_4);
    if (VAR_6)
     FUNC_7(FUNC_6(VAR_4),
      "powerup retry failed (%d) - expect errors\n",
     VAR_6);
   }
   VAR_5->last_power_mode = 129;
   break;
  case 130:
   FUNC_2(VAR_4);
   VAR_5->last_power_mode = 130;
   break;
  case 128:
  default:

   break;
  }
 }

 FUNC_0(VAR_4, VAR_3->bus_width != VAR_1);

 FUNC_1(VAR_4, VAR_0, 0);
}
