
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_config {struct max77650_regulator_desc* driver_data; struct device* dev; } ;
struct regmap {int dummy; } ;
struct device {scalar_t__ of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct max77650_regulator_desc {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;




 int FUNC_1 (unsigned int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct regulator_dev*) ;
 struct regmap* FUNC_3 (struct device*,int *) ;
 struct max77650_regulator_desc** FUNC_4 (struct device*,int,int,int ) ;
 struct regulator_dev* FUNC_5 (struct device*,int *,struct regulator_config*) ;
 struct max77650_regulator_desc VAR_9 ;
 struct max77650_regulator_desc VAR_10 ;
 struct max77650_regulator_desc VAR_11 ;
 struct max77650_regulator_desc VAR_12 ;
 struct max77650_regulator_desc VAR_13 ;
 struct max77650_regulator_desc VAR_14 ;
 int FUNC_6 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_15)
{
 struct max77650_regulator_desc **VAR_16;
 struct max77650_regulator_desc *VAR_17;
 struct regulator_config VAR_18 = { };
 struct device *VAR_19, *VAR_20;
 struct regulator_dev *VAR_21;
 struct regmap *VAR_22;
 unsigned int VAR_23;
 int VAR_24, VAR_25;

 VAR_19 = &VAR_15->dev;
 VAR_20 = VAR_19->parent;

 if (!VAR_19->of_node)
  VAR_19->of_node = VAR_20->of_node;

 VAR_16 = FUNC_4(VAR_19, VAR_7,
         sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_22 = FUNC_3(VAR_20, ((void*)0));
 if (!VAR_22)
  return -VAR_0;

 VAR_25 = FUNC_6(VAR_22, VAR_8, &VAR_23);
 if (VAR_25)
  return VAR_25;

 VAR_16[VAR_3] = &VAR_9;
 VAR_16[VAR_4] = &VAR_10;

 switch (FUNC_1(VAR_23)) {
 case 131:
 case 130:
  VAR_16[VAR_5] = &VAR_11;
  VAR_16[VAR_6] = &VAR_12;
  break;
 case 129:
 case 128:
  VAR_16[VAR_5] = &VAR_13;
  VAR_16[VAR_6] = &VAR_14;
  break;
 default:
  return -VAR_0;
 }

 VAR_18.dev = VAR_20;

 for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
  VAR_17 = VAR_16[VAR_24];
  VAR_18.driver_data = VAR_17;

  VAR_21 = FUNC_5(VAR_19, &VAR_17->desc, &VAR_18);
  if (FUNC_0(VAR_21))
   return FUNC_2(VAR_21);
 }

 return 0;
}
