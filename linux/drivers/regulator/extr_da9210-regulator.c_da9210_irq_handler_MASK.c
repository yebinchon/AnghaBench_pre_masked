
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9210 {int regmap; int rdev; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct da9210 *VAR_14 = VAR_13;
 unsigned int VAR_15, VAR_16 = 0;
 int VAR_17, VAR_18 = VAR_7;

 VAR_17 = FUNC_2(VAR_14->regmap, VAR_5, &VAR_15);
 if (VAR_17 < 0)
  goto error_i2c;

 FUNC_4(VAR_14->rdev);

 if (VAR_15 & VAR_1) {
  FUNC_5(VAR_14->rdev,
           VAR_8,
           ((void*)0));
  VAR_16 |= VAR_1;
 }
 if (VAR_15 & VAR_0) {
  FUNC_5(VAR_14->rdev,
           VAR_11,
           ((void*)0));
  VAR_16 |= VAR_0;
 }
 if (VAR_15 & (VAR_3 | VAR_2)) {
  FUNC_5(VAR_14->rdev,
           VAR_9, ((void*)0));
  VAR_16 |= VAR_15 & (VAR_3 | VAR_2);
 }
 if (VAR_15 & VAR_4) {
  FUNC_5(VAR_14->rdev,
           VAR_10,
           ((void*)0));
  VAR_16 |= VAR_4;
 }

 FUNC_6(VAR_14->rdev);

 if (VAR_16) {

  VAR_17 = FUNC_3(VAR_14->regmap, VAR_5, VAR_16);
  if (VAR_17 < 0)
   goto error_i2c;

  VAR_18 = VAR_6;
 }

 return VAR_18;

error_i2c:
 FUNC_0(FUNC_1(VAR_14->regmap), "I2C error : %d\n", VAR_17);
 return VAR_18;
}
