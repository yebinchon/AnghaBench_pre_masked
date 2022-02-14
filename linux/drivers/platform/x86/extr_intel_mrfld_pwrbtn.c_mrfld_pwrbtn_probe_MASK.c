
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* phys; TYPE_2__ dev; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct intel_soc_pmic* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int) ;
 struct input_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int,int *,int ,int,int ,struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int VAR_10 ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct intel_soc_pmic *VAR_13 = FUNC_0(VAR_12->parent);
 struct input_dev *VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_8(VAR_11, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_4(VAR_12);
 if (!VAR_14)
  return -VAR_5;
 VAR_14->name = VAR_11->name;
 VAR_14->phys = "power-button/input0";
 VAR_14->id.bustype = VAR_4;
 VAR_14->dev.parent = VAR_12;
 FUNC_7(VAR_14, VAR_6, VAR_9);
 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16)
  return VAR_16;

 FUNC_2(VAR_12, VAR_13->regmap);

 VAR_16 = FUNC_5(VAR_12, VAR_15, ((void*)0), VAR_10,
     VAR_7 | VAR_8, VAR_11->name,
     VAR_14);
 if (VAR_16)
  return VAR_16;

 FUNC_9(VAR_13->regmap, VAR_1, VAR_0, 0);
 FUNC_9(VAR_13->regmap, VAR_2, VAR_3, 0);

 FUNC_3(VAR_12, 1);
 FUNC_1(VAR_12, VAR_15);
 return 0;
}
