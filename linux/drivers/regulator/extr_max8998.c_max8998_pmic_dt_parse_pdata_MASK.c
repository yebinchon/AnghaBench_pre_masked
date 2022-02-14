
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct max8998_regulator_data {struct device_node* reg_node; int initdata; int id; } ;
struct max8998_platform_data {int num_regulators; int buck_voltage_lock; int buck1_default_idx; int buck2_default_idx; TYPE_1__* buck2_voltage; TYPE_1__* buck1_voltage; struct max8998_regulator_data* regulators; } ;
struct max8998_dev {TYPE_3__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct TYPE_9__ {char* name; int id; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct max8998_regulator_data* FUNC_3 (TYPE_3__*,int,int,int ) ;
 int FUNC_4 (struct max8998_dev*,struct max8998_platform_data*,struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (TYPE_3__*,struct device_node*,TYPE_1__*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;
 int FUNC_11 (struct device_node*,char*,TYPE_1__*,unsigned int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_12(struct max8998_dev *VAR_4,
     struct max8998_platform_data *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev->of_node;
 struct device_node *VAR_7, *VAR_8;
 struct max8998_regulator_data *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_6(VAR_6, "regulators");
 if (!VAR_7) {
  FUNC_1(VAR_4->dev, "could not find regulators sub-node\n");
  return -VAR_0;
 }


 VAR_5->num_regulators = FUNC_7(VAR_7);

 VAR_9 = FUNC_3(VAR_4->dev,
        VAR_5->num_regulators, sizeof(*VAR_9),
        VAR_2);
 if (!VAR_9) {
  FUNC_9(VAR_7);
  return -VAR_1;
 }

 VAR_5->regulators = VAR_9;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); ++VAR_10) {
  VAR_8 = FUNC_6(VAR_7,
       VAR_3[VAR_10].name);
  if (!VAR_8)
   continue;

  VAR_9->id = VAR_3[VAR_10].id;
  VAR_9->initdata = FUNC_8(VAR_4->dev,
            VAR_8,
            &VAR_3[VAR_10]);
  VAR_9->reg_node = VAR_8;
  ++VAR_9;
 }
 VAR_5->num_regulators = VAR_9 - VAR_5->regulators;

 FUNC_9(VAR_8);
 FUNC_9(VAR_7);

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_11)
  return -VAR_0;

 if (FUNC_5(VAR_6, "max8998,pmic-buck-voltage-lock", ((void*)0)))
  VAR_5->buck_voltage_lock = 1;

 VAR_11 = FUNC_10(VAR_6,
     "max8998,pmic-buck1-default-dvs-idx",
     &VAR_5->buck1_default_idx);
 if (!VAR_11 && VAR_5->buck1_default_idx >= 4) {
  VAR_5->buck1_default_idx = 0;
  FUNC_2(VAR_4->dev, "invalid value for default dvs index, using 0 instead\n");
 }

 VAR_11 = FUNC_10(VAR_6,
     "max8998,pmic-buck2-default-dvs-idx",
     &VAR_5->buck2_default_idx);
 if (!VAR_11 && VAR_5->buck2_default_idx >= 2) {
  VAR_5->buck2_default_idx = 0;
  FUNC_2(VAR_4->dev, "invalid value for default dvs index, using 0 instead\n");
 }

 VAR_11 = FUNC_11(VAR_6,
     "max8998,pmic-buck1-dvs-voltage",
     VAR_5->buck1_voltage,
     FUNC_0(VAR_5->buck1_voltage));
 if (VAR_11) {
  FUNC_1(VAR_4->dev, "buck1 voltages not specified\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_11(VAR_6,
     "max8998,pmic-buck2-dvs-voltage",
     VAR_5->buck2_voltage,
     FUNC_0(VAR_5->buck2_voltage));
 if (VAR_11) {
  FUNC_1(VAR_4->dev, "buck2 voltages not specified\n");
  return -VAR_0;
 }

 return 0;
}
