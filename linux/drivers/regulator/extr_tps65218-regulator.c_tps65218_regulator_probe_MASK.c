
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct tps65218 {unsigned int* strobes; int regmap; TYPE_5__* dev; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct tps65218* driver_data; TYPE_2__* dev; } ;
struct TYPE_8__ {int of_node; int parent; } ;
struct platform_device {int name; TYPE_2__ dev; } ;
struct TYPE_9__ {int of_node; } ;
struct TYPE_7__ {unsigned int bypass_mask; int bypass_reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;
 struct tps65218* FUNC_4 (int ) ;
 unsigned int* FUNC_5 (TYPE_2__*,int ,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct tps65218 *VAR_5 = FUNC_4(VAR_4->dev.parent);
 struct regulator_dev *VAR_6;
 struct regulator_config VAR_7 = { };
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_7.dev = &VAR_4->dev;
 VAR_7.dev->of_node = VAR_5->dev->of_node;
 VAR_7.driver_data = VAR_5;
 VAR_7.regmap = VAR_5->regmap;


 VAR_5->strobes = FUNC_5(&VAR_4->dev,
        VAR_2, sizeof(u8),
        VAR_1);
 if (!VAR_5->strobes)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  VAR_6 = FUNC_6(&VAR_4->dev, &VAR_3[VAR_8],
            &VAR_7);
  if (FUNC_1(VAR_6)) {
   FUNC_3(VAR_5->dev, "failed to register %s regulator\n",
    VAR_4->name);
   return FUNC_2(VAR_6);
  }

  VAR_9 = FUNC_7(VAR_5->regmap, VAR_3[VAR_8].bypass_reg, &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_5->strobes[VAR_8] = VAR_10 & VAR_3[VAR_8].bypass_mask;
 }

 return 0;
}
