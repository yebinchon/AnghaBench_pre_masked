
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {void* intval; } ;
struct rt9455_info {int * regmap_fields; int regmap; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct rt9455_info *VAR_19,
         union power_supply_propval *VAR_20)
{
 struct device *VAR_21 = &VAR_19->client->dev;
 unsigned int VAR_22;
 int VAR_23;

 VAR_20->intval = VAR_10;

 VAR_23 = FUNC_3(VAR_19->regmap, VAR_16, &VAR_22);
 if (VAR_23) {
  FUNC_1(VAR_21, "Failed to read IRQ1 register\n");
  return VAR_23;
 }

 if (VAR_22 & FUNC_0(VAR_8)) {
  VAR_20->intval = VAR_11;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_9)) {
  VAR_20->intval = VAR_12;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_0)) {
  VAR_20->intval = VAR_14;
  return 0;
 }

 VAR_23 = FUNC_3(VAR_19->regmap, VAR_17, &VAR_22);
 if (VAR_23) {
  FUNC_1(VAR_21, "Failed to read IRQ2 register\n");
  return VAR_23;
 }

 if (VAR_22 & FUNC_0(VAR_6)) {
  VAR_20->intval = VAR_14;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_5)) {
  VAR_20->intval = VAR_13;
  return 0;
 }

 VAR_23 = FUNC_3(VAR_19->regmap, VAR_18, &VAR_22);
 if (VAR_23) {
  FUNC_1(VAR_21, "Failed to read IRQ3 register\n");
  return VAR_23;
 }

 if (VAR_22 & FUNC_0(VAR_2)) {
  VAR_20->intval = VAR_14;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_4)) {
  VAR_20->intval = VAR_12;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_3)) {
  VAR_20->intval = VAR_14;
  return 0;
 }
 if (VAR_22 & FUNC_0(VAR_1)) {
  VAR_20->intval = VAR_13;
  return 0;
 }

 VAR_23 = FUNC_2(VAR_19->regmap_fields[VAR_7], &VAR_22);
 if (VAR_23) {
  FUNC_1(VAR_21, "Failed to read STAT bits\n");
  return VAR_23;
 }

 if (VAR_22 == VAR_15) {
  VAR_20->intval = VAR_14;
  return 0;
 }

 return 0;
}
