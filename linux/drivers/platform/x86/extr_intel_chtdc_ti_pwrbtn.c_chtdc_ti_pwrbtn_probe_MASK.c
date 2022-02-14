
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* phys; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_soc_pmic* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int) ;
 struct input_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int,int *,int ,int ,int ,struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct intel_soc_pmic *VAR_8 = FUNC_0(VAR_7->parent);
 struct input_dev *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_8(VAR_6, 0);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 = FUNC_4(VAR_7);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->name = VAR_6->name;
 VAR_9->phys = "power-button/input0";
 VAR_9->id.bustype = VAR_0;
 FUNC_7(VAR_9, VAR_2, VAR_4);
 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_7, VAR_8->regmap);

 VAR_11 = FUNC_5(VAR_7, VAR_10, ((void*)0),
     VAR_5,
     0, VAR_3, VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_7, 1);
 FUNC_1(VAR_7, VAR_10);
 return 0;
}
