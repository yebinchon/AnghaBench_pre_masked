
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt9455_info {int * regmap_fields; int regmap; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (struct rt9455_info*) ;

__attribute__((used)) static int FUNC_6(struct rt9455_info *VAR_8,
        bool *VAR_9)
{
 unsigned int VAR_10, VAR_11;
 struct device *VAR_12 = &VAR_8->client->dev;
 bool VAR_13 = 0;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_8->regmap, VAR_6, &VAR_10);
 if (VAR_14) {
  FUNC_1(VAR_12, "Failed to read IRQ3 register\n");
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_8->regmap, VAR_7, &VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_12, "Failed to read MASK3 register\n");
  return VAR_14;
 }

 if (VAR_10 & FUNC_0(VAR_1)) {
  FUNC_1(VAR_12, "Boost fault. Overvoltage input occurred\n");
  VAR_13 = 1;
 }
 if (VAR_10 & FUNC_0(VAR_3)) {
  FUNC_1(VAR_12, "Boost fault. Overload\n");
  VAR_13 = 1;
 }
 if (VAR_10 & FUNC_0(VAR_2)) {
  FUNC_1(VAR_12, "Boost fault. Battery voltage too low\n");
  VAR_13 = 1;
 }
 if (VAR_10 & FUNC_0(VAR_0)) {
  FUNC_1(VAR_12, "Boost fault. 32 seconds timeout occurred.\n");
  VAR_13 = 1;
 }

 if (VAR_13) {
  FUNC_2(VAR_12, "Boost fault occurred, therefore the charger goes into charge mode\n");
  VAR_14 = FUNC_5(VAR_8);
  if (VAR_14) {
   FUNC_1(VAR_12, "Failed to set VOREG before entering charge mode\n");
   return VAR_14;
  }
  VAR_14 = FUNC_3(VAR_8->regmap_fields[VAR_4],
      VAR_5);
  if (VAR_14) {
   FUNC_1(VAR_12, "Failed to set charger in charge mode\n");
   return VAR_14;
  }
  *VAR_9 = VAR_13;
 }

 return 0;
}
