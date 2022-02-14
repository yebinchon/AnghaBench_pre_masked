
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_regulator_match {scalar_t__ init_data; } ;
struct device_node {int dummy; } ;
struct da9063_regulators_pdata {int n_regulators; struct da9063_regulator_data* regulator_data; } ;
struct da9063_regulator_data {int id; scalar_t__ initdata; } ;
struct da9063 {scalar_t__ type; } ;
struct TYPE_7__ {int of_node; } ;


 int FUNC_0 (struct of_regulator_match*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct da9063_regulators_pdata* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct of_regulator_match* VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct da9063* FUNC_3 (TYPE_4__*) ;
 struct da9063_regulator_data* FUNC_4 (TYPE_1__*,int,int,int ) ;
 struct da9063_regulators_pdata* FUNC_5 (TYPE_1__*,int,int ) ;
 struct device_node* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (TYPE_1__*,struct device_node*,struct of_regulator_match*,int) ;

__attribute__((used)) static struct da9063_regulators_pdata *FUNC_9(
  struct platform_device *VAR_6,
  struct of_regulator_match **VAR_7)
{
 struct da9063 *VAR_8 = FUNC_3(VAR_6->dev.parent);
 struct da9063_regulators_pdata *VAR_9;
 struct da9063_regulator_data *VAR_10;
 struct device_node *VAR_11;
 int VAR_12 = FUNC_0(VAR_5);
 int VAR_13, VAR_14, VAR_15;

 if (VAR_8->type == VAR_4)
  VAR_12 -= 6;

 VAR_11 = FUNC_6(VAR_6->dev.parent->of_node, "regulators");
 if (!VAR_11) {
  FUNC_2(&VAR_6->dev, "Regulators device node not found\n");
  return FUNC_1(-VAR_1);
 }

 VAR_15 = FUNC_8(&VAR_6->dev, VAR_11, VAR_5,
     VAR_12);
 FUNC_7(VAR_11);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_6->dev, "Failed to match regulators\n");
  return FUNC_1(-VAR_0);
 }

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_1(-VAR_2);

 VAR_9->regulator_data = FUNC_4(&VAR_6->dev,
     VAR_15, sizeof(*VAR_9->regulator_data),
     VAR_3);
 if (!VAR_9->regulator_data)
  return FUNC_1(-VAR_2);
 VAR_9->n_regulators = VAR_15;

 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if (!VAR_5[VAR_13].init_data)
   continue;

  VAR_10 = &VAR_9->regulator_data[VAR_14];
  VAR_10->id = VAR_13;
  VAR_10->initdata = VAR_5[VAR_13].init_data;

  VAR_14++;
 }

 *VAR_7 = VAR_5;
 return VAR_9;
}
