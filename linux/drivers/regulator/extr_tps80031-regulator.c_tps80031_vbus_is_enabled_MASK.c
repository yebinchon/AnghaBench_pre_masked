
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps80031_regulator {int dev; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct tps80031_regulator* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6)
{
 struct tps80031_regulator *VAR_7 = FUNC_1(VAR_6);
 struct device *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = -VAR_1;
 uint8_t VAR_10 = 0;
 uint8_t VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_8, VAR_5,
   VAR_3, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "reg 0x%02x read failed, e = %d\n",
   VAR_3, VAR_9);
  return VAR_9;
 }
 VAR_9 = FUNC_3(VAR_8, VAR_5,
    VAR_4, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "reg 0x%02x read failed, e = %d\n",
   VAR_4, VAR_9);
  return VAR_9;
 }
 if ((VAR_10 & VAR_2) && (VAR_11 & VAR_0))
  return 1;
 return VAR_9;
}
