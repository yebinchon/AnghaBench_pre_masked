
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct rt9455_info {TYPE_1__* client; int * regmap_fields; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct rt9455_info *VAR_7,
         union power_supply_propval *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7->regmap_fields[VAR_0],
    &VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_7->client->dev, "Failed to read PWR_RDY bit\n");
  return VAR_11;
 }





 if (!VAR_10) {
  VAR_8->intval = VAR_3;
  return 0;
 }

 VAR_11 = FUNC_1(VAR_7->regmap_fields[VAR_1], &VAR_9);
 if (VAR_11) {
  FUNC_0(&VAR_7->client->dev, "Failed to read STAT bits\n");
  return VAR_11;
 }

 switch (VAR_9) {
 case 0:
  VAR_8->intval = VAR_5;
  return 0;
 case 1:
  VAR_8->intval = VAR_2;
  return 0;
 case 2:
  VAR_8->intval = VAR_4;
  return 0;
 default:
  VAR_8->intval = VAR_6;
  return 0;
 }
}
