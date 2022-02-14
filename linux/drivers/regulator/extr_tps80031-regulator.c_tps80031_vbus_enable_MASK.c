
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps80031_regulator {int dev; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct tps80031_regulator* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5)
{
 struct tps80031_regulator *VAR_6 = FUNC_1(VAR_5);
 struct device *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_4,
    VAR_2, VAR_1);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "reg 0x%02x read failed, e = %d\n",
     VAR_2, VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_4,
    VAR_3, VAR_0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "reg 0x%02x read failed, e = %d\n",
   VAR_3, VAR_8);
  return VAR_8;
 }
 return VAR_8;
}
