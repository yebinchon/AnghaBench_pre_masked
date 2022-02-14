
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct sbs_info {scalar_t__ poll_time; scalar_t__ last_state; int power_supply; int work; } ;
struct i2c_client {int dummy; } ;
typedef int s32 ;
typedef int s16 ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {scalar_t__ min_value; int max_value; int addr; } ;


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
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;
 struct sbs_info* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_15 ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_16,
 int VAR_17, enum power_supply_property VAR_18,
 union power_supply_propval *VAR_19)
{
 struct sbs_info *VAR_20 = FUNC_1(VAR_16);
 s32 VAR_21;

 VAR_21 = FUNC_4(VAR_16, VAR_15[VAR_17].addr);
 if (VAR_21 < 0)
  return VAR_21;


 if (VAR_15[VAR_17].min_value < 0)
  VAR_21 = (s16)VAR_21;

 if (VAR_21 >= VAR_15[VAR_17].min_value &&
     VAR_21 <= VAR_15[VAR_17].max_value) {
  VAR_19->intval = VAR_21;
  if (VAR_18 == VAR_9) {
   if (!(VAR_21 & VAR_3))
    VAR_19->intval =
     VAR_7;
   else if (VAR_21 & VAR_1)
    VAR_19->intval =
     VAR_5;
   else if (VAR_21 & VAR_2)
    VAR_19->intval =
     VAR_4;
   else
    VAR_19->intval =
     VAR_6;
   return 0;
  } else if (VAR_18 != VAR_10) {
   return 0;
  }

  if (VAR_21 & VAR_1)
   VAR_19->intval = VAR_13;
  else if (VAR_21 & VAR_0)
   VAR_19->intval = VAR_12;
  else
   VAR_19->intval = VAR_11;

  FUNC_5(VAR_16, &VAR_19->intval);

  if (VAR_20->poll_time == 0)
   VAR_20->last_state = VAR_19->intval;
  else if (VAR_20->last_state != VAR_19->intval) {
   FUNC_0(&VAR_20->work);
   FUNC_3(VAR_20->power_supply);
   VAR_20->poll_time = 0;
  }
 } else {
  if (VAR_18 == VAR_10)
   VAR_19->intval = VAR_14;
  else if (VAR_18 == VAR_8)



   VAR_19->intval = FUNC_2(VAR_21, 100);
  else
   VAR_19->intval = 0;
 }

 return 0;
}
