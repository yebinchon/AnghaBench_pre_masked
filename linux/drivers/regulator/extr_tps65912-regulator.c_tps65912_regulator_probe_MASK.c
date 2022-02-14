
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps65912 {TYPE_2__* dev; int regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; TYPE_1__* dev; struct tps65912* driver_data; } ;
struct TYPE_3__ {int of_node; int parent; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct TYPE_4__ {int of_node; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 struct tps65912* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,int *,struct regulator_config*) ;
 int FUNC_6 (struct platform_device*,struct tps65912*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct tps65912 *VAR_2 = FUNC_4(VAR_1->dev.parent);
 struct regulator_config VAR_3 = { };
 struct regulator_dev *VAR_4;
 int VAR_5;

 FUNC_6(VAR_1, VAR_2);

 VAR_3.dev = &VAR_1->dev;
 VAR_3.driver_data = VAR_2;
 VAR_3.dev->of_node = VAR_2->dev->of_node;
 VAR_3.regmap = VAR_2->regmap;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_4 = FUNC_5(&VAR_1->dev, &VAR_0[VAR_5],
            &VAR_3);
  if (FUNC_1(VAR_4)) {
   FUNC_3(VAR_2->dev, "failed to register %s regulator\n",
    VAR_1->name);
   return FUNC_2(VAR_4);
  }
 }

 return 0;
}
