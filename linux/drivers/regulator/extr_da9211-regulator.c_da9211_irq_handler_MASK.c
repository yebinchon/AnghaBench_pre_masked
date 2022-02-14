
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9211 {int dev; int regmap; int * rdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct da9211 *VAR_8 = VAR_7;
 int VAR_9, VAR_10, VAR_11 = VAR_4;

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_2, &VAR_9);
 if (VAR_10 < 0)
  goto error_i2c;

 if (VAR_9 & VAR_0) {
         FUNC_3(VAR_8->rdev[0]);
  FUNC_4(VAR_8->rdev[0],
   VAR_5, ((void*)0));
         FUNC_5(VAR_8->rdev[0]);

  VAR_10 = FUNC_2(VAR_8->regmap, VAR_2,
   VAR_0);
  if (VAR_10 < 0)
   goto error_i2c;

  VAR_11 = VAR_3;
 }

 if (VAR_9 & VAR_1) {
         FUNC_3(VAR_8->rdev[1]);
  FUNC_4(VAR_8->rdev[1],
   VAR_5, ((void*)0));
         FUNC_5(VAR_8->rdev[1]);

  VAR_10 = FUNC_2(VAR_8->regmap, VAR_2,
   VAR_1);
  if (VAR_10 < 0)
   goto error_i2c;

  VAR_11 = VAR_3;
 }

 return VAR_11;

error_i2c:
 FUNC_0(VAR_8->dev, "I2C error : %d\n", VAR_10);
 return VAR_4;
}
