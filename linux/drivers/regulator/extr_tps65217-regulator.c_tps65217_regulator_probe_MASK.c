
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct tps65217_board {int * tps65217_init_data; } ;
struct tps65217 {unsigned int* strobes; int dev; int regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct tps65217* driver_data; int init_data; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int name; TYPE_2__ dev; } ;
struct TYPE_5__ {unsigned int bypass_mask; int bypass_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 struct tps65217* FUNC_3 (int ) ;
 struct tps65217_board* FUNC_4 (int ) ;
 unsigned int* FUNC_5 (TYPE_2__*,int,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (struct platform_device*,struct tps65217*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (struct tps65217*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct tps65217 *VAR_5 = FUNC_3(VAR_4->dev.parent);
 struct tps65217_board *VAR_6 = FUNC_4(VAR_5->dev);
 struct regulator_dev *VAR_7;
 struct regulator_config VAR_8 = { };
 int VAR_9, VAR_10;
 unsigned int VAR_11;


 VAR_5->strobes = FUNC_5(&VAR_4->dev,
        VAR_2, sizeof(u8),
        VAR_1);
 if (!VAR_5->strobes)
  return -VAR_0;

 FUNC_7(VAR_4, VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

  VAR_8.dev = VAR_5->dev;
  if (VAR_6)
   VAR_8.init_data = VAR_6->tps65217_init_data[VAR_9];
  VAR_8.driver_data = VAR_5;
  VAR_8.regmap = VAR_5->regmap;

  VAR_7 = FUNC_6(&VAR_4->dev, &VAR_3[VAR_9],
            &VAR_8);
  if (FUNC_0(VAR_7)) {
   FUNC_2(VAR_5->dev, "failed to register %s regulator\n",
    VAR_4->name);
   return FUNC_1(VAR_7);
  }


  VAR_10 = FUNC_8(VAR_5, VAR_3[VAR_9].bypass_reg, &VAR_11);
  VAR_5->strobes[VAR_9] = VAR_11 & VAR_3[VAR_9].bypass_mask;
 }

 return 0;
}
