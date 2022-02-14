
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct rt9455_info {TYPE_1__* client; int * regmap_fields; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct rt9455_info *VAR_1,
            union power_supply_propval *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->regmap_fields[VAR_0], &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_1->client->dev, "Failed to read BATAB bit\n");
  return VAR_4;
 }





 VAR_2->intval = !VAR_3;

 return 0;
}
