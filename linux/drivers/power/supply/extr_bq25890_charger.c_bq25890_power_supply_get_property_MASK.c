
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; char* strval; } ;
struct power_supply {int dummy; } ;
struct bq25890_state {int online; int chrg_fault; int bat_fault; int boost_fault; int chrg_status; } ;
struct TYPE_2__ {int iterm; int vreg; int ichg; } ;
struct bq25890_device {TYPE_1__ init_data; int chip_id; int lock; struct bq25890_state state; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 char* VAR_1 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct bq25890_device*,int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct bq25890_device* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_27,
          enum power_supply_property VAR_28,
          union power_supply_propval *VAR_29)
{
 int VAR_30;
 struct bq25890_device *VAR_31 = FUNC_4(VAR_27);
 struct bq25890_state VAR_32;

 FUNC_2(&VAR_31->lock);
 VAR_32 = VAR_31->state;
 FUNC_3(&VAR_31->lock);

 switch (VAR_28) {
 case 129:
  if (!VAR_32.online)
   VAR_29->intval = VAR_16;
  else if (VAR_32.chrg_status == VAR_21)
   VAR_29->intval = VAR_18;
  else if (VAR_32.chrg_status == VAR_22 ||
    VAR_32.chrg_status == VAR_20)
   VAR_29->intval = VAR_15;
  else if (VAR_32.chrg_status == VAR_23)
   VAR_29->intval = VAR_17;
  else
   VAR_29->intval = VAR_19;

  break;

 case 132:
  VAR_29->strval = VAR_1;
  break;

 case 131:
  if (VAR_31->chip_id == VAR_0)
   VAR_29->strval = "BQ25890";
  else if (VAR_31->chip_id == VAR_2)
   VAR_29->strval = "BQ25895";
  else if (VAR_31->chip_id == VAR_3)
   VAR_29->strval = "BQ25896";
  else
   VAR_29->strval = "UNKNOWN";

  break;

 case 130:
  VAR_29->intval = VAR_32.online;
  break;

 case 133:
  if (!VAR_32.chrg_fault && !VAR_32.bat_fault && !VAR_32.boost_fault)
   VAR_29->intval = VAR_10;
  else if (VAR_32.bat_fault)
   VAR_29->intval = VAR_12;
  else if (VAR_32.chrg_fault == VAR_5)
   VAR_29->intval = VAR_13;
  else if (VAR_32.chrg_fault == VAR_4)
   VAR_29->intval = VAR_11;
  else
   VAR_29->intval = VAR_14;
  break;

 case 137:
  VAR_30 = FUNC_0(VAR_31, VAR_8);
  if (VAR_30 < 0)
   return VAR_30;


  VAR_29->intval = VAR_30 * 50000;
  break;

 case 136:
  VAR_29->intval = FUNC_1(VAR_31->init_data.ichg, VAR_24);
  break;

 case 135:
  if (!VAR_32.online) {
   VAR_29->intval = 0;
   break;
  }

  VAR_30 = FUNC_0(VAR_31, VAR_7);
  if (VAR_30 < 0)
   return VAR_30;


  VAR_29->intval = 2304000 + VAR_30 * 20000;
  break;

 case 134:
  VAR_29->intval = FUNC_1(VAR_31->init_data.vreg, VAR_26);
  break;

 case 138:
  VAR_29->intval = FUNC_1(VAR_31->init_data.iterm, VAR_25);
  break;

 case 128:
  VAR_30 = FUNC_0(VAR_31, VAR_9);
  if (VAR_30 < 0)
   return VAR_30;


  VAR_29->intval = 2304000 + VAR_30 * 20000;
  break;

 default:
  return -VAR_6;
 }

 return 0;
}
