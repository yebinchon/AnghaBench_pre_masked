
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65132_regulator {int dev; struct tps65132_reg_pdata* reg_pdata; } ;
struct tps65132_reg_pdata {int act_dis_time_us; void* act_dis_gpiod; void* en_gpiod; } ;
struct regulator_desc {size_t id; } ;
struct regulator_config {struct tps65132_regulator* driver_data; } ;
struct device_node {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (int ,char*,int ,int *,int ,char*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_1,
    const struct regulator_desc *VAR_2,
    struct regulator_config *VAR_3)
{
 struct tps65132_regulator *VAR_4 = VAR_3->driver_data;
 struct tps65132_reg_pdata *VAR_5 = &VAR_4->reg_pdata[VAR_2->id];
 int VAR_6;

 VAR_5->en_gpiod = FUNC_3(VAR_4->dev,
     "enable", 0, &VAR_1->fwnode, 0, "enable");
 if (FUNC_0(VAR_5->en_gpiod)) {
  VAR_6 = FUNC_1(VAR_5->en_gpiod);


  if (VAR_6 == -VAR_0)
   return VAR_6;
  return 0;
 }

 VAR_5->act_dis_gpiod = FUNC_3(
     VAR_4->dev, "active-discharge", 0,
     &VAR_1->fwnode, 0, "active-discharge");
 if (FUNC_0(VAR_5->act_dis_gpiod)) {
  VAR_6 = FUNC_1(VAR_5->act_dis_gpiod);


  if (VAR_6 == -VAR_0)
   return VAR_6;

  return 0;
 }

 VAR_6 = FUNC_4(VAR_1, "ti,active-discharge-time-us",
       &VAR_5->act_dis_time_us);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "Failed to read active discharge time:%d\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
