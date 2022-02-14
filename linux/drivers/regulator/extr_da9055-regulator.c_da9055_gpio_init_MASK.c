
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_config {int dev; int ena_gpiod; } ;
struct TYPE_2__ {int reg; } ;
struct da9055_regulator_info {TYPE_1__ conf; } ;
struct da9055_regulator {int reg_rselect; int da9055; struct da9055_regulator_info* info; } ;
struct da9055_pdata {int* gpio_ren; int* reg_ren; int* gpio_rsel; int* reg_rsel; int * ena_gpiods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int,int ,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct da9055_regulator *VAR_5,
       struct regulator_config *VAR_6,
       struct da9055_pdata *VAR_7, int VAR_8)
{
 struct da9055_regulator_info *VAR_9 = VAR_5->info;
 int VAR_10 = 0;

 if (!VAR_7)
  return 0;

 if (VAR_7->gpio_ren && VAR_7->gpio_ren[VAR_8]) {
  char VAR_11[18];
  int VAR_12 = VAR_7->gpio_ren[VAR_8];

  VAR_6->ena_gpiod = VAR_7->ena_gpiods[VAR_8];





  FUNC_2(VAR_11, "DA9055 GPI %d", VAR_12);
  VAR_10 = FUNC_1(VAR_6->dev, VAR_12, VAR_4,
         VAR_11);
  if (VAR_10 < 0)
   goto err;





  VAR_10 = FUNC_0(VAR_5->da9055, VAR_9->conf.reg,
     VAR_0,
     VAR_7->reg_ren[VAR_8]
     << VAR_1);
  if (VAR_10 < 0)
   goto err;
 }

 if (VAR_7->gpio_rsel && VAR_7->gpio_rsel[VAR_8]) {
  char VAR_13[18];
  int VAR_14 = VAR_7->gpio_rsel[VAR_8];

  VAR_5->reg_rselect = VAR_7->reg_rsel[VAR_8];





  FUNC_2(VAR_13, "DA9055 GPI %d", VAR_14);
  VAR_10 = FUNC_1(VAR_6->dev, VAR_14, VAR_4,
         VAR_13);
  if (VAR_10 < 0)
   goto err;





  VAR_10 = FUNC_0(VAR_5->da9055, VAR_9->conf.reg,
     VAR_2,
     VAR_7->reg_rsel[VAR_8]
     << VAR_3);
 }

err:
 return VAR_10;
}
