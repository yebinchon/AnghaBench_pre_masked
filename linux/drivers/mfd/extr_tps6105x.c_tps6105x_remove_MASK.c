
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6105x {int regmap; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tps6105x* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 struct tps6105x *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(&VAR_4->dev);


 FUNC_2(VAR_5->regmap, VAR_3,
  VAR_1,
  VAR_0 << VAR_2);

 return 0;
}
