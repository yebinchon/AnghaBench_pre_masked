
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int of_node; } ;
struct regulator_dev {TYPE_2__ dev; TYPE_1__* desc; } ;
struct regulator_desc {char* name; char const* supply_name; } ;
struct regulator_config {struct axp20x_dev* driver_data; int regmap; TYPE_5__* dev; } ;
struct TYPE_9__ {TYPE_5__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct axp20x_dev {int variant; int regmap; } ;
struct TYPE_10__ {int of_node; } ;
struct TYPE_7__ {int name; } ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct axp20x_dev*,int) ;
 int FUNC_3 (struct platform_device*) ;
 struct regulator_desc* VAR_21 ;
 scalar_t__ FUNC_4 (struct regulator_dev*,int,int ) ;
 struct regulator_desc const VAR_22 ;
 struct regulator_desc const* VAR_23 ;
 struct regulator_desc const* VAR_24 ;
 struct regulator_desc* VAR_25 ;
 struct regulator_desc const* VAR_26 ;
 struct regulator_desc* VAR_27 ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 struct axp20x_dev* FUNC_6 (TYPE_5__*) ;
 struct regulator_desc* FUNC_7 (TYPE_3__*,int,int ) ;
 struct regulator_dev* FUNC_8 (TYPE_3__*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,char const**) ;
 int FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_28)
{
 struct regulator_dev *VAR_29;
 struct axp20x_dev *VAR_30 = FUNC_6(VAR_28->dev.parent);
 const struct regulator_desc *VAR_31;
 struct regulator_config VAR_32 = {
  .dev = VAR_28->dev.parent,
  .regmap = VAR_30->regmap,
  .driver_data = VAR_30,
 };
 int VAR_33, VAR_34, VAR_35;
 u32 VAR_36;
 const char *VAR_37 = VAR_23[VAR_4].name;
 const char *VAR_38 = VAR_23[VAR_5].name;
 bool VAR_39 = 0;

 switch (VAR_30->variant) {
 case 135:
 case 134:
  VAR_31 = VAR_21;
  VAR_35 = VAR_1;
  break;
 case 133:
 case 132:
  VAR_31 = VAR_23;
  VAR_35 = VAR_7;
  VAR_39 = FUNC_9(VAR_28->dev.parent->of_node,
        "x-powers,drive-vbus-en");
  break;
 case 131:
  VAR_31 = VAR_24;
  VAR_35 = VAR_9;
  VAR_39 = FUNC_9(VAR_28->dev.parent->of_node,
        "x-powers,drive-vbus-en");
  break;
 case 130:
  VAR_31 = VAR_25;
  VAR_35 = VAR_10;
  break;
 case 129:
  VAR_31 = VAR_26;
  VAR_35 = VAR_15;
  break;
 case 128:
  VAR_31 = VAR_27;
  VAR_35 = VAR_17;
  VAR_39 = FUNC_9(VAR_28->dev.parent->of_node,
        "x-powers,drive-vbus-en");
  break;
 default:
  FUNC_5(&VAR_28->dev, "Unsupported AXP variant: %ld\n",
   VAR_30->variant);
  return -VAR_18;
 }


 FUNC_3(VAR_28);

 for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++) {
  const struct regulator_desc *VAR_40 = &VAR_31[VAR_34];
  struct regulator_desc *VAR_41;






  if (FUNC_2(VAR_30, VAR_34))
   continue;


  if (VAR_30->variant == 128 && VAR_34 == VAR_16)
   continue;
  if ((VAR_31 == VAR_23 && VAR_34 == VAR_2) ||
      (VAR_31 == VAR_24 && VAR_34 == VAR_8) ||
      (VAR_31 == VAR_26 && VAR_34 == VAR_11)) {
   VAR_41 = FUNC_7(&VAR_28->dev, sizeof(*VAR_40),
      VAR_20);
   if (!VAR_41)
    return -VAR_19;

   *VAR_41 = VAR_31[VAR_34];
   VAR_41->supply_name = VAR_37;
   VAR_40 = VAR_41;
  }

  if ((VAR_31 == VAR_23 && VAR_34 == VAR_3) ||
      (VAR_31 == VAR_26 && VAR_34 == VAR_12)) {
   VAR_41 = FUNC_7(&VAR_28->dev, sizeof(*VAR_40),
      VAR_20);
   if (!VAR_41)
    return -VAR_19;

   *VAR_41 = VAR_31[VAR_34];
   VAR_41->supply_name = VAR_38;
   VAR_40 = VAR_41;
  }

  VAR_29 = FUNC_8(&VAR_28->dev, VAR_40, &VAR_32);
  if (FUNC_0(VAR_29)) {
   FUNC_5(&VAR_28->dev, "Failed to register %s\n",
    VAR_31[VAR_34].name);

   return FUNC_1(VAR_29);
  }

  VAR_33 = FUNC_11(VAR_29->dev.of_node,
        "x-powers,dcdc-workmode",
        &VAR_36);
  if (!VAR_33) {
   if (FUNC_4(VAR_29, VAR_34, VAR_36))
    FUNC_5(&VAR_28->dev, "Failed to set workmode on %s\n",
     VAR_29->desc->name);
  }




  if ((VAR_31 == VAR_23 && VAR_34 == VAR_4) ||
      (VAR_31 == VAR_26 && VAR_34 == VAR_13))
   FUNC_10(VAR_29->dev.of_node,
      "regulator-name",
      &VAR_37);

  if ((VAR_31 == VAR_23 && VAR_34 == VAR_5) ||
      (VAR_31 == VAR_26 && VAR_34 == VAR_14))
   FUNC_10(VAR_29->dev.of_node,
      "regulator-name",
      &VAR_38);
 }

 if (VAR_39) {

  FUNC_12(VAR_30->regmap, VAR_0,
       VAR_6, 0);
  VAR_29 = FUNC_8(&VAR_28->dev,
            &VAR_22,
            &VAR_32);
  if (FUNC_0(VAR_29)) {
   FUNC_5(&VAR_28->dev, "Failed to register drivevbus\n");
   return FUNC_1(VAR_29);
  }
 }

 return 0;
}
