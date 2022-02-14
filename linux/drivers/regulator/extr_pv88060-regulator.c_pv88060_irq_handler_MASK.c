
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pv88060 {int dev; int regmap; int ** rdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct pv88060 *VAR_10 = VAR_9;
 int VAR_11, VAR_12, VAR_13, VAR_14 = VAR_1;

 VAR_13 = FUNC_1(VAR_10->regmap, VAR_5, &VAR_12);
 if (VAR_13 < 0)
  goto error_i2c;

 if (VAR_12 & VAR_3) {
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (VAR_10->rdev[VAR_11] != ((void*)0)) {
    FUNC_3(VAR_10->rdev[VAR_11]);
    FUNC_4(VAR_10->rdev[VAR_11],
     VAR_7,
     ((void*)0));
    FUNC_5(VAR_10->rdev[VAR_11]);
   }
  }

  VAR_13 = FUNC_2(VAR_10->regmap, VAR_5,
   VAR_3);
  if (VAR_13 < 0)
   goto error_i2c;

  VAR_14 = VAR_0;
 }

 if (VAR_12 & VAR_2) {
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (VAR_10->rdev[VAR_11] != ((void*)0)) {
    FUNC_3(VAR_10->rdev[VAR_11]);
    FUNC_4(VAR_10->rdev[VAR_11],
     VAR_6,
     ((void*)0));
    FUNC_5(VAR_10->rdev[VAR_11]);
   }
  }

  VAR_13 = FUNC_2(VAR_10->regmap, VAR_5,
   VAR_2);
  if (VAR_13 < 0)
   goto error_i2c;

  VAR_14 = VAR_0;
 }

 return VAR_14;

error_i2c:
 FUNC_0(VAR_10->dev, "I2C error : %d\n", VAR_13);
 return VAR_1;
}
