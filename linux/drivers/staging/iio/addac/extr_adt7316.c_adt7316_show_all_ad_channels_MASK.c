
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int config2; int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_0(VAR_4);
 struct adt7316_chip_info *VAR_8 = FUNC_1(VAR_7);

 if (!(VAR_8->config2 & VAR_0))
  return -VAR_1;

 if ((VAR_8->id & VAR_3) == VAR_2)
  return FUNC_2(VAR_6, "0 - VDD\n1 - Internal Temperature\n"
    "2 - External Temperature or AIN1\n"
    "3 - AIN2\n4 - AIN3\n5 - AIN4\n");
 return FUNC_2(VAR_6, "0 - VDD\n1 - Internal Temperature\n"
   "2 - External Temperature\n");
}
