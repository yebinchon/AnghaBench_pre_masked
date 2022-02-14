
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040 {scalar_t__ pll; int sysclk_rate; int mutex; int clk32k; scalar_t__ mclk_rate; int mclk; int regmap; int audpwron; scalar_t__ power_count; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct twl6040*) ;
 int FUNC_11 (struct twl6040*) ;
 int FUNC_12 (struct twl6040*) ;
 int FUNC_13 (int,int) ;

int FUNC_14(struct twl6040 *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_5(&VAR_3->mutex);

 if (VAR_4) {

  if (VAR_3->power_count++)
   goto out;

  VAR_5 = FUNC_1(VAR_3->clk32k);
  if (VAR_5) {
   VAR_3->power_count = 0;
   goto out;
  }


  FUNC_7(VAR_3->regmap, 0);

  if (FUNC_3(VAR_3->audpwron)) {

   VAR_5 = FUNC_11(VAR_3);
   if (VAR_5) {
    FUNC_0(VAR_3->clk32k);
    VAR_3->power_count = 0;
    goto out;
   }
  } else {

   VAR_5 = FUNC_12(VAR_3);
   if (VAR_5) {
    FUNC_0(VAR_3->clk32k);
    VAR_3->power_count = 0;
    goto out;
   }
  }





  FUNC_13(10000, 12000);


  VAR_5 = FUNC_9(VAR_3->regmap);
  if (VAR_5) {
   FUNC_2(VAR_3->dev, "Failed to sync with the HW: %i\n",
    VAR_5);
   goto out;
  }


  VAR_3->pll = VAR_2;
  VAR_3->sysclk_rate = 19200000;
 } else {

  if (!VAR_3->power_count) {
   FUNC_2(VAR_3->dev,
    "device is already powered-off\n");
   VAR_5 = -VAR_0;
   goto out;
  }

  if (--VAR_3->power_count)
   goto out;

  if (FUNC_3(VAR_3->audpwron)) {

   FUNC_4(VAR_3->audpwron, 0);


   FUNC_13(500, 700);
  } else {

   FUNC_10(VAR_3);
  }


  FUNC_7(VAR_3->regmap, 1);
  FUNC_8(VAR_3->regmap);

  VAR_3->sysclk_rate = 0;

  if (VAR_3->pll == VAR_1) {
   FUNC_0(VAR_3->mclk);
   VAR_3->mclk_rate = 0;
  }

  FUNC_0(VAR_3->clk32k);
 }

out:
 FUNC_6(&VAR_3->mutex);
 return VAR_5;
}
