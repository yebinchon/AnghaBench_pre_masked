
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct max17211_device_info {int SerialNumber; int regmap; int ManufacturerName; int DeviceName; scalar_t__ rsense; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
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
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 struct max17211_device_info* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_15,
 enum power_supply_property VAR_16,
 union power_supply_propval *VAR_17)
{
 struct max17211_device_info *VAR_18 = FUNC_7(VAR_15);
 unsigned int VAR_19 = 0;
 int VAR_20 = 0;

 switch (VAR_16) {
 case 133:





  VAR_17->intval =
   FUNC_6(VAR_18->regmap, VAR_11,
   &VAR_19) ? 0 : !(VAR_19 & VAR_4);
  break;
 case 140:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_10, &VAR_19);
  VAR_17->intval = FUNC_2(VAR_19);
  break;
 case 128:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_6, &VAR_19);
  VAR_17->intval = FUNC_5(VAR_19);
  break;
 case 138:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_8, &VAR_19);
  VAR_17->intval = FUNC_0(VAR_19);
  break;
 case 139:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_9, &VAR_19);
  VAR_17->intval = FUNC_0(VAR_19);
  break;
 case 130:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_13, &VAR_19);
  VAR_17->intval = FUNC_4(VAR_19);
  break;
 case 129:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_14, &VAR_19);
  VAR_17->intval = FUNC_4(VAR_19);
  break;
 case 131:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_12, &VAR_19);
  VAR_17->intval = FUNC_3(VAR_19);
  break;

 case 136:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_7, &VAR_19);
  VAR_17->intval =
   FUNC_1(VAR_19) / (int)VAR_18->rsense;
  break;
 case 137:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_5, &VAR_19);
  VAR_17->intval =
   FUNC_1(VAR_19) / (int)VAR_18->rsense;
  break;




 case 134:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_1, &VAR_19);
  VAR_17->strval = VAR_18->DeviceName;
  break;
 case 135:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_2, &VAR_19);
  VAR_17->strval = VAR_18->ManufacturerName;
  break;
 case 132:
  VAR_20 = FUNC_6(VAR_18->regmap, VAR_3, &VAR_19);
  VAR_17->strval = VAR_18->SerialNumber;
  break;
 default:
  VAR_20 = -VAR_0;
 }

 return VAR_20;
}
