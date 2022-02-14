
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_tm_dev {int* alert_en; struct regmap* tz_dev; struct regmap* regmap; int data; struct device* dev; } ;
struct thermal_trip {scalar_t__ type; int temperature; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct uniphier_tm_dev* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,char*,struct uniphier_tm_dev*) ;
 struct regmap* FUNC_6 (struct device*,int ,struct uniphier_tm_dev*,int *) ;
 int FUNC_7 (struct device*) ;
 struct device_node* FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct regmap*) ;
 struct thermal_trip* FUNC_11 (struct regmap*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct uniphier_tm_dev*) ;
 struct regmap* FUNC_14 (struct device_node*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (struct uniphier_tm_dev*) ;
 int FUNC_16 (struct uniphier_tm_dev*) ;
 int FUNC_17 (struct uniphier_tm_dev*,int,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct regmap *VAR_13;
 struct device_node *VAR_14;
 struct uniphier_tm_dev *VAR_15;
 const struct thermal_trip *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = VAR_6;

 VAR_15 = FUNC_4(VAR_12, sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_4;
 VAR_15->dev = VAR_12;

 VAR_15->data = FUNC_7(VAR_12);
 if (FUNC_2(!VAR_15->data))
  return -VAR_3;

 VAR_19 = FUNC_12(VAR_11, 0);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_14 = FUNC_8(VAR_12->of_node);
 VAR_13 = FUNC_14(VAR_14);
 FUNC_9(VAR_14);
 if (FUNC_0(VAR_13)) {
  FUNC_3(VAR_12, "failed to get regmap (error %ld)\n",
   FUNC_1(VAR_13));
  return FUNC_1(VAR_13);
 }
 VAR_15->regmap = VAR_13;

 VAR_18 = FUNC_16(VAR_15);
 if (VAR_18) {
  FUNC_3(VAR_12, "failed to initialize sensor\n");
  return VAR_18;
 }

 VAR_18 = FUNC_5(VAR_12, VAR_19, VAR_9,
     VAR_10,
     0, "thermal", VAR_15);
 if (VAR_18)
  return VAR_18;

 FUNC_13(VAR_11, VAR_15);

 VAR_15->tz_dev = FUNC_6(VAR_12, 0, VAR_15,
      &VAR_8);
 if (FUNC_0(VAR_15->tz_dev)) {
  FUNC_3(VAR_12, "failed to register sensor device\n");
  return FUNC_1(VAR_15->tz_dev);
 }


 VAR_16 = FUNC_11(VAR_15->tz_dev);
 VAR_20 = FUNC_10(VAR_15->tz_dev);
 if (VAR_20 > VAR_0) {
  FUNC_3(VAR_12, "thermal zone has too many trips\n");
  return -VAR_2;
 }


 for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++) {
  if (VAR_16[VAR_17].type == VAR_7 &&
      VAR_16[VAR_17].temperature < VAR_21)
   VAR_21 = VAR_16[VAR_17].temperature;
  FUNC_17(VAR_15, VAR_17, VAR_16[VAR_17].temperature);
  VAR_15->alert_en[VAR_17] = 1;
 }
 if (VAR_21 > VAR_1) {
  FUNC_3(VAR_12, "critical trip is over limit(>%d), or not set\n",
   VAR_1);
  return -VAR_3;
 }

 FUNC_15(VAR_15);

 return 0;
}
