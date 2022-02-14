
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int config2; int id; int config1; } ;
typedef int ssize_t ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_7,
           struct device_attribute *VAR_8,
           char *VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_0(VAR_7);
 struct adt7316_chip_info *VAR_11 = FUNC_1(VAR_10);

 if (!(VAR_11->config2 & VAR_0))
  return -VAR_4;

 switch (VAR_11->config2 & VAR_1) {
 case 131:
  return FUNC_2(VAR_9, "0 - VDD\n");
 case 132:
  return FUNC_2(VAR_9, "1 - Internal Temperature\n");
 case 133:
  if (((VAR_11->id & VAR_6) == VAR_5) &&
      (VAR_11->config1 & VAR_2) == 0)
   return FUNC_2(VAR_9, "2 - AIN1\n");

  return FUNC_2(VAR_9, "2 - External Temperature\n");
 case 130:
  if ((VAR_11->config1 & VAR_2) == 0)
   return FUNC_2(VAR_9, "3 - AIN2\n");

  return FUNC_2(VAR_9, "N/A\n");
 case 129:
  if (VAR_11->config1 & VAR_3)
   return FUNC_2(VAR_9, "4 - AIN3\n");

  return FUNC_2(VAR_9, "N/A\n");
 case 128:
  return FUNC_2(VAR_9, "5 - AIN4\n");
 default:
  return FUNC_2(VAR_9, "N/A\n");
 }
}
