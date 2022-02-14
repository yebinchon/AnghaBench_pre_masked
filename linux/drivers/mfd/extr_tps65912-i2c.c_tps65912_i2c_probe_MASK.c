
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65912 {int regmap; int * dev; int irq; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct tps65912* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct tps65912*) ;
 int FUNC_6 (struct tps65912*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
         const struct i2c_device_id *VAR_4)
{
 struct tps65912 *VAR_5;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_3, VAR_5);
 VAR_5->dev = &VAR_3->dev;
 VAR_5->irq = VAR_3->irq;

 VAR_5->regmap = FUNC_4(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5->regmap)) {
  FUNC_2(VAR_5->dev, "Failed to initialize register map\n");
  return FUNC_1(VAR_5->regmap);
 }

 return FUNC_6(VAR_5);
}
