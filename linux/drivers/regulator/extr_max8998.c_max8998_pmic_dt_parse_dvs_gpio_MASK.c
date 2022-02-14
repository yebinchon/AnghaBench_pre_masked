
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_platform_data {int buck1_set1; int buck1_set2; int buck2_set3; } ;
struct max8998_dev {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device_node*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct max8998_dev *VAR_1,
   struct max8998_platform_data *VAR_2,
   struct device_node *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, "max8998,pmic-buck1-dvs-gpios", 0);
 if (!FUNC_1(VAR_4)) {
  FUNC_0(VAR_1->dev, "invalid buck1 gpio[0]: %d\n", VAR_4);
  return -VAR_0;
 }
 VAR_2->buck1_set1 = VAR_4;

 VAR_4 = FUNC_2(VAR_3, "max8998,pmic-buck1-dvs-gpios", 1);
 if (!FUNC_1(VAR_4)) {
  FUNC_0(VAR_1->dev, "invalid buck1 gpio[1]: %d\n", VAR_4);
  return -VAR_0;
 }
 VAR_2->buck1_set2 = VAR_4;

 VAR_4 = FUNC_2(VAR_3, "max8998,pmic-buck2-dvs-gpio", 0);
 if (!FUNC_1(VAR_4)) {
  FUNC_0(VAR_1->dev, "invalid buck 2 gpio: %d\n", VAR_4);
  return -VAR_0;
 }
 VAR_2->buck2_set3 = VAR_4;

 return 0;
}
