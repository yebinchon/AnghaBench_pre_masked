
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct regmap* regmap; TYPE_1__* driver_data; TYPE_2__* dev; } ;
struct regmap {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_5__ {TYPE_3__ desc; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 struct regmap* FUNC_3 (int ,int *) ;
 struct regulator_dev* FUNC_4 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct regmap *VAR_3 = FUNC_3(VAR_2->dev.parent, ((void*)0));
 struct regulator_config VAR_4 = {};
 struct regulator_dev *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4.dev = &VAR_2->dev;
  VAR_4.driver_data = &VAR_1[VAR_6];
  VAR_4.regmap = VAR_3;
  VAR_5 = FUNC_4(&VAR_2->dev,
            &VAR_1[VAR_6].desc,
    &VAR_4);
  if (FUNC_0(VAR_5)) {
   FUNC_2(&VAR_2->dev, "failed to register %s\n",
    VAR_1[VAR_6].desc.name);
   return FUNC_1(VAR_5);
  }
 }
 return 0;
}
