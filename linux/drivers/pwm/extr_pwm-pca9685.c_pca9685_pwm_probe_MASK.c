
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int * dev; scalar_t__ npwm; int * ops; } ;
struct pca9685 {TYPE_1__ chip; int regmap; int period_ns; scalar_t__ duty_ns; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 struct pca9685* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct pca9685*) ;
 int FUNC_7 (struct pca9685*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct pca9685 *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->regmap = FUNC_5(VAR_11, &VAR_10);
 if (FUNC_0(VAR_13->regmap)) {
  VAR_14 = FUNC_1(VAR_13->regmap);
  FUNC_2(&VAR_11->dev, "Failed to initialize register map: %d\n",
   VAR_14);
  return VAR_14;
 }
 VAR_13->duty_ns = 0;
 VAR_13->period_ns = VAR_6;

 FUNC_6(VAR_11, VAR_13);

 FUNC_12(VAR_13->regmap, VAR_8, &VAR_15);

 if (FUNC_3(&VAR_11->dev, "invert"))
  VAR_15 |= VAR_2;
 else
  VAR_15 &= ~VAR_2;

 if (FUNC_3(&VAR_11->dev, "open-drain"))
  VAR_15 &= ~VAR_3;
 else
  VAR_15 |= VAR_3;

 FUNC_13(VAR_13->regmap, VAR_8, VAR_15);


 FUNC_13(VAR_13->regmap, VAR_5, 0);
 FUNC_13(VAR_13->regmap, VAR_4, 0);

 VAR_13->chip.ops = &VAR_9;

 VAR_13->chip.npwm = VAR_7 + 1;

 VAR_13->chip.dev = &VAR_11->dev;
 VAR_13->chip.base = -1;

 VAR_14 = FUNC_10(&VAR_13->chip);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_13);
 if (VAR_14 < 0) {
  FUNC_11(&VAR_13->chip);
  return VAR_14;
 }


 FUNC_9(&VAR_11->dev);




 FUNC_8(&VAR_11->dev);

 return 0;
}
