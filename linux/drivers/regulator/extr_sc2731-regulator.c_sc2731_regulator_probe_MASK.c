
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct regmap* regmap; TYPE_2__* dev; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct regmap* FUNC_4 (int ,int *) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,TYPE_1__*,struct regulator_config*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (struct regmap*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 int VAR_3, VAR_4;
 struct regmap *VAR_5;
 struct regulator_config VAR_6 = { };
 struct regulator_dev *VAR_7;

 VAR_5 = FUNC_4(VAR_2->dev.parent, ((void*)0));
 if (!VAR_5) {
  FUNC_3(&VAR_2->dev, "failed to get regmap.\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_6(VAR_5);
 if (VAR_4) {
  FUNC_3(&VAR_2->dev, "failed to release regulator lock\n");
  return VAR_4;
 }

 VAR_6.dev = &VAR_2->dev;
 VAR_6.regmap = VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_7 = FUNC_5(&VAR_2->dev, &VAR_1[VAR_3],
            &VAR_6);
  if (FUNC_1(VAR_7)) {
   FUNC_3(&VAR_2->dev, "failed to register regulator %s\n",
    VAR_1[VAR_3].name);
   return FUNC_2(VAR_7);
  }
 }

 return 0;
}
