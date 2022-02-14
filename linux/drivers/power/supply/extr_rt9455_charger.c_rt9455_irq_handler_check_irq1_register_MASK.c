
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt9455_info {int batt_presence_work; int max_charging_time_work; int * regmap_fields; int regmap; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int FUNC_0 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct rt9455_info *VAR_12,
        bool *VAR_13,
        bool *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17;
 struct device *VAR_18 = &VAR_12->client->dev;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 int VAR_21;

 VAR_21 = FUNC_5(VAR_12->regmap, VAR_8, &VAR_15);
 if (VAR_21) {
  FUNC_2(VAR_18, "Failed to read IRQ1 register\n");
  return VAR_21;
 }

 VAR_21 = FUNC_5(VAR_12->regmap, VAR_9, &VAR_16);
 if (VAR_21) {
  FUNC_2(VAR_18, "Failed to read MASK1 register\n");
  return VAR_21;
 }

 if (VAR_15 & FUNC_0(VAR_4)) {
  FUNC_2(VAR_18, "Thermal shutdown fault occurred\n");
  VAR_20 = 1;
 }

 if (VAR_15 & FUNC_0(VAR_5)) {
  FUNC_2(VAR_18, "Overvoltage input occurred\n");
  VAR_20 = 1;
 }

 if (VAR_15 & FUNC_0(VAR_0)) {
  FUNC_2(VAR_18, "Battery absence occurred\n");
  VAR_19 = 1;
  VAR_20 = 1;

  if ((VAR_16 & FUNC_0(VAR_1)) == 0) {
   VAR_21 = FUNC_4(VAR_12->regmap_fields[VAR_1],
       0x01);
   if (VAR_21) {
    FUNC_2(VAR_18, "Failed to mask BATAB interrupt\n");
    return VAR_21;
   }
  }

  VAR_21 = FUNC_5(VAR_12->regmap, VAR_10, &VAR_17);
  if (VAR_21) {
   FUNC_2(VAR_18, "Failed to read MASK2 register\n");
   return VAR_21;
  }

  if (VAR_17 & FUNC_0(VAR_3)) {
   VAR_21 = FUNC_4(
    VAR_12->regmap_fields[VAR_3], 0x00);
   if (VAR_21) {
    FUNC_2(VAR_18, "Failed to unmask CHTERMI interrupt\n");
    return VAR_21;
   }
  }

  if (VAR_17 & FUNC_0(VAR_2)) {
   VAR_21 = FUNC_4(
    VAR_12->regmap_fields[VAR_2], 0x00);
   if (VAR_21) {
    FUNC_2(VAR_18, "Failed to unmask CHRCHGI interrupt\n");
    return VAR_21;
   }
  }





  FUNC_1(&VAR_12->max_charging_time_work);






  FUNC_3(VAR_11,
       &VAR_12->batt_presence_work,
       VAR_7 * VAR_6);
 }

 *VAR_13 = VAR_19;

 if (VAR_20)
  *VAR_14 = VAR_20;

 return 0;
}
