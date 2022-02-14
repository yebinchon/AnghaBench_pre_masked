
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct pcf50633* driver_data; int init_data; TYPE_2__* dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {size_t id; TYPE_2__ dev; } ;
struct pcf50633 {TYPE_1__* pdata; int regmap; } ;
struct TYPE_4__ {int (* regulator_registered ) (struct pcf50633*,size_t) ;} ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct pcf50633* FUNC_3 (int ) ;
 struct regulator_dev* FUNC_4 (TYPE_2__*,int *,struct regulator_config*) ;
 int FUNC_5 (struct platform_device*,struct regulator_dev*) ;
 int * VAR_0 ;
 int FUNC_6 (struct pcf50633*,size_t) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct regulator_dev *VAR_2;
 struct pcf50633 *VAR_3;
 struct regulator_config VAR_4 = { };


 VAR_3 = FUNC_3(VAR_1->dev.parent);

 VAR_4.dev = &VAR_1->dev;
 VAR_4.init_data = FUNC_2(&VAR_1->dev);
 VAR_4.driver_data = VAR_3;
 VAR_4.regmap = VAR_3->regmap;

 VAR_2 = FUNC_4(&VAR_1->dev, &VAR_0[VAR_1->id],
           &VAR_4);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_5(VAR_1, VAR_2);

 if (VAR_3->pdata->regulator_registered)
  VAR_3->pdata->regulator_registered(VAR_3, VAR_1->id);

 return 0;
}
